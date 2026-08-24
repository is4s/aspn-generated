
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

enum Aspn23MeasurementAttitude3DReferenceFrame {

	/**
	 * Absolute inertial attitude. Sensor frame attitude relative to the earth-centered, inertial
	 * (ECi) frame. See also ECi coordinate frame definition for x, y, and z definitions.
	 */

	ASPN23_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_ECI,

	/**
	 * Attitude relative to Earth. Sensor frame attitude relative to the ECEF frame. Generally, time
	 * is required to convert between absolute inertial attitude and attitude relative to Earth. See
	 * also ECEF coordinate frame definition for x, y, and z definitions.
	 */

	ASPN23_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_ECEF,

	/**
	 * Local level, geographic attitude. Sensor frame attitude with respect to earth-fixed frame
	 * expressed in the North-East-Down (NED), local level frame. See also NED coordinate frame
	 * definition for N, E, and D definitions. Generally, position is required to convert between
	 * attitude relative to the earth and locally level, geographic attitude. See also NED
	 * coordinate frame definition for N, E, and D definitions.
	 */

	ASPN23_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_NED
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementAttitude3DErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_ATTITUDE_3D_ERROR_MODEL_NONE
};

/**
 * Three-dimensional attitude expressed as a quaternion, a four element vector representation, the
 * elements of which are functions of the orientation of the vector and the magnitude of the
 * rotation.
 */

typedef struct Aspn23MeasurementAttitude3D {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid .
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Defines measurement reference.
	 */

	enum Aspn23MeasurementAttitude3DReferenceFrame reference_frame;

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
	 * Tilt error covariance matrix. This matrix represents the uncertainty in the "tilt errors"
	 * that represent the additional rotation to be applied to the provided attitude quaternion in
	 * order to convert it to the true attitude with no errors. By convention, these "tilt errors"
	 * are expressed in the reference frame (ECI, ECEF, or NED). See "conventions" documentation for
	 * more detailed information.
	 */

	double tilt_error_covariance[3][3];

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementAttitude3DErrorModel error_model;

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

} Aspn23MeasurementAttitude3D;

Aspn23MeasurementAttitude3D* ASPN_NULLABLE
aspn23_measurement_attitude_3d_new(Aspn23TypeHeader* header,
                                   Aspn23TypeTimestamp* time_of_validity,
                                   enum Aspn23MeasurementAttitude3DReferenceFrame reference_frame,
                                   double quaternion[4],
                                   double tilt_error_covariance[3][3],
                                   enum Aspn23MeasurementAttitude3DErrorModel error_model,
                                   uint16_t num_error_model_params,
                                   double* error_model_params,
                                   uint8_t num_integrity,
                                   Aspn23TypeIntegrity* integrity);

Aspn23MeasurementAttitude3D* ASPN_NULLABLE
aspn23_measurement_attitude_3d_copy(Aspn23MeasurementAttitude3D*);

/**
 * free() all memory held by the given Aspn23MeasurementAttitude3D,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_attitude_3d_free(void* pointer);
void aspn23_measurement_attitude_3d_free_members(Aspn23MeasurementAttitude3D* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
