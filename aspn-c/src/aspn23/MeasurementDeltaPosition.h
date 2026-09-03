
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

/**
 * Specifies measurement reference frame.
 */

enum Aspn23MeasurementDeltaPositionReferenceFrame {

	/**
	 * Change in position along the N, E, and D axes of the locally level NED frame. Each direction
	 * is optional. term1, term2, and term3, if provided, describe the change in position along the
	 * N, E, and D axes, respectively. For example, a depth sensor may report a change in position
	 * of +2m along the D axis by omitting term1 and term2 (using the appropriate null) and using
	 * term3 = 2. This observation may be interpreted as (1) the sensor has no knowledge of the
	 * change in position in the N and E directions, and (2) the sensor observed that the position
	 * at the end of the observation time interval, time_of_validity, is 2 meters lower than the
	 * position at the start of the time interval, time_of_validity - delta_t. See also NED
	 * coordinate frame definition for N, E, and D definitions.
	 */

	ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_NED,

	/**
	 * Change in position expressed in the sensor frame at the start of the measurement interval as
	 * defined in mounting. Each direction is optional. term1, term2, and term3, if provided,
	 * describe the change in position along the sensor x, y, and z axes, respectively.
	 */

	ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_START,

	/**
	 * Change in position expressed in the sensor frame at the end of the measurement interval as
	 * defined in mounting. Each direction is optional. term1, term2, and term3, if provided,
	 * describe the change in position along the sensor x, y, and z axes, respectively.
	 */

	ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_END
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementDeltaPositionErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_DELTA_POSITION_ERROR_MODEL_NONE
};

/**
 * Delta position is the change in position from the position at time (time_of_validity - delta_t)
 * to the position at time (time_of_validity), where the change in position is reported along each
 * axis of the reference frame. The reference frame is chosen by the user in the reference enum.
 */

typedef struct Aspn23MeasurementDeltaPosition {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid at the end of the delta-position
	 * period.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Specifies measurement reference frame.
	 */

	enum Aspn23MeasurementDeltaPositionReferenceFrame reference_frame;

	/**
	 * Duration of the observation time interval. The time_of_validity denotes the end of the time
	 * interval. The start of the time interval is time_of_validity - delta_t.
	 */

	double delta_t;

	/**
	 * Dimension of measurement provided.
	 */

	uint8_t num_meas;

	/**
	 * Delta position over the first dimension specified by the enum.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double term1;

	/**
	 * Delta position over the second dimension specified by the enum.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double term2;

	/**
	 * Delta position over the third dimension specified by the enum.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double term3;

	/**
	 * Variance or covariance matrix depending on measurement dimension.
	 * Dimensions of covariance must be num_meas²
	 */

	double* covariance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementDeltaPositionErrorModel error_model;

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

} Aspn23MeasurementDeltaPosition;

Aspn23MeasurementDeltaPosition* ASPN_NULLABLE aspn23_measurement_delta_position_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    enum Aspn23MeasurementDeltaPositionReferenceFrame reference_frame,
    double delta_t,
    uint8_t num_meas,
    double term1,
    double term2,
    double term3,
    double* covariance,
    enum Aspn23MeasurementDeltaPositionErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity);

Aspn23MeasurementDeltaPosition* ASPN_NULLABLE
aspn23_measurement_delta_position_copy(Aspn23MeasurementDeltaPosition*);

/**
 * free() all memory held by the given Aspn23MeasurementDeltaPosition,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_delta_position_free(void* pointer);
void aspn23_measurement_delta_position_free_members(Aspn23MeasurementDeltaPosition* self);

#ifdef __cplusplus
}  // extern "C"
#endif
