
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeMounting.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Describes the translational and angular offset between the sensor frame and the platform body
 * frame. Platform body frame is defined using axes in forward, right, and down convention, and the
 * origin is system defined. This type also contains the uncertainty associated with the
 * translational and angular offset.
 */
class TypeMounting {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeMounting(Aspn23TypeMounting* c_struct, bool take_ownership = true);

	TypeMounting(xt::xtensor_fixed<double, xt::xshape<3>> lever_arm,
	             xt::xtensor_fixed<double, xt::xshape<3>> lever_arm_sigma,
	             xt::xtensor_fixed<double, xt::xshape<4>> orientation_quaternion,
	             xt::xtensor_fixed<double, xt::xshape<3, 3>> orientation_tilt_error_covariance);

	~TypeMounting();

	TypeMounting(const TypeMounting& other);
	TypeMounting& operator=(const TypeMounting& rhs);

	TypeMounting(TypeMounting&& other);
	TypeMounting& operator=(TypeMounting&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeMounting* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeMounting* replacement_struct, bool take_ownership = true);

	/**
	 * 3x1 lever arm vector describing the sensor position in the platform body frame.
	 */
	xt::xtensor_fixed<double, xt::xshape<3>> get_lever_arm() const;

	/**
	 * 3x1 lever arm vector describing the sensor position in the platform body frame.
	 */
	void set_lever_arm(xt::xtensor_fixed<double, xt::xshape<3>>);

	/**
	 * 3x1 lever arm uncertainty vector as standard deviations in the platform body frame.
	 */
	xt::xtensor_fixed<double, xt::xshape<3>> get_lever_arm_sigma() const;

	/**
	 * 3x1 lever arm uncertainty vector as standard deviations in the platform body frame.
	 */
	void set_lever_arm_sigma(xt::xtensor_fixed<double, xt::xshape<3>>);

	/**
	 * Four element quaternion, q = [a, b, c, d], where a = cos(phi/2), b = (phi_x/phi)*sin(phi/2),
	 * c = (phi_y/phi)*sin(phi/2), and d = (phi_z/phi)*sin(phi/2). In this description, the vector
	 * [phi_x, phi_y, phi_z] represents the rotation vector that describes the frame rotation to be
	 * applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into the axes that describe
	 * the measured attitude, and the value phi is the magnitude of the [phi_x, phi_y, phi_z]
	 * vector. Orientation is optional in the sense that orientation shall be specified except in
	 * the case that orientation is meaningless, for example, in the case of an RF antenna mounting.
	 * See "conventions" documentation for more detailed information.
	 */
	xt::xtensor_fixed<double, xt::xshape<4>> get_orientation_quaternion() const;

	/**
	 * Four element quaternion, q = [a, b, c, d], where a = cos(phi/2), b = (phi_x/phi)*sin(phi/2),
	 * c = (phi_y/phi)*sin(phi/2), and d = (phi_z/phi)*sin(phi/2). In this description, the vector
	 * [phi_x, phi_y, phi_z] represents the rotation vector that describes the frame rotation to be
	 * applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into the axes that describe
	 * the measured attitude, and the value phi is the magnitude of the [phi_x, phi_y, phi_z]
	 * vector. Orientation is optional in the sense that orientation shall be specified except in
	 * the case that orientation is meaningless, for example, in the case of an RF antenna mounting.
	 * See "conventions" documentation for more detailed information.
	 */
	void set_orientation_quaternion(xt::xtensor_fixed<double, xt::xshape<4>>);

	/**
	 * Tilt error covariance matrix. This matrix represents the uncertainty in the "tilt errors"
	 * that represent the additional rotation to be applied to the provided attitude quaternion in
	 * order to convert it to the true attitude with no errors. By convention, these "tilt errors"
	 * are expressed in the reference frame (ECI, ECEF, or NED). Tilt error covariance is optional
	 * only because orientation itself is optional. Orientation error covariance shall be provided
	 * if orientation is provided. See "conventions" documentation for more detailed information.
	 *
	 * This matrix must contain all real numbers or all NaNs.
	 */
	xt::xtensor_fixed<double, xt::xshape<3, 3>> get_orientation_tilt_error_covariance() const;

	/**
	 * Tilt error covariance matrix. This matrix represents the uncertainty in the "tilt errors"
	 * that represent the additional rotation to be applied to the provided attitude quaternion in
	 * order to convert it to the true attitude with no errors. By convention, these "tilt errors"
	 * are expressed in the reference frame (ECI, ECEF, or NED). Tilt error covariance is optional
	 * only because orientation itself is optional. Orientation error covariance shall be provided
	 * if orientation is provided. See "conventions" documentation for more detailed information.
	 *
	 * This matrix must contain all real numbers or all NaNs.
	 */
	void set_orientation_tilt_error_covariance(xt::xtensor_fixed<double, xt::xshape<3, 3>>);

private:
	Aspn23TypeMounting* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
