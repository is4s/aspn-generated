
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
 * BeiDou Ephemeris describing satellite locations. Definitions and usage are covered in
 * BDS-SIS-ICD-BII-3.0, February 2019,
 */

typedef struct Aspn23MetadataBeidouEphemeris {

	/**
	 * Standard ASPN metadata header.
	 */

	Aspn23TypeMetadataheader info;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

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
	 * Group delay differential for B1I user.
	 */

	double t_gd1;

	/**
	 * Group delay differential for B2I user.
	 */

	double t_gd2;

	/**
	 * Age of data, clock is updated at start of each hour in BDT per table 5-6 in
	 * BDS-SIS-ICD-BII-3.0.
	 */

	int16_t aodc;

	/**
	 * Age of data, ephemeris is updated at start of each hour in BDT per table 5-8 in
	 * BDS-SIS-ICD-BII-3.0.
	 */

	int16_t aode;

} Aspn23MetadataBeidouEphemeris;

Aspn23MetadataBeidouEphemeris* ASPN_NULLABLE
aspn23_metadata_beidou_ephemeris_new(Aspn23TypeMetadataheader* info,
                                     Aspn23TypeTimestamp* time_of_validity,
                                     int32_t prn,
                                     Aspn23TypeSatnavClock* clock,
                                     Aspn23TypeKeplerOrbit* orbit,
                                     double t_gd1,
                                     double t_gd2,
                                     int16_t aodc,
                                     int16_t aode);

Aspn23MetadataBeidouEphemeris* ASPN_NULLABLE
aspn23_metadata_beidou_ephemeris_copy(Aspn23MetadataBeidouEphemeris*);

/**
 * free() all memory held by the given Aspn23MetadataBeidouEphemeris,
 * including the struct itself.
 */

void aspn23_metadata_beidou_ephemeris_free(void* pointer);
void aspn23_metadata_beidou_ephemeris_free_members(Aspn23MetadataBeidouEphemeris* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
