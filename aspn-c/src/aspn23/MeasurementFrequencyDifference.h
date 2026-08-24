
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

enum Aspn23MeasurementFrequencyDifferenceErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_FREQUENCY_DIFFERENCE_ERROR_MODEL_NONE
};

/**
 * Frequency difference between two clocks or timing sources.
 */

typedef struct Aspn23MeasurementFrequencyDifference {

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

	int32_t time_of_validity_attosec;

	/**
	 * Identifier for clock/timing source 1. See clock_identifiers.md for a full description, but
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
	 * Frequency difference formed as (frequency from clock_id1) - (frequency from clock_id2).
	 */

	double freq_diff;

	/**
	 * Variance of the error in the frequency difference measurement.
	 */

	double variance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementFrequencyDifferenceErrorModel error_model;

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

} Aspn23MeasurementFrequencyDifference;

Aspn23MeasurementFrequencyDifference* ASPN_NULLABLE aspn23_measurement_frequency_difference_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    int32_t time_of_validity_attosec,
    uint8_t clock_id1,
    uint8_t clock_id2,
    double freq_diff,
    double variance,
    enum Aspn23MeasurementFrequencyDifferenceErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity);

Aspn23MeasurementFrequencyDifference* ASPN_NULLABLE
aspn23_measurement_frequency_difference_copy(Aspn23MeasurementFrequencyDifference*);

/**
 * free() all memory held by the given Aspn23MeasurementFrequencyDifference,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_frequency_difference_free(void* pointer);
void aspn23_measurement_frequency_difference_free_members(
    Aspn23MeasurementFrequencyDifference* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
