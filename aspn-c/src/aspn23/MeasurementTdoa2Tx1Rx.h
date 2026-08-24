
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

enum Aspn23MeasurementTdoa2Tx1RxErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_TDOA_2TX_1RX_ERROR_MODEL_NONE
};

/**
 * Time difference of arrival of two signals (Tx) to a sensor (Rx).
 */

typedef struct Aspn23MeasurementTdoa2Tx1Rx {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Transmitter 1 (Tx1)'s known location.
	 */

	Aspn23TypeRemotePoint tx1_position_and_covariance;

	/**
	 * Transmitter 2 (Tx2)'s known location.
	 */

	Aspn23TypeRemotePoint tx2_position_and_covariance;

	/**
	 * Time difference of arrival (in meters). Time difference of Tx1 signal's arrival time minus
	 * Tx2 signal's arrival time at the sensor. Positive obs indicates Tx1 arrived later than Tx2.
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

	enum Aspn23MeasurementTdoa2Tx1RxErrorModel error_model;

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

} Aspn23MeasurementTdoa2Tx1Rx;

Aspn23MeasurementTdoa2Tx1Rx* ASPN_NULLABLE
aspn23_measurement_tdoa_2tx_1rx_new(Aspn23TypeHeader* header,
                                    Aspn23TypeTimestamp* time_of_validity,
                                    Aspn23TypeRemotePoint* tx1_position_and_covariance,
                                    Aspn23TypeRemotePoint* tx2_position_and_covariance,
                                    double obs,
                                    double variance,
                                    enum Aspn23MeasurementTdoa2Tx1RxErrorModel error_model,
                                    uint16_t num_error_model_params,
                                    double* error_model_params,
                                    uint8_t num_integrity,
                                    Aspn23TypeIntegrity* integrity);

Aspn23MeasurementTdoa2Tx1Rx* ASPN_NULLABLE
aspn23_measurement_tdoa_2tx_1rx_copy(Aspn23MeasurementTdoa2Tx1Rx*);

/**
 * free() all memory held by the given Aspn23MeasurementTdoa2Tx1Rx,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_tdoa_2tx_1rx_free(void* pointer);
void aspn23_measurement_tdoa_2tx_1rx_free_members(Aspn23MeasurementTdoa2Tx1Rx* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
