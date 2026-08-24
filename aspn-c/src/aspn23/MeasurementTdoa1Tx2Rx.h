
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeHeader.h"
#include "TypeTimestamp.h"
#include "TypeRemotePoint.h"
#include "TypeRemotePoint.h"
#include "TypeIntegrity.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementTdoa1Tx2RxErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_TDOA_1TX_2RX_ERROR_MODEL_NONE
};

/**
 * Time difference of arrival of a single transmitter (Tx) to two receivers.
 * Receiver 1 (Rx1) is at a known location. Receiver 2 is the sensor system
 * providing the measurement.
 */

typedef struct Aspn23MeasurementTdoa1Tx2Rx {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Transmitter (Tx)'s known location.
	 */

	Aspn23TypeRemotePoint tx_position_and_covariance;

	/**
	 * Receiver 1 (Rx1)'s known location.
	 */

	Aspn23TypeRemotePoint rx1_position_and_covariance;

	/**
	 * Time difference of arrival (in meters). Time difference of Tx signal's arrival time at Rx1
	 * minus Tx signal's arrival time at the sensor. Positive obs indicates Tx arrived at Rx1 later
	 * than arriving at the sensor.
	 */

	double obs;

	/**
	 * Measurement variance.
	 */

	double variance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementTdoa1Tx2RxErrorModel error_model;

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

} Aspn23MeasurementTdoa1Tx2Rx;

Aspn23MeasurementTdoa1Tx2Rx* ASPN_NULLABLE
aspn23_measurement_tdoa_1tx_2rx_new(Aspn23TypeHeader* header,
                                    Aspn23TypeTimestamp* time_of_validity,
                                    Aspn23TypeRemotePoint* tx_position_and_covariance,
                                    Aspn23TypeRemotePoint* rx1_position_and_covariance,
                                    double obs,
                                    double variance,
                                    enum Aspn23MeasurementTdoa1Tx2RxErrorModel error_model,
                                    uint16_t num_error_model_params,
                                    double* error_model_params,
                                    uint8_t num_integrity,
                                    Aspn23TypeIntegrity* integrity);

Aspn23MeasurementTdoa1Tx2Rx* ASPN_NULLABLE
aspn23_measurement_tdoa_1tx_2rx_copy(Aspn23MeasurementTdoa1Tx2Rx*);

/**
 * free() all memory held by the given Aspn23MeasurementTdoa1Tx2Rx,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_tdoa_1tx_2rx_free(void* pointer);
void aspn23_measurement_tdoa_1tx_2rx_free_members(Aspn23MeasurementTdoa1Tx2Rx* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
