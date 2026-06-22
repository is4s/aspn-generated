
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MeasurementPositionVelocityAttitude.h>

// xtensor
#include <xtensor-python/pytensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeHeader.hpp"
#include "TypeTimestamp.hpp"
#include "TypeIntegrity.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Position, velocity, and attitude. Position, in whole or in part, is optional. Velocity, in whole
 * or in part, is optional. Attitude is optional, but if included, must be 3-dimensional. Position
 * is relative to a user-defined reference frame. Velocity is time rate of change of position with
 * respect to the user-specified reference frame. Attitude expressed as a quaternion, a four element
 * vector representation, the elements of which are functions of the orientation of the vector and
 * the magnitude of the rotation.
 */
class MeasurementPositionVelocityAttitude : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MeasurementPositionVelocityAttitude(Aspn23MeasurementPositionVelocityAttitude* c_struct,
	                                    bool take_ownership = true);

	MeasurementPositionVelocityAttitude(
	    TypeHeader header,
	    TypeTimestamp time_of_validity,
	    Aspn23MeasurementPositionVelocityAttitudeReferenceFrame reference_frame,
	    double p1,
	    double p2,
	    double p3,
	    double v1,
	    double v2,
	    double v3,
	    xt::pytensor<double, 1> quaternion,
	    xt::pytensor<double, 2> covariance,
	    Aspn23MeasurementPositionVelocityAttitudeErrorModel error_model,
	    xt::pytensor<double, 1> error_model_params,
	    std::vector<TypeIntegrity> integrity);

	~MeasurementPositionVelocityAttitude();

	MeasurementPositionVelocityAttitude(const MeasurementPositionVelocityAttitude& other);
	MeasurementPositionVelocityAttitude& operator=(const MeasurementPositionVelocityAttitude& rhs);

	MeasurementPositionVelocityAttitude(MeasurementPositionVelocityAttitude&& other);
	MeasurementPositionVelocityAttitude& operator=(MeasurementPositionVelocityAttitude&& rhs);

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
	Aspn23MeasurementPositionVelocityAttitude* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MeasurementPositionVelocityAttitude* replacement_struct,
	                  bool take_ownership = true);

	/**
	 * Standard ASPN measurement header.
	 */
	TypeHeader get_header() const;

	/**
	 * Standard ASPN measurement header.
	 */
	void set_header(TypeHeader);

	/**
	 * Time at which the measurement is considered to be valid.
	 */
	TypeTimestamp get_time_of_validity() const;

	/**
	 * Time at which the measurement is considered to be valid.
	 */
	void set_time_of_validity(TypeTimestamp);

	/**
	 * Defines measurement reference.
	 */
	Aspn23MeasurementPositionVelocityAttitudeReferenceFrame get_reference_frame() const;

	/**
	 * Defines measurement reference.
	 */
	void set_reference_frame(Aspn23MeasurementPositionVelocityAttitudeReferenceFrame);

	/**
	 * First position term as defined in enum.
	 */
	double get_p1() const;

	/**
	 * First position term as defined in enum.
	 */
	void set_p1(double);

	/**
	 * Second position term as defined in enum.
	 */
	double get_p2() const;

	/**
	 * Second position term as defined in enum.
	 */
	void set_p2(double);

	/**
	 * Third position term as defined in enum.
	 */
	double get_p3() const;

	/**
	 * Third position term as defined in enum.
	 */
	void set_p3(double);

	/**
	 * Velocity along the first axis of the measurement reference frame enumerated in
	 * reference_frame.
	 */
	double get_v1() const;

	/**
	 * Velocity along the first axis of the measurement reference frame enumerated in
	 * reference_frame.
	 */
	void set_v1(double);

	/**
	 * Velocity along the second axis of the measurement reference frame enumerated in
	 * reference_frame.
	 */
	double get_v2() const;

	/**
	 * Velocity along the second axis of the measurement reference frame enumerated in
	 * reference_frame.
	 */
	void set_v2(double);

	/**
	 * Velocity along the third axis of the measurement reference frame enumerated in
	 * reference_frame.
	 */
	double get_v3() const;

	/**
	 * Velocity along the third axis of the measurement reference frame enumerated in
	 * reference_frame.
	 */
	void set_v3(double);

	/**
	 * Four element quaternion, q = [a, b, c, d], where a = cos(phi/2), b = (phi_x/phi)*sin(phi/2),
	 * c = (phi_y/phi)*sin(phi/2), and d = (phi_z/phi)*sin(phi/2). In this description, the vector
	 * [phi_x, phi_y, phi_z] represents the rotation vector that describes the frame rotation to be
	 * applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into the axes that describe
	 * the measured attitude, and the value phi is the magnitude of the [phi_x, phi_y, phi_z]
	 * vector. See "conventions" documentation for more detailed information.
	 */
	xt::pytensor<double, 1> get_quaternion() const;

	/**
	 * Four element quaternion, q = [a, b, c, d], where a = cos(phi/2), b = (phi_x/phi)*sin(phi/2),
	 * c = (phi_y/phi)*sin(phi/2), and d = (phi_z/phi)*sin(phi/2). In this description, the vector
	 * [phi_x, phi_y, phi_z] represents the rotation vector that describes the frame rotation to be
	 * applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into the axes that describe
	 * the measured attitude, and the value phi is the magnitude of the [phi_x, phi_y, phi_z]
	 * vector. See "conventions" documentation for more detailed information.
	 */
	void set_quaternion(xt::pytensor<double, 1>);

	/**
	 * Dimension of measurement provided. In this sense, num_meas is the number of measurement terms
	 * that include valid data.
	 */
	uint8_t get_num_meas() const;

	/**
	 * Measurement error variance or covariance depending on measurement dimension. NOTE: Attitude
	 * errors are expressed as tilt errors, so if an attitude is provided, that should count as 3
	 * terms in num_meas. For example, a 3-D position, 3-D velocity, and attitude expressed as a
	 * quaternion (which takes 10 terms total to describe) is num_meas = 9. A second example is a
	 * 3-D position and 3-D velocity is num_meas = 6. Dimensions of covariance must be num_meas²
	 */
	xt::pytensor<double, 2> get_covariance() const;

	/**
	 * Measurement error variance or covariance depending on measurement dimension. NOTE: Attitude
	 * errors are expressed as tilt errors, so if an attitude is provided, that should count as 3
	 * terms in num_meas. For example, a 3-D position, 3-D velocity, and attitude expressed as a
	 * quaternion (which takes 10 terms total to describe) is num_meas = 9. A second example is a
	 * 3-D position and 3-D velocity is num_meas = 6. Dimensions of covariance must be num_meas²
	 */
	void set_covariance(xt::pytensor<double, 2>);

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	Aspn23MeasurementPositionVelocityAttitudeErrorModel get_error_model() const;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	void set_error_model(Aspn23MeasurementPositionVelocityAttitudeErrorModel);

	/**
	 * Number of parameters required for the error model chosen.
	 */
	uint16_t get_num_error_model_params() const;

	/**
	 * Error model parameters that characterize the optional error model.
	 */
	xt::pytensor<double, 1> get_error_model_params() const;

	/**
	 * Error model parameters that characterize the optional error model.
	 */
	void set_error_model_params(xt::pytensor<double, 1>);

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
	Aspn23MeasurementPositionVelocityAttitude* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
