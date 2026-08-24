
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeMetadataheader.h"
#include "TypeTimestamp.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Metadata for satnav_obs
 */

typedef struct Aspn23MetadataSatnavObs {

	/**
	 * Standard ASPN metadata header.
	 */

	Aspn23TypeMetadataheader info;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Start time of the interval over which the deltarange is measured with respect to the
	 * measurement time. This value must be provided if the deltarange measurement is provided.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	float deltarange_interval_start;

	/**
	 * Stop time of the interval over which the deltarange is measured with respect to the
	 * measurement time. This value must be provided if the deltarange measurement is provided. If
	 * the deltarange integration period is the same as the measurement time, this value should be
	 * 0.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	float deltarange_interval_stop;

} Aspn23MetadataSatnavObs;

Aspn23MetadataSatnavObs* ASPN_NULLABLE
aspn23_metadata_satnav_obs_new(Aspn23TypeMetadataheader* info,
                               Aspn23TypeTimestamp* time_of_validity,
                               float deltarange_interval_start,
                               float deltarange_interval_stop);

Aspn23MetadataSatnavObs* ASPN_NULLABLE aspn23_metadata_satnav_obs_copy(Aspn23MetadataSatnavObs*);

/**
 * free() all memory held by the given Aspn23MetadataSatnavObs,
 * including the struct itself.
 */

void aspn23_metadata_satnav_obs_free(void* pointer);
void aspn23_metadata_satnav_obs_free_members(Aspn23MetadataSatnavObs* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
