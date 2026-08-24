
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

enum Aspn23MeasurementTimeErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_TIME_ERROR_MODEL_NONE
};

/**
 * Expresses time measurements from one or more clocks/timing sources.
 */

typedef struct Aspn23MeasurementTime {

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
	 * Number of absolute clock/timing source measurements reported in this measurement. May be 0
	 * through 255. The clock_id, elapsed_nsec, and elapsed_attosec values are provided for each
	 * measurement, indexed by the observation number.
	 */

	uint8_t num_obs;

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

	uint8_t* clock_id;

	/**
	 * Whole number nanoseconds elapsed since each clock's zero epoch. If negative, whole number
	 * nanoseconds until each clock's zero epoch. Additionally, the timestamp's digits of precision
	 * are included as `digits_of_precision`.
	 */

	int64_t* elapsed_nsec;

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

	int32_t* elapsed_attosec;

	/**
	 * Defines how many decimal digits of precision are represented in the observation after the
	 * decimal point. The precision of the observation is 10E-N, where N is digits_of_precision. A
	 * value of 3 would mean that the observation has precision at the 10E-3 (millisecond) level, a
	 * value of 6 would mean the observation has precision at the 10E-6 (microsecond) level, etc.
	 */

	uint8_t digits_of_precision;

	/**
	 * Measurement error variance or covariance depending on measurement dimension in the absolute
	 * clock/timing signal measurements. Note: These measurements are assuming that there is no
	 * error in the ASPN system clock. Errors in the ASPN system clock time tag for the time
	 * measurements should be included in the overall errors for the respective time measurements as
	 * expressed in the covariance matrix. Dimensions of covariance must be num_obs²
	 */

	double* covariance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementTimeErrorModel error_model;

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

} Aspn23MeasurementTime;

Aspn23MeasurementTime* ASPN_NULLABLE
aspn23_measurement_time_new(Aspn23TypeHeader* header,
                            Aspn23TypeTimestamp* time_of_validity,
                            int32_t time_of_validity_attosec,
                            uint8_t num_obs,
                            uint8_t* clock_id,
                            int64_t* elapsed_nsec,
                            int32_t* elapsed_attosec,
                            uint8_t digits_of_precision,
                            double* covariance,
                            enum Aspn23MeasurementTimeErrorModel error_model,
                            uint16_t num_error_model_params,
                            double* error_model_params,
                            uint8_t num_integrity,
                            Aspn23TypeIntegrity* integrity);

Aspn23MeasurementTime* ASPN_NULLABLE aspn23_measurement_time_copy(Aspn23MeasurementTime*);

/**
 * free() all memory held by the given Aspn23MeasurementTime,
 * including the struct itself.
 *
 * Pointer fields (clock_id, elapsed_nsec, elapsed_attosec, error_model_params, integrity) will be
 * freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_time_free(void* pointer);
void aspn23_measurement_time_free_members(Aspn23MeasurementTime* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
