
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Whole number nanoseconds elapsed since timestamp's zero epoch. If negative, whole number
 * nanoseconds until timestamp's zero epoch. The zero epoch definition is based on the timing source
 * used by the message provider. The timing source used by the message provider is defined by the
 * `timestamp_clock_id` included in the `type_metadataheader` as part of the metadata. Additionally,
 * the timestamp's digits of precision are included in the `type_metadataheader` as part of the
 * metadata, which may be useful if an implementation is converting the timestamp to another type
 * internally.
 * If needed, the time elapsed in seconds is equal to elapsed_nsec * 1e-9.
 */

typedef struct Aspn23TypeTimestamp {

	/**
	 * Whole number nanoseconds elapsed since timestamp's zero epoch. If negative, whole number
	 * nanoseconds until timestamp's zero epoch.
	 */

	int64_t elapsed_nsec;

} Aspn23TypeTimestamp;

Aspn23TypeTimestamp* ASPN_NULLABLE aspn23_type_timestamp_new(int64_t elapsed_nsec);

Aspn23TypeTimestamp* ASPN_NULLABLE aspn23_type_timestamp_copy(Aspn23TypeTimestamp*);

/**
 * free() all memory held by the given Aspn23TypeTimestamp,
 * including the struct itself.
 */

void aspn23_type_timestamp_free(void* pointer);
void aspn23_type_timestamp_free_members(Aspn23TypeTimestamp* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
