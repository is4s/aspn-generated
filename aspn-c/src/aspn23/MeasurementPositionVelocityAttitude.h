
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeHeader.h"
#include "TypeTimestamp.h"
#include "TypeIntegrity.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Defines measurement reference.
 */

enum Aspn23MeasurementPositionVelocityAttitudeReferenceFrame {

	/**
	 * Sensor position, velocity, and attitude relative to the earth-centered, inertial (ECi) frame.
	 * Position is expressed where p1, p2, and p3 are the x, y, and z components of ECI position in
	 * meters, respectively. Velocity is expressed where v1, v2, and v3 are the x, y, and z
	 * components of velocity with respect to the ECi frame in m/s, respectively. Attitude is
	 * expressed as a four-element quaternion. Position, in whole or in part, is optional. Velocity,
	 * in whole or in part, is optional. Attitude is optional, but if included, must be 3
	 * dimensional. Error covariance is given using x-axis position error component (meters), y-axis
	 * position error component (meters), z-axis position error component (meters), x-axis velocity
	 * error component (m/s), y-axis velocity error component (m/s), z-axis velocity error component
	 * (m/s), tilt error about the x-axis (rad), tilt error about the y-axis (rad), and tilt error
	 * about the z-axis (rad). In the case of nulled position, velocity, or attitude, the
	 * corresponding error covariance terms are omitted. See also ECi coordinate frame definition
	 * for x, y, and z definitions.
	 */

	ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_REFERENCE_FRAME_ECI,

	/**
	 * Sensor position, velocity, and attitude relative to the WGS-84 reference. Position is
	 * expressed where p1 is the geodetic latitude in radians, p2 is the longitude in radians, and
	 * p3 is the geodetic altitude (or height above the WGS-84 ellipsoid) in meters. Velocity with
	 * respect to the local level geographical frame with the origin at the sensor position is
	 * expressed using the North-East-Down (NED) convention, where v1 is the north velocity
	 * component in m/s, v2 is the east velocity component in m/s, and v3 is the down velocity
	 * component in m/s. Attitude is the sensor frame rotation relative to the local level frame
	 * expressed as a four-element quaternion. Position, in whole or in part, is optional. Velocity,
	 * in whole or in part, is optional. Attitude is optional, but if included, must be 3
	 * dimensional. Error covariance is given using north-south position error (meters), east-west
	 * position error (meters), geodetic altitude error (meters), north velocity component error
	 * (m/s), east velocity component error (m/s), down velocity component error (m/s), tilt error
	 * about the north axis (rad), tilt error about the east axis (rad), and tilt error about the
	 * down axis (rad). In the case of nulled position, velocity, or attitude, the corresponding
	 * error covariance terms are omitted.
	 */

	ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_REFERENCE_FRAME_GEODETIC
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementPositionVelocityAttitudeErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_ERROR_MODEL_NONE
};

/**
 * Position, velocity, and attitude. Position, in whole or in part, is optional. Velocity, in whole
 * or in part, is optional. Attitude is optional, but if included, must be 3-dimensional. Position
 * is relative to a user-defined reference frame. Velocity is time rate of change of position with
 * respect to the user-specified reference frame. Attitude expressed as a quaternion, a four element
 * vector representation, the elements of which are functions of the orientation of the vector and
 * the magnitude of the rotation.
 */

typedef struct Aspn23MeasurementPositionVelocityAttitude {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Defines measurement reference.
	 */

	enum Aspn23MeasurementPositionVelocityAttitudeReferenceFrame reference_frame;

	/**
	 * First position term as defined in enum.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double p1;

	/**
	 * Second position term as defined in enum.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double p2;

	/**
	 * Third position term as defined in enum.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double p3;

	/**
	 * Velocity along the first axis of the measurement reference frame enumerated in
	 * reference_frame.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double v1;

	/**
	 * Velocity along the second axis of the measurement reference frame enumerated in
	 * reference_frame.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double v2;

	/**
	 * Velocity along the third axis of the measurement reference frame enumerated in
	 * reference_frame.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double v3;

	/**
	 * Four element quaternion, q = [a, b, c, d], where a = cos(phi/2), b = (phi_x/phi)*sin(phi/2),
	 * c = (phi_y/phi)*sin(phi/2), and d = (phi_z/phi)*sin(phi/2). In this description, the vector
	 * [phi_x, phi_y, phi_z] represents the rotation vector that describes the frame rotation to be
	 * applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into the axes that describe
	 * the measured attitude, and the value phi is the magnitude of the [phi_x, phi_y, phi_z]
	 * vector. See "conventions" documentation for more detailed information.
	 *
	 * An array of NaNs indicates this optional field is not provided.
	 */

	double quaternion[4];

	/**
	 * Dimension of measurement provided. In this sense, num_meas is the number of measurement terms
	 * that include valid data.
	 */

	uint8_t num_meas;

	/**
	 * Measurement error variance or covariance depending on measurement dimension. NOTE: Attitude
	 * errors are expressed as tilt errors, so if an attitude is provided, that should count as 3
	 * terms in num_meas. For example, a 3-D position, 3-D velocity, and attitude expressed as a
	 * quaternion (which takes 10 terms total to describe) is num_meas = 9. A second example is a
	 * 3-D position and 3-D velocity is num_meas = 6. Dimensions of covariance must be num_meas²
	 */

	double* covariance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementPositionVelocityAttitudeErrorModel error_model;

	/**
	 * Number of parameters required for the error model chosen.
	 */

	uint16_t num_error_model_params;

	/**
	 * Error model parameters that characterize the optional error model.
	 */

	double* error_model_params;

	/**
	 * Number of integrity values.
	 */

	uint8_t num_integrity;

	/**
	 * Measurement integrity. Includes the integrity method used and an integrity value (which is to
	 * be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
	 * to report multiple integrity values based on multiple integrity methods.
	 */

	Aspn23TypeIntegrity* integrity;

} Aspn23MeasurementPositionVelocityAttitude;

Aspn23MeasurementPositionVelocityAttitude* ASPN_NULLABLE
aspn23_measurement_position_velocity_attitude_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    enum Aspn23MeasurementPositionVelocityAttitudeReferenceFrame reference_frame,
    double p1,
    double p2,
    double p3,
    double v1,
    double v2,
    double v3,
    double quaternion[4],
    uint8_t num_meas,
    double* covariance,
    enum Aspn23MeasurementPositionVelocityAttitudeErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity);

Aspn23MeasurementPositionVelocityAttitude* ASPN_NULLABLE
aspn23_measurement_position_velocity_attitude_copy(Aspn23MeasurementPositionVelocityAttitude*);

/**
 * free() all memory held by the given Aspn23MeasurementPositionVelocityAttitude,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_position_velocity_attitude_free(void* pointer);
void aspn23_measurement_position_velocity_attitude_free_members(
    Aspn23MeasurementPositionVelocityAttitude* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
