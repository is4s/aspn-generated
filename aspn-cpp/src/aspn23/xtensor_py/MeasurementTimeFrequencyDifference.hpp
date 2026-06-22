
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MeasurementTimeFrequencyDifference.h>

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
 * Time and frequency difference between two clocks or timing sources. This measurement
 * requires both time and frequency to be provided.
 */
class MeasurementTimeFrequencyDifference : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MeasurementTimeFrequencyDifference(Aspn23MeasurementTimeFrequencyDifference* c_struct,
	                                   bool take_ownership = true);

	MeasurementTimeFrequencyDifference(
	    TypeHeader header,
	    TypeTimestamp time_of_validity,
	    int32_t time_of_validity_attosec,
	    uint8_t clock_id1,
	    uint8_t clock_id2,
	    int64_t time_diff_nsec,
	    int32_t time_diff_attosec,
	    uint8_t digits_of_precision,
	    double freq_diff,
	    xt::pytensor<double, 2> covariance,
	    Aspn23MeasurementTimeFrequencyDifferenceErrorModel error_model,
	    xt::pytensor<double, 1> error_model_params,
	    std::vector<TypeIntegrity> integrity);

	~MeasurementTimeFrequencyDifference();

	MeasurementTimeFrequencyDifference(const MeasurementTimeFrequencyDifference& other);
	MeasurementTimeFrequencyDifference& operator=(const MeasurementTimeFrequencyDifference& rhs);

	MeasurementTimeFrequencyDifference(MeasurementTimeFrequencyDifference&& other);
	MeasurementTimeFrequencyDifference& operator=(MeasurementTimeFrequencyDifference&& rhs);

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
	Aspn23MeasurementTimeFrequencyDifference* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MeasurementTimeFrequencyDifference* replacement_struct,
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
	 * Whole number of attoseconds used to provide additional timestamp fidelity describing the time
	 * at which the measurement is considered to be valid. This is only needed if the time of
	 * validity is known to more precision than 1ns; otherwise, set time_of_validity_attosec = 0. Be
	 * sure to report the timestamp's digits of precision in the `type_metadataheader` as part of
	 * the metadata.
	 *
	 * The full timestamp in nanoseconds is calculated as
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
	 * the metadata.
	 *
	 * The full timestamp in nanoseconds is calculated as
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
	 * Identifier for clock/timing source 2. See clock_identifiers.md for a full description, but
	 * the summary is as follows: 0 = ASPN System Time 1 = International Atomic Time (TAI) 2 =
	 * Universal Coordinated Time (UTC) 3 = GPS System Time 4 = Galileo System Time 5 = GLONASS
	 * System Time 6 = BeiDou System Time 7-50: Reserved for future additional time scale
	 * representations.
	 */
	uint8_t get_clock_id1() const;

	/**
	 * Identifier for clock/timing source 2. See clock_identifiers.md for a full description, but
	 * the summary is as follows: 0 = ASPN System Time 1 = International Atomic Time (TAI) 2 =
	 * Universal Coordinated Time (UTC) 3 = GPS System Time 4 = Galileo System Time 5 = GLONASS
	 * System Time 6 = BeiDou System Time 7-50: Reserved for future additional time scale
	 * representations.
	 */
	void set_clock_id1(uint8_t);

	/**
	 * Identifier for clock/timing source 2. See clock_identifiers.md for a full description, but
	 * the summary is as follows: 0 = ASPN System Time 1 = International Atomic Time (TAI) 2 =
	 * Universal Coordinated Time (UTC) 3 = GPS System Time 4 = Galileo System Time 5 = GLONASS
	 * System Time 6 = BeiDou System Time 7-50: Reserved for future additional time scale
	 * representations.
	 */
	uint8_t get_clock_id2() const;

	/**
	 * Identifier for clock/timing source 2. See clock_identifiers.md for a full description, but
	 * the summary is as follows: 0 = ASPN System Time 1 = International Atomic Time (TAI) 2 =
	 * Universal Coordinated Time (UTC) 3 = GPS System Time 4 = Galileo System Time 5 = GLONASS
	 * System Time 6 = BeiDou System Time 7-50: Reserved for future additional time scale
	 * representations.
	 */
	void set_clock_id2(uint8_t);

	/**
	 * Whole number nanoseconds in time difference (time from clock_id1) - (time from clock_id2).
	 * This value shall be positive when (time from clock_id1) - (time from clock_id2) is greater
	 * than or equal to zero. This value shall be negative when (time from clock_id1) - (time from
	 * clock_id2) is less than zero.Additionally, the timestamp's digits of precision are included
	 * as `digits_of_precision`.
	 */
	int64_t get_time_diff_nsec() const;

	/**
	 * Whole number nanoseconds in time difference (time from clock_id1) - (time from clock_id2).
	 * This value shall be positive when (time from clock_id1) - (time from clock_id2) is greater
	 * than or equal to zero. This value shall be negative when (time from clock_id1) - (time from
	 * clock_id2) is less than zero.Additionally, the timestamp's digits of precision are included
	 * as `digits_of_precision`.
	 */
	void set_time_diff_nsec(int64_t);

	/**
	 * Whole number attoseconds in time difference (time from clock_id1) - (time from clock_id2).
	 * Must be less than 1e9. This value shall be positive when (time from clock_id1) - (time from
	 * clock_id2) is greater than or equal to zero. This value shall be negative when (time from
	 * clock_id1) - (time from clock_id2) is less than zero. This is only needed if the time of
	 * validity is known to more precision than 1ns; otherwise, set time_of_validity_attosec = 0. Be
	 * sure to report the timestamp's digits of precision. The time difference in seconds is
	 * calculated as
	 *
	 * time difference = time_diff_nsec * 1e-9 + time_diff_attosec * 1e-18
	 *
	 * It shall be assumed that time_diff_nsec and time_diff_attosec have the same sign. Therefore,
	 * the time difference is positive when (time from clock_id1) - (time from clock_id2) is
	 * positive and the time difference is negative when (time from clock_id1) - (time from
	 * clock_id2) is negative. A cautionary note: Both timediff_nsec and time_diff_attosec are
	 * signed integers and may be positive or negative. It is mandated to make timediff_nsec and
	 * time_diff_attosec the same sign; however, care should be taken when constructing the
	 * observation components to be sure the summation produces the desired result.
	 */
	int32_t get_time_diff_attosec() const;

	/**
	 * Whole number attoseconds in time difference (time from clock_id1) - (time from clock_id2).
	 * Must be less than 1e9. This value shall be positive when (time from clock_id1) - (time from
	 * clock_id2) is greater than or equal to zero. This value shall be negative when (time from
	 * clock_id1) - (time from clock_id2) is less than zero. This is only needed if the time of
	 * validity is known to more precision than 1ns; otherwise, set time_of_validity_attosec = 0. Be
	 * sure to report the timestamp's digits of precision. The time difference in seconds is
	 * calculated as
	 *
	 * time difference = time_diff_nsec * 1e-9 + time_diff_attosec * 1e-18
	 *
	 * It shall be assumed that time_diff_nsec and time_diff_attosec have the same sign. Therefore,
	 * the time difference is positive when (time from clock_id1) - (time from clock_id2) is
	 * positive and the time difference is negative when (time from clock_id1) - (time from
	 * clock_id2) is negative. A cautionary note: Both timediff_nsec and time_diff_attosec are
	 * signed integers and may be positive or negative. It is mandated to make timediff_nsec and
	 * time_diff_attosec the same sign; however, care should be taken when constructing the
	 * observation components to be sure the summation produces the desired result.
	 */
	void set_time_diff_attosec(int32_t);

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
	 * Frequency difference formed as (frequency from clock_id1) - (frequency from clock_id2).
	 */
	double get_freq_diff() const;

	/**
	 * Frequency difference formed as (frequency from clock_id1) - (frequency from clock_id2).
	 */
	void set_freq_diff(double);

	/**
	 * Covariance information for the time/frequency measurement. Using zero-indexing, the [0,0]
	 * element has units of sec^2, the [1,1] element has units of Hertz^2, and the off-diagonal
	 * terms have units of sec*Hertz.
	 */
	xt::pytensor<double, 2> get_covariance() const;

	/**
	 * Covariance information for the time/frequency measurement. Using zero-indexing, the [0,0]
	 * element has units of sec^2, the [1,1] element has units of Hertz^2, and the off-diagonal
	 * terms have units of sec*Hertz.
	 */
	void set_covariance(xt::pytensor<double, 2>);

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	Aspn23MeasurementTimeFrequencyDifferenceErrorModel get_error_model() const;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	void set_error_model(Aspn23MeasurementTimeFrequencyDifferenceErrorModel);

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
	Aspn23MeasurementTimeFrequencyDifference* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
