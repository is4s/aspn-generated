
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeMetadataheader.h"
#include "TypeTimestamp.h"
#include "TypeSatnavClock.h"
#include "TypeKeplerOrbit.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * MNAV Ephemeris describing GPS satellite locations. Definitions and usage are covered in
 * ICD-GPS-200L, Section 20.3.3.4 and following, with additional military use definitions and usage
 * covered in ICD-GPS-700D.
 */

typedef struct Aspn23MetadataGpsMnavEphemeris {

	/**
	 * Standard ASPN metadata header.
	 */

	Aspn23TypeMetadataheader info;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Full GPS week number calculated from the Modulo 1024 WN in Subframe 1 and the number of GPS
	 * week rollovers
	 */

	uint16_t week_number;

	/**
	 * Satellite PRN number.
	 */

	int32_t prn;

	/**
	 * GNSS broadcast parameters required to calculate sv clock corrections.
	 */

	Aspn23TypeSatnavClock clock;

	/**
	 * Keplerian orbit parameters required to calculate satellite position.
	 */

	Aspn23TypeKeplerOrbit orbit;

	/**
	 * Change rate of semi-major axis.
	 */

	double a_dot;

	/**
	 * SV clock bias correction provided by the Mnav Message Correction (MMC).
	 */

	double delta_af_0;

	/**
	 * SV clock drift correction provided by the Mnav Message Correction (MMC).
	 */

	double delta_af_1;

	/**
	 * Ephemeris parameters correction provided by the Mnav Message Correction (MMC).
	 */

	double delta_gamma;

	/**
	 * Angle of inclination correction provided by the Mnav Message Correction (MMC).
	 */

	double delta_i;

	/**
	 * Angle of Right Ascension correction provided by the Mnav Message Correction (MMC).
	 */

	double delta_omega;

	/**
	 * Semi-major axis correction provided by the Mnav Message Correction (MMC).
	 */

	double delta_a;

	/**
	 * L M1_E to L1 P(Y) inter-signal correction.
	 */

	double isc_l1_m_e;

	/**
	 * L M2_E to L1 P(Y) inter-signal correction.
	 */

	double isc_l2_m_e;

	/**
	 * L M1_S to L1 P(Y) inter-signal correction.
	 */

	double isc_l1_m_s;

	/**
	 * L M2_S to L1 P(Y) inter-signal correction.
	 */

	double isc_l2_m_s;

	/**
	 * L2 P(Y) to L1 P(Y) inter-signal accuracy index.
	 */

	double isa_l2_py;

	/**
	 * L M1_E to L1 P(Y) inter-signal accuracy index.
	 */

	double isa_l1_m_e;

	/**
	 * L M2_E to L1 P(Y) inter-signal accuracy index.
	 */

	double isa_l2_m_e;

	/**
	 * L M1_S to L1 P(Y) inter-signal accuracy index.
	 */

	double isa_l1_m_s;

	/**
	 * L M2_S to L1 P(Y) inter-signal accuracy index.
	 */

	double isa_l2_m_s;

} Aspn23MetadataGpsMnavEphemeris;

Aspn23MetadataGpsMnavEphemeris* ASPN_NULLABLE
aspn23_metadata_gps_mnav_ephemeris_new(Aspn23TypeMetadataheader* info,
                                       Aspn23TypeTimestamp* time_of_validity,
                                       uint16_t week_number,
                                       int32_t prn,
                                       Aspn23TypeSatnavClock* clock,
                                       Aspn23TypeKeplerOrbit* orbit,
                                       double a_dot,
                                       double delta_af_0,
                                       double delta_af_1,
                                       double delta_gamma,
                                       double delta_i,
                                       double delta_omega,
                                       double delta_a,
                                       double isc_l1_m_e,
                                       double isc_l2_m_e,
                                       double isc_l1_m_s,
                                       double isc_l2_m_s,
                                       double isa_l2_py,
                                       double isa_l1_m_e,
                                       double isa_l2_m_e,
                                       double isa_l1_m_s,
                                       double isa_l2_m_s);

Aspn23MetadataGpsMnavEphemeris* ASPN_NULLABLE
aspn23_metadata_gps_mnav_ephemeris_copy(Aspn23MetadataGpsMnavEphemeris*);

/**
 * free() all memory held by the given Aspn23MetadataGpsMnavEphemeris,
 * including the struct itself.
 */

void aspn23_metadata_gps_mnav_ephemeris_free(void* pointer);
void aspn23_metadata_gps_mnav_ephemeris_free_members(Aspn23MetadataGpsMnavEphemeris* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
