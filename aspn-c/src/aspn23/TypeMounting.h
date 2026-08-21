
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Describes the translational and angular offset between the sensor frame and the platform body
 * frame. Platform body frame is defined using axes in forward, right, and down convention, and the
 * origin is system defined. This type also contains the uncertainty associated with the
 * translational and angular offset.
 */

typedef struct Aspn23TypeMounting {

	/**
	 * 3x1 lever arm vector describing the sensor position in the platform body frame.
	 */

	double lever_arm[3];

	/**
	 * 3x1 lever arm uncertainty vector as standard deviations in the platform body frame.
	 */

	double lever_arm_sigma[3];

	/**
	 * Four element quaternion, q = [a, b, c, d], where a = cos(phi/2), b = (phi_x/phi)*sin(phi/2),
	 * c = (phi_y/phi)*sin(phi/2), and d = (phi_z/phi)*sin(phi/2). In this description, the vector
	 * [phi_x, phi_y, phi_z] represents the rotation vector that describes the frame rotation to be
	 * applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into the axes that describe
	 * the measured attitude, and the value phi is the magnitude of the [phi_x, phi_y, phi_z]
	 * vector. Orientation is optional in the sense that orientation shall be specified except in
	 * the case that orientation is meaningless, for example, in the case of an RF antenna mounting.
	 * See "conventions" documentation for more detailed information.
	 *
	 * An array of NaNs indicates this optional field is not provided.
	 */

	double orientation_quaternion[4];

	/**
	 * Tilt error covariance matrix. This matrix represents the uncertainty in the "tilt errors"
	 * that represent the additional rotation to be applied to the provided attitude quaternion in
	 * order to convert it to the true attitude with no errors. By convention, these "tilt errors"
	 * are expressed in the reference frame (ECI, ECEF, or NED). Tilt error covariance is optional
	 * only because orientation itself is optional. Orientation error covariance shall be provided
	 * if orientation is provided. See "conventions" documentation for more detailed information.
	 *
	 * A matrix of NaNs indicates this optional field is not provided.
	 */

	double orientation_tilt_error_covariance[3][3];

} Aspn23TypeMounting;

Aspn23TypeMounting* ASPN_NULLABLE
aspn23_type_mounting_new(double lever_arm[3],
                         double lever_arm_sigma[3],
                         double orientation_quaternion[4],
                         double orientation_tilt_error_covariance[3][3]);

Aspn23TypeMounting* ASPN_NULLABLE aspn23_type_mounting_copy(Aspn23TypeMounting*);

/**
 * free() all memory held by the given Aspn23TypeMounting,
 * including the struct itself.
 */

void aspn23_type_mounting_free(void* pointer);
void aspn23_type_mounting_free_members(Aspn23TypeMounting* self);

#ifdef __cplusplus
}  // extern "C"
#endif
