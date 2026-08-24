
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeMetadataheader.h"
#include "TypeTimestamp.h"
#include "TypeMounting.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Metadata for a generic sensor.
 */

typedef struct Aspn23MetadataGeneric {

	/**
	 * Standard ASPN metadata header.
	 */

	Aspn23TypeMetadataheader info;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Standard ASPN mounting information.
	 */

	Aspn23TypeMounting mounting;

} Aspn23MetadataGeneric;

Aspn23MetadataGeneric* ASPN_NULLABLE
aspn23_metadata_generic_new(Aspn23TypeMetadataheader* info,
                            Aspn23TypeTimestamp* time_of_validity,
                            Aspn23TypeMounting* mounting);

Aspn23MetadataGeneric* ASPN_NULLABLE aspn23_metadata_generic_copy(Aspn23MetadataGeneric*);

/**
 * free() all memory held by the given Aspn23MetadataGeneric,
 * including the struct itself.
 */

void aspn23_metadata_generic_free(void* pointer);
void aspn23_metadata_generic_free_members(Aspn23MetadataGeneric* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
