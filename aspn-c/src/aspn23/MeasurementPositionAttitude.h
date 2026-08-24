
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

enum Aspn23MeasurementPositionAttitudeReferenceFrame {

	/**
	 * Sensor position and attitude relative to the earth-centered, inertial (ECi) frame. Position
	 * is expressed where p1, p2, and p3 are the x, y, and z components of ECI position in meters,
	 * respectively. Attitude is expressed as a four-element quaternion. Error covariance is given
	 * using x-axis position error component (meters), y-axis position error component (meters),
	 * z-axis position error component (meters), tilt error about the x-axis (rad), tilt error about
	 * the y-axis (rad), and tilt error about the z-axis (rad). See also ECi coordinate frame
	 * definition for x, y, and z definitions.
	 */

	ASPN23_MEASUREMENT_POSITION_ATTITUDE_REFERENCE_FRAME_ECI,

	/**
	 * Sensor position, and attitude relative to the WGS-84 reference. Position is expressed where
	 * p1 is the geodetic latitude in radians, p2 is the longitude in radians, and p3 is the
	 * geodetic altitude (or height above the WGS-84 ellipsoid) in meters. Attitude is the sensor
	 * frame rotation relative to the local level frame expressed as a four-element quaternion.
	 * Error covariance is given using north-south position error (meters), east-west position error
	 * (meters), geodetic altitude error (meters), tilt error about the north axis (rad), tilt error
	 * about the east axis (rad), and tilt error about the down axis (rad).
	 */

	ASPN23_MEASUREMENT_POSITION_ATTITUDE_REFERENCE_FRAME_GEODETIC
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementPositionAttitudeErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_POSITION_ATTITUDE_ERROR_MODEL_NONE
};

/**
 * Position and attitude, also known as pose. Position is relative to a user-defined reference
 * frame. Attitude expressed as a quaternion, a four element vector representation, the elements of
 * which are functions of the orientation of the vector and the magnitude of the rotation.
 */

typedef struct Aspn23MeasurementPositionAttitude {

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

	enum Aspn23MeasurementPositionAttitudeReferenceFrame reference_frame;

	/**
	 * First position term as defined in enum.
	 */

	double p1;

	/**
	 * First position term as defined in enum.
	 */

	double p2;

	/**
	 * First position term as defined in enum.
	 */

	double p3;

	/**
	 * Four element quaternion, q = [a, b, c, d], where a = cos(phi/2), b = (phi_x/phi)*sin(phi/2),
	 * c = (phi_y/phi)*sin(phi/2), and d = (phi_z/phi)*sin(phi/2). In this description, the vector
	 * [phi_x, phi_y, phi_z] represents the rotation vector that describes the frame rotation to be
	 * applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into the axes that describe
	 * the measured attitude, and the value phi is the magnitude of the [phi_x, phi_y, phi_z]
	 * vector. See "conventions" documentation for more detailed information.
	 */

	double quaternion[4];

	/**
	 * Measurement error variance or covariance depending on measurement dimension.
	 */

	double covariance[6][6];

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementPositionAttitudeErrorModel error_model;

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

} Aspn23MeasurementPositionAttitude;

Aspn23MeasurementPositionAttitude* ASPN_NULLABLE aspn23_measurement_position_attitude_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    enum Aspn23MeasurementPositionAttitudeReferenceFrame reference_frame,
    double p1,
    double p2,
    double p3,
    double quaternion[4],
    double covariance[6][6],
    enum Aspn23MeasurementPositionAttitudeErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity);

Aspn23MeasurementPositionAttitude* ASPN_NULLABLE
aspn23_measurement_position_attitude_copy(Aspn23MeasurementPositionAttitude*);

/**
 * free() all memory held by the given Aspn23MeasurementPositionAttitude,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_position_attitude_free(void* pointer);
void aspn23_measurement_position_attitude_free_members(Aspn23MeasurementPositionAttitude* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
