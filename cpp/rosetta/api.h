/* ============================================================
 *
 * This file is part of the Rosetta Stone project.
 *
 * Copyright (C) 2012 Jan Moringen <jmoringe@techfak.uni-bielefeld.de>
 *
 * This file may be licensed under the terms of the
 * GNU Lesser General Public License Version 3 (the ``LGPL''),
 * or (at your option) any later version.
 *
 * Software distributed under the License is distributed
 * on an ``AS IS'' basis, WITHOUT WARRANTY OF ANY KIND, either
 * express or implied. See the LGPL for the specific language
 * governing rights and limitations.
 *
 * You should have received a copy of the LGPL along with this
 * program. If not, go to http://www.gnu.org/licenses/lgpl.html
 * or write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The development of this software was supported by:
 *   CoR-Lab, Research Institute for Cognition and Robotics
 *     Bielefeld University
 *
 * ============================================================  */

#pragma once

#include <assert.h>

#include <vector>

#include <iostream>

#include <boost/cstdint.hpp>

#define DEFINE_MECHANISM(NAME)                  \
namespace rosetta {                             \
  struct NAME {                                 \
    static const std::string name() {           \
      return "" #NAME "";                       \
    }                                           \
  };                                            \
}

#define DEFINE_WIRE_SCHEMA(NAME, STRING)        \
  namespace rosetta {                           \
    struct NAME {                               \
      static const std::string name() {         \
        return "" #STRING "";                   \
      }                                         \
    };                                          \
  }

namespace rosetta {

// Types

typedef boost::uint64_t offset;

typedef std::vector<unsigned char> octetVector;

// Interface

/**
 * Compute the number of octets required to pack @a source in the
 * format specified by @a Mechanism.
 *
 * @tparam Mechanism Tag type identifying the serialization mechanism
 *                   that should be used.
 * @tparam Type Type of @a source.
 *
 * @param source Object for which the packed size should be computed.
 * @return The number of octets required to pack @a source.
 */
template <typename Mechanism,
	  typename WireSchema,
          typename Type>
offset
packedSize(const Type& source);

/**
 * Pack @a source into the buffer @a destination (in the format
 * specified by @a Mechanism).
 *
 * @tparam Mechanism Tag type identifying the serialization mechanism
 *                   that should be used.
 * @tparam Type Type of @a source.
 *
 * @param source Object which should be packed into @a destination.
 * @param destination Buffer into which @a source should be packed.
 * @param start Offset into @a destination bounding the range into
 *              which @a source should be packed.
 * @param end Offset into @a destination bounding the range into which
 *            @a source should be packed.
 * @return The number of octets stored into @a destination.
 */
template <typename Mechanism,
	  typename WireSchema,
          typename Type>
offset
pack(const Type&  source,
     octetVector& destination,
     offset       start,
     offset       end);

/**
 * Unpack serialized content of @a source (in a format specified by @a
 * Mechanism) into @a destination.
 *
 * @tparam Mechanism Tag type identifying the serialization mechanism
 *                   that should be used.
 * @tparam Type Type of @a destination.
 *
 * @param source Serialized content that should be unpacked into @a
 *               destination.
 * @param destination Mutable reference to the object into which the
 *                    serialized content in @a source should be
 *                    unpacked.
 * @param start Offset into @a source bounding the range that should
 *              be considered for unpacking.
 * @param end Offset into @a source bounding the range that should be
 *            considered for unpacking.
 * @return The number of octets that have been consumed in @a source.
 */
template <typename Mechanism,
	  typename WireSchema,
          typename Type>
offset
unpack(const octetVector& source,
       Type&              destination,
       offset             start,
       offset             end);

// Some convenient default behavior

template <typename Mechanism,
	  typename WireSchema,
          typename Type>
offset
pack(const Type&   source,
     std::ostream& destination,
     offset        start = 0,
     offset        end   = 0) {
    assert(start == 0);

    octetVector buffer((start == end)
                       ? packedSize<Mechanism, WireSchema>(source)
                       : (end - start));
    offset length = pack<Mechanism, WireSchema>(source, buffer, 0, 0);
    destination.write((const char*) &buffer[0], length);
    return length;
}

template <typename Mechanism,
	  typename WireSchema,
          typename Type>
offset
unpack(std::istream& source,
       Type&         destination,
       offset        start = 0,
       offset        end   = 0) {
    assert(start == 0);

    offset length = end - start;
    octetVector buffer(length);
    source.read((char*) &buffer[0], length);
    offset consumed = unpack<Mechanism, WireSchema>(buffer, destination, 0, length);
    assert(length == consumed);
    return consumed;
}

}
