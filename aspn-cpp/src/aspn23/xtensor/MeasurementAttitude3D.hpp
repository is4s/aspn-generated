
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MeasurementAttitude3D.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeHeader.hpp"
#include "TypeTimestamp.hpp"
#include "TypeIntegrity.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Three-dimensional attitude expressed as a quaternion, a four element vector representation, the
 * elements of which are functions of the orientation of the vector and the magnitude of the
 * rotation.
 */
class MeasurementAttitude3D : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MeasurementAttitude3D(Aspn23MeasurementAttitude3D* c_struct, bool take_ownership = true);

	MeasurementAttitude3D(TypeHeader header,
	                      TypeTimestamp time_of_validity,
	                      Aspn23MeasurementAttitude3DReferenceFrame reference_frame,
	                      xt::xtensor_fixed<double, xt::xshape<4>> quaternion,
	                      xt::xtensor_fixed<double, xt::xshape<3, 3>> tilt_error_covariance,
	                      Aspn23MeasurementAttitude3DErrorModel error_model,
	                      xt::xtensor<double, 1> error_model_params,
	                      std::vector<TypeIntegrity> integrity);

	~MeasurementAttitude3D();

	MeasurementAttitude3D(const MeasurementAttitude3D& other);
	MeasurementAttitude3D& operator=(const MeasurementAttitude3D& rhs);

	MeasurementAttitude3D(MeasurementAttitude3D&& other);
	MeasurementAttitude3D& operator=(MeasurementAttitude3D&& rhs);

	Aspn23MessageType get_message_type() const override;
	void set_message_type(Aspn23MessageType) override;

	uint32_t get_vendor_id() const override;
	void set_vendor_id(uint32_t) override;

	uint64_t get_device_id() const override;
	void set_device_id(uint64_t) override;

	uint32_t get_context_id() const override;
	void set_context_id(uint32_t) override;

	uint16_t get_sequence_id() const override;
	void set_sequence_id(uint16_t) override;

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23MeasurementAttitude3D* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MeasurementAttitude3D* replacement_struct, bool take_ownership = true);

	/**
	 * Standard ASPN measurement header.
	 */
	TypeHeader get_header() const;

	/**
	 * Standard ASPN measurement header.
	 */
	void set_header(TypeHeader);

	/**
	 * Time at which the measurement is considered to be valid .
	 */
	TypeTimestamp get_time_of_validity() const;

	/**
	 * Time at which the measurement is considered to be valid .
	 */
	void set_time_of_validity(TypeTimestamp);

	/**
	 * Defines measurement reference.
	 */
	Aspn23MeasurementAttitude3DReferenceFrame get_reference_frame() const;

	/**
	 * Defines measurement reference.
	 */
	void set_reference_frame(Aspn23MeasurementAttitude3DReferenceFrame);

	/**
	 * Four element quaternion, q = [a, b, c, d], where a = cos(phi/2), b = (phi_x/phi)*sin(phi/2),
	 * c = (phi_y/phi)*sin(phi/2), and d = (phi_z/phi)*sin(phi/2). In this description, the vector
	 * [phi_x, phi_y, phi_z] represents the rotation vector that describes the frame rotation to be
	 * applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into the axes that describe
	 * the measured attitude, and the value phi is the magnitude of the [phi_x, phi_y, phi_z]
	 * vector. See "conventions" documentation for more detailed information.
	 */
	xt::xtensor_fixed<double, xt::xshape<4>> get_quaternion() const;

	/**
	 * Four element quaternion, q = [a, b, c, d], where a = cos(phi/2), b = (phi_x/phi)*sin(phi/2),
	 * c = (phi_y/phi)*sin(phi/2), and d = (phi_z/phi)*sin(phi/2). In this description, the vector
	 * [phi_x, phi_y, phi_z] represents the rotation vector that describes the frame rotation to be
	 * applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into the axes that describe
	 * the measured attitude, and the value phi is the magnitude of the [phi_x, phi_y, phi_z]
	 * vector. See "conventions" documentation for more detailed information.
	 */
	void set_quaternion(xt::xtensor_fixed<double, xt::xshape<4>>);

	/**
	 * Tilt error covariance matrix. This matrix represents the uncertainty in the "tilt errors"
	 * that represent the additional rotation to be applied to the provided attitude quaternion in
	 * order to convert it to the true attitude with no errors. By convention, these "tilt errors"
	 * are expressed in the reference frame (ECI, ECEF, or NED). See "conventions" documentation for
	 * more detailed information.
	 */
	xt::xtensor_fixed<double, xt::xshape<3, 3>> get_tilt_error_covariance() const;

	/**
	 * Tilt error covariance matrix. This matrix represents the uncertainty in the "tilt errors"
	 * that represent the additional rotation to be applied to the provided attitude quaternion in
	 * order to convert it to the true attitude with no errors. By convention, these "tilt errors"
	 * are expressed in the reference frame (ECI, ECEF, or NED). See "conventions" documentation for
	 * more detailed information.
	 */
	void set_tilt_error_covariance(xt::xtensor_fixed<double, xt::xshape<3, 3>>);

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	Aspn23MeasurementAttitude3DErrorModel get_error_model() const;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	void set_error_model(Aspn23MeasurementAttitude3DErrorModel);

	/**
	 * Number of parameters required for the error model chosen.
	 */
	uint16_t get_num_error_model_params() const;

	/**
	 * Error model parameters that characterize the optional error model.
	 */
	xt::xtensor<double, 1> get_error_model_params() const;

	/**
	 * Error model parameters that characterize the optional error model.
	 */
	void set_error_model_params(xt::xtensor<double, 1>);

	/**
	 * Number of integrity values.
	 */
	uint8_t get_num_integrity() const;

	/**
	 * Measurement integrity. Includes the integrity method used and an integrity value (which is to
	 * be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
	 * to report multiple integrity values based on multiple integrity methods.
	 */
	std::vector<TypeIntegrity> get_integrity() const;

	/**
	 * Measurement integrity. Includes the integrity method used and an integrity value (which is to
	 * be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
	 * to report multiple integrity values based on multiple integrity methods.
	 */
	void set_integrity(std::vector<TypeIntegrity>);

private:
	Aspn23MeasurementAttitude3D* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
