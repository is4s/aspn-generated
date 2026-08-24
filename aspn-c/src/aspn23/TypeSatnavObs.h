
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeSatnavSatelliteSystem.h"
#include "TypeSatnavSignalDescriptor.h"
#include "TypeIntegrity.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Indicates the type of measurement contained in pseudorange_rate.
 */

enum Aspn23TypeSatnavObsPseudorangeRateType {

	/**
	 * Instantaneous Doppler at measurement time. Units = Hz Cov. Units = Hz^2
	 */

	ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER,

	/**
	 * Change in pseudorange (integrated Doppler) over a specified time interval. The interval is
	 * provided in metadata_satnav_obs. Units = m Cov. Units = m^2
	 */

	ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE
};

/**
 * Enumerated field which describes the source of the ionospheric delay correction.
 */

enum Aspn23TypeSatnavObsIonoCorrectionSource {

	/**
	 * unknown source
	 */

	ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN,

	/**
	 * modeled using the ionospheric models in IS-GPS-200, IS-GPS-700, or IS-GPS-800
	 */

	ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED,

	/**
	 * measured using dual frequencies
	 */

	ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED
};

/**
 * Defines measurements that come from a satnav receiver tracking a single signal from a single
 * satellite.
 */

typedef struct Aspn23TypeSatnavObs {

	/**
	 * Enumerated field which describes the Satellite System that generated the observations.
	 */

	Aspn23TypeSatnavSatelliteSystem satellite_system;

	/**
	 * Satellite signal descriptor as defined in RINEX 3.05
	 */

	Aspn23TypeSatnavSignalDescriptor signal_descriptor;

	/**
	 * PRN code which identifies satellite (or slot number, in the case of GLONASS) for the
	 * observables.
	 */

	int16_t prn;

	/**
	 * Center frequency of signal. For GLONASS, this should be the center frequency of the
	 * frequency-shifted signal with the k value taken into account.
	 */

	double frequency;

	/**
	 * Pseudorange measurement
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double pseudorange;

	/**
	 * Variance of pseudorange measurement noise/multipath. This value must be provided if the
	 * pseudorange measurement is provided. Note: This is not intended to represent clock,
	 * atmospheric, or satellite position errors.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	float pseudorange_variance;

	/**
	 * Indicates the type of measurement contained in pseudorange_rate.
	 */

	enum Aspn23TypeSatnavObsPseudorangeRateType pseudorange_rate_type;

	/**
	 * Measurement of the change in the pseudorange. See pseudorange_rate_type for details.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double pseudorange_rate;

	/**
	 * Variance of pseudorange_rate noise. This value must be provided if the pseudorange_rate
	 * measurement is provided.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	float pseudorange_rate_variance;

	/**
	 * Carrier-phase (integrated Doppler) measurement. This measurement has an N cycle ambiguity
	 * (where N is unknown and arbitrary integer).
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double carrier_phase;

	/**
	 * Variance of carrier-phase noise/multipath. This value must be provided if the carrier-phase
	 * measurement is provided. Note: This is not intended to represent clock, atmospheric, or
	 * satellite position errors or the integer N ambiguity.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	float carrier_phase_variance;

	/**
	 * Carrier to noise density ratio. C/N0 = 10[log10(S/N0)]
	 * NaN indicates this optional field is not provided.
	 */

	float c_n0;

	/**
	 * Number of observations with continuous tracking (no cycle slips). Value of -1 means that
	 * there is no loss of lock information available. First lock_count after cycle slip has
	 * occurred will have a value of 0. The lock_count only applies to the carrier-phase
	 * measurement.
	 */

	int32_t lock_count;

	/**
	 * Enumerated field which describes the source of the ionospheric delay correction.
	 */

	enum Aspn23TypeSatnavObsIonoCorrectionSource iono_correction_source;

	/**
	 * Identifies if the ionospheric correction has been applied to the measurement. 1 = Applied.
	 */

	bool iono_correction_applied;

	/**
	 * Identifies if the tropospheric correction has been applied to the measurement. 1 = Applied.
	 */

	bool tropo_correction_applied;

	/**
	 * Represents biases within the transmitting signal that are identified in the downlink data,
	 * Group Delay for LNAV, and Interchannel Signal Correction (ISC) message for MNAV. This term
	 * indicates whether the correction is known, being applied to Pseudorange Correction, and its
	 * associated estimated error applied to the ERE. When invalid the correction and estimated
	 * error are not known and therefore not applied. 1 = Valid.
	 */

	bool signal_bias_correction_applied;

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

} Aspn23TypeSatnavObs;

Aspn23TypeSatnavObs* ASPN_NULLABLE
aspn23_type_satnav_obs_new(Aspn23TypeSatnavSatelliteSystem* satellite_system,
                           Aspn23TypeSatnavSignalDescriptor* signal_descriptor,
                           int16_t prn,
                           double frequency,
                           double pseudorange,
                           float pseudorange_variance,
                           enum Aspn23TypeSatnavObsPseudorangeRateType pseudorange_rate_type,
                           double pseudorange_rate,
                           float pseudorange_rate_variance,
                           double carrier_phase,
                           float carrier_phase_variance,
                           float c_n0,
                           int32_t lock_count,
                           enum Aspn23TypeSatnavObsIonoCorrectionSource iono_correction_source,
                           bool iono_correction_applied,
                           bool tropo_correction_applied,
                           bool signal_bias_correction_applied,
                           uint8_t num_integrity,
                           Aspn23TypeIntegrity* integrity);

Aspn23TypeSatnavObs* ASPN_NULLABLE aspn23_type_satnav_obs_copy(Aspn23TypeSatnavObs*);

/**
 * free() all memory held by the given Aspn23TypeSatnavObs,
 * including the struct itself.
 *
 * Pointer fields (integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_type_satnav_obs_free(void* pointer);
void aspn23_type_satnav_obs_free_members(Aspn23TypeSatnavObs* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
