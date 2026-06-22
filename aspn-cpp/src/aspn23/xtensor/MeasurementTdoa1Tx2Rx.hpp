
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MeasurementTdoa1Tx2Rx.h>

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
 * Time difference of arrival of a single transmitter (Tx) to two receivers.
 * Receiver 1 (Rx1) is at a known location. Receiver 2 is the sensor system
 * providing the measurement.
 */
class MeasurementTdoa1Tx2Rx : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MeasurementTdoa1Tx2Rx(Aspn23MeasurementTdoa1Tx2Rx* c_struct, bool take_ownership = true);

	MeasurementTdoa1Tx2Rx(TypeHeader header,
	                      TypeTimestamp time_of_validity,
	                      TypeRemotePoint tx_position_and_covariance,
	                      TypeRemotePoint rx1_position_and_covariance,
	                      double obs,
	                      double variance,
	                      Aspn23MeasurementTdoa1Tx2RxErrorModel error_model,
	                      xt::xtensor<double, 1> error_model_params,
	                      std::vector<TypeIntegrity> integrity);

	~MeasurementTdoa1Tx2Rx();

	MeasurementTdoa1Tx2Rx(const MeasurementTdoa1Tx2Rx& other);
	MeasurementTdoa1Tx2Rx& operator=(const MeasurementTdoa1Tx2Rx& rhs);

	MeasurementTdoa1Tx2Rx(MeasurementTdoa1Tx2Rx&& other);
	MeasurementTdoa1Tx2Rx& operator=(MeasurementTdoa1Tx2Rx&& rhs);

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
	Aspn23MeasurementTdoa1Tx2Rx* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MeasurementTdoa1Tx2Rx* replacement_struct, bool take_ownership = true);

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
	 * Transmitter (Tx)'s known location.
	 */
	TypeRemotePoint get_tx_position_and_covariance() const;

	/**
	 * Transmitter (Tx)'s known location.
	 */
	void set_tx_position_and_covariance(TypeRemotePoint);

	/**
	 * Receiver 1 (Rx1)'s known location.
	 */
	TypeRemotePoint get_rx1_position_and_covariance() const;

	/**
	 * Receiver 1 (Rx1)'s known location.
	 */
	void set_rx1_position_and_covariance(TypeRemotePoint);

	/**
	 * Time difference of arrival (in meters). Time difference of Tx signal's arrival time at Rx1
	 * minus Tx signal's arrival time at the sensor. Positive obs indicates Tx arrived at Rx1 later
	 * than arriving at the sensor.
	 */
	double get_obs() const;

	/**
	 * Time difference of arrival (in meters). Time difference of Tx signal's arrival time at Rx1
	 * minus Tx signal's arrival time at the sensor. Positive obs indicates Tx arrived at Rx1 later
	 * than arriving at the sensor.
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
	Aspn23MeasurementTdoa1Tx2RxErrorModel get_error_model() const;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	void set_error_model(Aspn23MeasurementTdoa1Tx2RxErrorModel);

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
	Aspn23MeasurementTdoa1Tx2Rx* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
