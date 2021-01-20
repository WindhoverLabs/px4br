/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.6 at Wed Oct 26 00:46:15 2016. */

#include "position_setpoint.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t px4_position_setpoint_pb_fields[31] = {
    PB_FIELD(  1, UINT64  , REQUIRED, STATIC  , FIRST, px4_position_setpoint_pb, timestamp, timestamp, 0),
    PB_FIELD(  2, DOUBLE  , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, lat, timestamp, 0),
    PB_FIELD(  3, DOUBLE  , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, lon, lat, 0),
    PB_FIELD(  4, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, x, lon, 0),
    PB_FIELD(  5, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, y, x, 0),
    PB_FIELD(  6, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, z, y, 0),
    PB_FIELD(  7, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, vx, z, 0),
    PB_FIELD(  8, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, vy, vx, 0),
    PB_FIELD(  9, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, vz, vy, 0),
    PB_FIELD( 10, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, alt, vz, 0),
    PB_FIELD( 11, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, yaw, alt, 0),
    PB_FIELD( 12, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, yawspeed, yaw, 0),
    PB_FIELD( 13, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, loiter_radius, yawspeed, 0),
    PB_FIELD( 14, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, pitch_min, loiter_radius, 0),
    PB_FIELD( 15, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, a_x, pitch_min, 0),
    PB_FIELD( 16, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, a_y, a_x, 0),
    PB_FIELD( 17, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, a_z, a_y, 0),
    PB_FIELD( 18, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, acceptance_radius, a_z, 0),
    PB_FIELD( 19, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, cruising_speed, acceptance_radius, 0),
    PB_FIELD( 20, FLOAT   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, cruising_throttle, cruising_speed, 0),
    PB_FIELD( 21, BOOL    , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, valid, cruising_throttle, 0),
    PB_FIELD( 22, UINT32  , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, type, valid, 0),
    PB_FIELD( 23, BOOL    , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, position_valid, type, 0),
    PB_FIELD( 24, BOOL    , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, velocity_valid, position_valid, 0),
    PB_FIELD( 25, BOOL    , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, yaw_valid, velocity_valid, 0),
    PB_FIELD( 26, BOOL    , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, disable_mc_yaw_control, yaw_valid, 0),
    PB_FIELD( 27, BOOL    , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, yawspeed_valid, disable_mc_yaw_control, 0),
    PB_FIELD( 28, INT32   , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, loiter_direction, yawspeed_valid, 0),
    PB_FIELD( 29, BOOL    , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, acceleration_valid, loiter_direction, 0),
    PB_FIELD( 30, BOOL    , REQUIRED, STATIC  , OTHER, px4_position_setpoint_pb, acceleration_is_force, acceleration_valid, 0),
    PB_LAST_FIELD
};


/* On some platforms (such as AVR), double is really float.
 * These are not directly supported by nanopb, but see example_avr_double.
 * To get rid of this error, remove any double fields from your .proto.
 */
PB_STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)

/* @@protoc_insertion_point(eof) */