
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MeasurementTdoa2Tx1Rx.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeHeader.hpp"
#include "TypeTimestamp.hpp"
#include "TypeRemotePoint.hpp"
#include "TypeRemotePoint.hpp"
#include "TypeIntegrity.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Time difference of arrival of two signals (Tx) to a sensor (Rx).
 */
class MeasurementTdoa2Tx1Rx : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MeasurementTdoa2Tx1Rx(Aspn23MeasurementTdoa2Tx1Rx* c_struct, bool take_ownership = true);

	MeasurementTdoa2Tx1Rx(TypeHeader header,
	                      TypeTimestamp time_of_validity,
	                      TypeRemotePoint tx1_position_and_covariance,
	                      TypeRemotePoint tx2_position_and_covariance,
	                      double obs,
	                      double variance,
	                      Aspn23MeasurementTdoa2Tx1RxErrorModel error_model,
	                      xt::xtensor<double, 1> error_model_params,
	                      std::vector<TypeIntegrity> integrity);

	~MeasurementTdoa2Tx1Rx();

	MeasurementTdoa2Tx1Rx(const MeasurementTdoa2Tx1Rx& other);
	MeasurementTdoa2Tx1Rx& operator=(const MeasurementTdoa2Tx1Rx& rhs);

	MeasurementTdoa2Tx1Rx(MeasurementTdoa2Tx1Rx&& other);
	MeasurementTdoa2Tx1Rx& operator=(MeasurementTdoa2Tx1Rx&& rhs);

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
	Aspn23MeasurementTdoa2Tx1Rx* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MeasurementTdoa2Tx1Rx* replacement_struct, bool take_ownership = true);

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
	 * Transmitter 1 (Tx1)'s known location.
	 */
	TypeRemotePoint get_tx1_position_and_covariance() const;

	/**
	 * Transmitter 1 (Tx1)'s known location.
	 */
	void set_tx1_position_and_covariance(TypeRemotePoint);

	/**
	 * Transmitter 2 (Tx2)'s known location.
	 */
	TypeRemotePoint get_tx2_position_and_covariance() const;

	/**
	 * Transmitter 2 (Tx2)'s known location.
	 */
	void set_tx2_position_and_covariance(TypeRemotePoint);

	/**
	 * Time difference of arrival (in meters). Time difference of Tx1 signal's arrival time minus
	 * Tx2 signal's arrival time at the sensor. Positive obs indicates Tx1 arrived later than Tx2.
	 */
	double get_obs() const;

	/**
	 * Time difference of arrival (in meters). Time difference of Tx1 signal's arrival time minus
	 * Tx2 signal's arrival time at the sensor. Positive obs indicates Tx1 arrived later than Tx2.
	 */
	void set_obs(double);

	/**
	 * Measurement variance.
	 */
	double get_variance() const;

	/**
	 * Measurement variance.
	 */
	void set_variance(double);

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	Aspn23MeasurementTdoa2Tx1RxErrorModel get_error_model() const;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	void set_error_model(Aspn23MeasurementTdoa2Tx1RxErrorModel);

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
	Aspn23MeasurementTdoa2Tx1Rx* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
