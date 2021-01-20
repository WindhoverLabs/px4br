/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.6 at Wed Oct 26 00:46:16 2016. */

#include "sensor_gyro.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t px4_sensor_gyro_pb_fields[18] = {
    PB_FIELD(  1, UINT64  , REQUIRED, STATIC  , FIRST, px4_sensor_gyro_pb, timestamp, timestamp, 0),
    PB_FIELD(  2, UINT64  , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, integral_dt, timestamp, 0),
    PB_FIELD(  3, UINT64  , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, error_count, integral_dt, 0),
    PB_FIELD(  4, FLOAT   , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, x, error_count, 0),
    PB_FIELD(  5, FLOAT   , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, y, x, 0),
    PB_FIELD(  6, FLOAT   , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, z, y, 0),
    PB_FIELD(  7, FLOAT   , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, x_integral, z, 0),
    PB_FIELD(  8, FLOAT   , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, y_integral, x_integral, 0),
    PB_FIELD(  9, FLOAT   , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, z_integral, y_integral, 0),
    PB_FIELD( 10, FLOAT   , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, temperature, z_integral, 0),
    PB_FIELD( 11, FLOAT   , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, range_rad_s, temperature, 0),
    PB_FIELD( 12, FLOAT   , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, scaling, range_rad_s, 0),
    PB_FIELD( 13, UINT32  , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, device_id, scaling, 0),
    PB_FIELD( 14, INT32   , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, x_raw, device_id, 0),
    PB_FIELD( 15, INT32   , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, y_raw, x_raw, 0),
    PB_FIELD( 16, INT32   , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, z_raw, y_raw, 0),
    PB_FIELD( 17, INT32   , REQUIRED, STATIC  , OTHER, px4_sensor_gyro_pb, temperature_raw, z_raw, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */
