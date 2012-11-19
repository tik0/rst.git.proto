# Describes the state of a set of torque controlled joints.
#
# Joints can be revolute or prismatic and are uniquely identified by
# their respective names.
#
# This message consists of a multiple arrays, one for each part of the
# joint state. The goal is to make each of the fields optional. When
# e.g. your joints have no effort associated with them, you can leave
# the effort array empty.

# All arrays in this message should have the same size, or be empty.
# This is the only way to uniquely associate the joint name with the
# correct states:
#
# @constraint(len(.name) == len(.position)
#             or (len(.name) == 0)
#             or (len(.position) == 0))
# @constraint(len(.position) == len(.velocity)
#             or (len(.position) == 0)
#             or (len(.velocity) == 0))
# @constraint(len(.velocity) == len(.effort)
#             or (len(.velocity) == 0)
#             or (len(.effort) == 0))

# Specifies the time at which the joint states were recorded. All the
# joint states in one message have to be recorded at the same time.
Header header

string[] name

# The position of the joint.
# @unit(radian or meter)
float64[] position

# The velocity of the joint.
# @unit(radian/s or meter/s)
float64[] velocity

# The effort that is applied in the joint
# @unit(newton-meter or newton)
float64[] effort
