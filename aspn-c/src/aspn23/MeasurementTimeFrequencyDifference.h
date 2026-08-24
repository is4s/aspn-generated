
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
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementTimeFrequencyDifferenceErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE_ERROR_MODEL_NONE
};

/**
 * Time and frequency difference between two clocks or timing sources. This measurement
 * requires both time and frequency to be provided.
 */

typedef struct Aspn23MeasurementTimeFrequencyDifference {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

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

	int32_t time_of_validity_attosec;

	/**
	 * Identifier for clock/timing source 2. See clock_identifiers.md for a full description, but
	 * the summary is as follows: 0 = ASPN System Time 1 = International Atomic Time (TAI) 2 =
	 * Universal Coordinated Time (UTC) 3 = GPS System Time 4 = Galileo System Time 5 = GLONASS
	 * System Time 6 = BeiDou System Time 7-50: Reserved for future additional time scale
	 * representations.
	 */

	uint8_t clock_id1;

	/**
	 * Identifier for clock/timing source 2. See clock_identifiers.md for a full description, but
	 * the summary is as follows: 0 = ASPN System Time 1 = International Atomic Time (TAI) 2 =
	 * Universal Coordinated Time (UTC) 3 = GPS System Time 4 = Galileo System Time 5 = GLONASS
	 * System Time 6 = BeiDou System Time 7-50: Reserved for future additional time scale
	 * representations.
	 */

	uint8_t clock_id2;

	/**
	 * Whole number nanoseconds in time difference (time from clock_id1) - (time from clock_id2).
	 * This value shall be positive when (time from clock_id1) - (time from clock_id2) is greater
	 * than or equal to zero. This value shall be negative when (time from clock_id1) - (time from
	 * clock_id2) is less than zero.Additionally, the timestamp's digits of precision are included
	 * as `digits_of_precision`.
	 */

	int64_t time_diff_nsec;

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

	int32_t time_diff_attosec;

	/**
	 * Defines how many decimal digits of precision are represented in the observation after the
	 * decimal point. The precision of the observation is 10E-N, where N is digits_of_precision. A
	 * value of 3 would mean that the observation has precision at the 10E-3 (millisecond) level, a
	 * value of 6 would mean the observation has precision at the 10E-6 (microsecond) level, etc.
	 */

	uint8_t digits_of_precision;

	/**
	 * Frequency difference formed as (frequency from clock_id1) - (frequency from clock_id2).
	 */

	double freq_diff;

	/**
	 * Covariance information for the time/frequency measurement. Using zero-indexing, the [0,0]
	 * element has units of sec^2, the [1,1] element has units of Hertz^2, and the off-diagonal
	 * terms have units of sec*Hertz.
	 */

	double covariance[2][2];

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementTimeFrequencyDifferenceErrorModel error_model;

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

} Aspn23MeasurementTimeFrequencyDifference;

Aspn23MeasurementTimeFrequencyDifference* ASPN_NULLABLE
aspn23_measurement_time_frequency_difference_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    int32_t time_of_validity_attosec,
    uint8_t clock_id1,
    uint8_t clock_id2,
    int64_t time_diff_nsec,
    int32_t time_diff_attosec,
    uint8_t digits_of_precision,
    double freq_diff,
    double covariance[2][2],
    enum Aspn23MeasurementTimeFrequencyDifferenceErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity);

Aspn23MeasurementTimeFrequencyDifference* ASPN_NULLABLE
aspn23_measurement_time_frequency_difference_copy(Aspn23MeasurementTimeFrequencyDifference*);

/**
 * free() all memory held by the given Aspn23MeasurementTimeFrequencyDifference,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_time_frequency_difference_free(void* pointer);
void aspn23_measurement_time_frequency_difference_free_members(
    Aspn23MeasurementTimeFrequencyDifference* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
