
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MeasurementDeltaPosition.h>

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
 * Delta position is the change in position from the position at time (time_of_validity - delta_t)
 * to the position at time (time_of_validity), where the change in position is reported along each
 * axis of the reference frame. The reference frame is chosen by the user in the reference enum.
 */
class MeasurementDeltaPosition : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MeasurementDeltaPosition(Aspn23MeasurementDeltaPosition* c_struct, bool take_ownership = true);

	MeasurementDeltaPosition(TypeHeader header,
	                         TypeTimestamp time_of_validity,
	                         Aspn23MeasurementDeltaPositionReferenceFrame reference_frame,
	                         double delta_t,
	                         double term1,
	                         double term2,
	                         double term3,
	                         xt::xtensor<double, 2> covariance,
	                         Aspn23MeasurementDeltaPositionErrorModel error_model,
	                         xt::xtensor<double, 1> error_model_params,
	                         std::vector<TypeIntegrity> integrity);

	~MeasurementDeltaPosition();

	MeasurementDeltaPosition(const MeasurementDeltaPosition& other);
	MeasurementDeltaPosition& operator=(const MeasurementDeltaPosition& rhs);

	MeasurementDeltaPosition(MeasurementDeltaPosition&& other);
	MeasurementDeltaPosition& operator=(MeasurementDeltaPosition&& rhs);

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
	Aspn23MeasurementDeltaPosition* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MeasurementDeltaPosition* replacement_struct,
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
	 * Time at which the measurement is considered to be valid at the end of the delta-position
	 * period.
	 */
	TypeTimestamp get_time_of_validity() const;

	/**
	 * Time at which the measurement is considered to be valid at the end of the delta-position
	 * period.
	 */
	void set_time_of_validity(TypeTimestamp);

	/**
	 * Specifies measurement reference frame.
	 */
	Aspn23MeasurementDeltaPositionReferenceFrame get_reference_frame() const;

	/**
	 * Specifies measurement reference frame.
	 */
	void set_reference_frame(Aspn23MeasurementDeltaPositionReferenceFrame);

	/**
	 * Duration of the observation time interval. The time_of_validity denotes the end of the time
	 * interval. The start of the time interval is time_of_validity - delta_t.
	 */
	double get_delta_t() const;

	/**
	 * Duration of the observation time interval. The time_of_validity denotes the end of the time
	 * interval. The start of the time interval is time_of_validity - delta_t.
	 */
	void set_delta_t(double);

	/**
	 * Dimension of measurement provided.
	 */
	uint8_t get_num_meas() const;

	/**
	 * Delta position over the first dimension specified by the enum.
	 */
	double get_term1() const;

	/**
	 * Delta position over the first dimension specified by the enum.
	 */
	void set_term1(double);

	/**
	 * Delta position over the second dimension specified by the enum.
	 */
	double get_term2() const;

	/**
	 * Delta position over the second dimension specified by the enum.
	 */
	void set_term2(double);

	/**
	 * Delta position over the third dimension specified by the enum.
	 */
	double get_term3() const;

	/**
	 * Delta position over the third dimension specified by the enum.
	 */
	void set_term3(double);

	/**
	 * Variance or covariance matrix depending on measurement dimension.
	 * Dimensions of covariance must be num_meas²
	 */
	xt::xtensor<double, 2> get_covariance() const;

	/**
	 * Variance or covariance matrix depending on measurement dimension.
	 * Dimensions of covariance must be num_meas²
	 */
	void set_covariance(xt::xtensor<double, 2>);

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	Aspn23MeasurementDeltaPositionErrorModel get_error_model() const;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	void set_error_model(Aspn23MeasurementDeltaPositionErrorModel);

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
	Aspn23MeasurementDeltaPosition* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
