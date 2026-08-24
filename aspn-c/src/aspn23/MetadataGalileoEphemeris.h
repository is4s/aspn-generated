
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
 * Enumerated field which describes the GALILEO message type used to define clock correction
 * parameters.
 */

enum Aspn23MetadataGalileoEphemerisNavMsgType {

	/**
	 * I/NAV ephemeris.
	 */

	ASPN23_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_INAV,

	/**
	 * F/NAV ephemeris.
	 */

	ASPN23_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_FNAV
};

/**
 * GALILEO Ephemeris describing satellite locations. Definitions and usage are covered in OS SIS
 * ICD, Issue 2.0, January 2021, Section 4.2, 4.3, and 5.1.
 */

typedef struct Aspn23MetadataGalileoEphemeris {

	/**
	 * Standard ASPN metadata header.
	 */

	Aspn23TypeMetadataheader info;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Enumerated field which describes the GALILEO message type used to define clock correction
	 * parameters.
	 */

	enum Aspn23MetadataGalileoEphemerisNavMsgType nav_msg_type;

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
	 * Broadcast group delay (E1-E5b if F/Nav, E1-E5b if I/NAV)
	 */

	double bgd;

} Aspn23MetadataGalileoEphemeris;

Aspn23MetadataGalileoEphemeris* ASPN_NULLABLE
aspn23_metadata_galileo_ephemeris_new(Aspn23TypeMetadataheader* info,
                                      Aspn23TypeTimestamp* time_of_validity,
                                      enum Aspn23MetadataGalileoEphemerisNavMsgType nav_msg_type,
                                      int32_t prn,
                                      Aspn23TypeSatnavClock* clock,
                                      Aspn23TypeKeplerOrbit* orbit,
                                      double bgd);

Aspn23MetadataGalileoEphemeris* ASPN_NULLABLE
aspn23_metadata_galileo_ephemeris_copy(Aspn23MetadataGalileoEphemeris*);

/**
 * free() all memory held by the given Aspn23MetadataGalileoEphemeris,
 * including the struct itself.
 */

void aspn23_metadata_galileo_ephemeris_free(void* pointer);
void aspn23_metadata_galileo_ephemeris_free_members(Aspn23MetadataGalileoEphemeris* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
