
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MeasurementTime.h>

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
 * Expresses time measurements from one or more clocks/timing sources.
 */
class MeasurementTime : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MeasurementTime(Aspn23MeasurementTime* c_struct, bool take_ownership = true);

	MeasurementTime(TypeHeader header,
	                TypeTimestamp time_of_validity,
	                int32_t time_of_validity_attosec,
	                xt::pytensor<uint8_t, 1> clock_id,
	                xt::pytensor<int64_t, 1> elapsed_nsec,
	                xt::pytensor<int32_t, 1> elapsed_attosec,
	                uint8_t digits_of_precision,
	                xt::pytensor<double, 2> covariance,
	                Aspn23MeasurementTimeErrorModel error_model,
	                xt::pytensor<double, 1> error_model_params,
	                std::vector<TypeIntegrity> integrity);

	~MeasurementTime();

	MeasurementTime(const MeasurementTime& other);
	MeasurementTime& operator=(const MeasurementTime& rhs);

	MeasurementTime(MeasurementTime&& other);
	MeasurementTime& operator=(MeasurementTime&& rhs);

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
	Aspn23MeasurementTime* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MeasurementTime* replacement_struct, bool take_ownership = true);

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
	 * Whole number of attoseconds used to provide additional timestamp fidelity describing the time
	 * at which the measurement is considered to be valid. This is only needed if the time of
	 * validity is known to more precision than 1ns; otherwise, set time_of_validity_attosec = 0. Be
	 * sure to report the timestamp's digits of precision in the `type_metadataheader` as part of
	 * the metadata. The full timestamp in nanoseconds is calculated as
	 *
	 * time_of_validity + ( time_of_validity_attosec * 1E-9 )
	 *
	 * and if needed, a timestamp in seconds is calculated as
	 *
	 * time_of_validity * 1E-9 + time_of_validity_attosec * 1E-18
	 *
	 * (Recall time_of_validity is in nanoseconds and time_of_validity_attosec is in attoseconds.)
	 * Furthermore, both time_of_validity and time_of_validity_attosec are signed integers and may
	 * be positive or negative. It is recommended to make time_of_validity and
	 * time_of_validity_attosec the same sign. Care should be taken when constructing the timestamp
	 * components to be sure the summation produces the desired result.
	 */
	int32_t get_time_of_validity_attosec() const;

	/**
	 * Whole number of attoseconds used to provide additional timestamp fidelity describing the time
	 * at which the measurement is considered to be valid. This is only needed if the time of
	 * validity is known to more precision than 1ns; otherwise, set time_of_validity_attosec = 0. Be
	 * sure to report the timestamp's digits of precision in the `type_metadataheader` as part of
	 * the metadata. The full timestamp in nanoseconds is calculated as
	 *
	 * time_of_validity + ( time_of_validity_attosec * 1E-9 )
	 *
	 * and if needed, a timestamp in seconds is calculated as
	 *
	 * time_of_validity * 1E-9 + time_of_validity_attosec * 1E-18
	 *
	 * (Recall time_of_validity is in nanoseconds and time_of_validity_attosec is in attoseconds.)
	 * Furthermore, both time_of_validity and time_of_validity_attosec are signed integers and may
	 * be positive or negative. It is recommended to make time_of_validity and
	 * time_of_validity_attosec the same sign. Care should be taken when constructing the timestamp
	 * components to be sure the summation produces the desired result.
	 */
	void set_time_of_validity_attosec(int32_t);

	/**
	 * Number of absolute clock/timing source measurements reported in this measurement. May be 0
	 * through 255. The clock_id, elapsed_nsec, and elapsed_attosec values are provided for each
	 * measurement, indexed by the observation number.
	 */
	uint8_t get_num_obs() const;

	/**
	 * Identifier for clock/timing source for each measurement. See clock_identifiers.md for a full
	 * description, but the summary is as follows:
	 * 0 = ASPN System Time
	 * 1 = International Atomic Time (TAI)
	 * 2 = Universal Coordinated Time (UTC)
	 * 3 = GPS System Time
	 * 4 = Galileo System Time
	 * 5 = GLONASS System Time
	 * 6 = BeiDou System Time
	 * 7-50: Reserved for future additional time scale representations.
	 */
	xt::pytensor<uint8_t, 1> get_clock_id() const;

	/**
	 * Identifier for clock/timing source for each measurement. See clock_identifiers.md for a full
	 * description, but the summary is as follows:
	 * 0 = ASPN System Time
	 * 1 = International Atomic Time (TAI)
	 * 2 = Universal Coordinated Time (UTC)
	 * 3 = GPS System Time
	 * 4 = Galileo System Time
	 * 5 = GLONASS System Time
	 * 6 = BeiDou System Time
	 * 7-50: Reserved for future additional time scale representations.
	 */
	void set_clock_id(xt::pytensor<uint8_t, 1>);

	/**
	 * Whole number nanoseconds elapsed since each clock's zero epoch. If negative, whole number
	 * nanoseconds until each clock's zero epoch. Additionally, the timestamp's digits of precision
	 * are included as `digits_of_precision`.
	 */
	xt::pytensor<int64_t, 1> get_elapsed_nsec() const;

	/**
	 * Whole number nanoseconds elapsed since each clock's zero epoch. If negative, whole number
	 * nanoseconds until each clock's zero epoch. Additionally, the timestamp's digits of precision
	 * are included as `digits_of_precision`.
	 */
	void set_elapsed_nsec(xt::pytensor<int64_t, 1>);

	/**
	 * Whole number of attoseconds used to provide additional observation fidelity. This is only
	 * needed if the observation is known to more precision than 1ns; otherwise, set
	 * time_of_validity_attosec = 0. Be sure to report the timestamp's digits of precision. The full
	 * observation in nanoseconds is calculated as
	 *
	 * elapsed_nsec + ( elapsed_attosec * 1E-9 )
	 *
	 * and the observation in seconds is calculated as
	 *
	 * elapsed_nsec * 1E-9 + elapsed_attosec * 1E-18
	 *
	 * Furthermore, both elapsed_nsec and elapsed_attosec are signed integers and may be positive or
	 * negative. It is recommended to make elapsed_nsec and elapsed_attosec the same sign. Care
	 * should be taken when constructing the observation components to be sure the summation
	 * produces the desired result.
	 */
	xt::pytensor<int32_t, 1> get_elapsed_attosec() const;

	/**
	 * Whole number of attoseconds used to provide additional observation fidelity. This is only
	 * needed if the observation is known to more precision than 1ns; otherwise, set
	 * time_of_validity_attosec = 0. Be sure to report the timestamp's digits of precision. The full
	 * observation in nanoseconds is calculated as
	 *
	 * elapsed_nsec + ( elapsed_attosec * 1E-9 )
	 *
	 * and the observation in seconds is calculated as
	 *
	 * elapsed_nsec * 1E-9 + elapsed_attosec * 1E-18
	 *
	 * Furthermore, both elapsed_nsec and elapsed_attosec are signed integers and may be positive or
	 * negative. It is recommended to make elapsed_nsec and elapsed_attosec the same sign. Care
	 * should be taken when constructing the observation components to be sure the summation
	 * produces the desired result.
	 */
	void set_elapsed_attosec(xt::pytensor<int32_t, 1>);

	/**
	 * Defines how many decimal digits of precision are represented in the observation after the
	 * decimal point. The precision of the observation is 10E-N, where N is digits_of_precision. A
	 * value of 3 would mean that the observation has precision at the 10E-3 (millisecond) level, a
	 * value of 6 would mean the observation has precision at the 10E-6 (microsecond) level, etc.
	 */
	uint8_t get_digits_of_precision() const;

	/**
	 * Defines how many decimal digits of precision are represented in the observation after the
	 * decimal point. The precision of the observation is 10E-N, where N is digits_of_precision. A
	 * value of 3 would mean that the observation has precision at the 10E-3 (millisecond) level, a
	 * value of 6 would mean the observation has precision at the 10E-6 (microsecond) level, etc.
	 */
	void set_digits_of_precision(uint8_t);

	/**
	 * Measurement error variance or covariance depending on measurement dimension in the absolute
	 * clock/timing signal measurements. Note: These measurements are assuming that there is no
	 * error in the ASPN system clock. Errors in the ASPN system clock time tag for the time
	 * measurements should be included in the overall errors for the respective time measurements as
	 * expressed in the covariance matrix. Dimensions of covariance must be num_obs²
	 */
	xt::pytensor<double, 2> get_covariance() const;

	/**
	 * Measurement error variance or covariance depending on measurement dimension in the absolute
	 * clock/timing signal measurements. Note: These measurements are assuming that there is no
	 * error in the ASPN system clock. Errors in the ASPN system clock time tag for the time
	 * measurements should be included in the overall errors for the respective time measurements as
	 * expressed in the covariance matrix. Dimensions of covariance must be num_obs²
	 */
	void set_covariance(xt::pytensor<double, 2>);

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	Aspn23MeasurementTimeErrorModel get_error_model() const;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	void set_error_model(Aspn23MeasurementTimeErrorModel);

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
	Aspn23MeasurementTime* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
