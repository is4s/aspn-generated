
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
 * Header for each ASPN measurement
 */

typedef struct Aspn23TypeHeader {

	/**
	 * An enum that specifies which message struct this object can be downcast to.
	 */

	Aspn23MessageType message_type;

	/**
	 * Unique identifier that identifies the device or application vendor. Vendor ID is
	 * user-selected, inspired by your company name to mitigate conflicts with other users. Vendor
	 * IDs 0x23 00 00 00 through 0x23 FF FF FF inclusive are reserved and shall not be chosen as
	 * user-selected vendor IDs.
	 */

	uint32_t vendor_id;

	/**
	 * Unique identifier that identifies the sensor or device type as assigned by the vendor.
	 * Device_ids are unique within a given vendor_id.
	 */

	uint64_t device_id;

	/**
	 * Unique identifier that provides additional context to define a logical stream of data from
	 * the sensor or device as assigned by the vendor. This identifier allows multiple measurements
	 * of the same type to be provided by a device. Context_ids are unique within a given vendor_id
	 * and device_id.
	 */

	uint32_t context_id;

	/**
	 * Unique identifier for a specific message within a data stream as defined by a vendor_id,
	 * device_id, and context_id. Sequential messages from each data source (identified by
	 * vendor_id, device_id, and context_id) shall increment by exactly 1 and rollover to 0 after an
	 * overflow.
	 */

	uint16_t sequence_id;

} Aspn23TypeHeader;

Aspn23TypeHeader* ASPN_NULLABLE aspn23_type_header_new(Aspn23MessageType message_type,
                                                       uint32_t vendor_id,
                                                       uint64_t device_id,
                                                       uint32_t context_id,
                                                       uint16_t sequence_id);

Aspn23TypeHeader* ASPN_NULLABLE aspn23_type_header_copy(Aspn23TypeHeader*);

/**
 * free() all memory held by the given Aspn23TypeHeader,
 * including the struct itself.
 */

void aspn23_type_header_free(void* pointer);
void aspn23_type_header_free_members(Aspn23TypeHeader* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
