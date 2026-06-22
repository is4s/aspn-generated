
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeHeader.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Header for each ASPN measurement
 */
class TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeHeader(Aspn23TypeHeader* c_struct, bool take_ownership = true);

	TypeHeader(Aspn23MessageType message_type,
	           uint32_t vendor_id,
	           uint64_t device_id,
	           uint32_t context_id,
	           uint16_t sequence_id);

	virtual ~TypeHeader();

	TypeHeader(const TypeHeader& other);
	TypeHeader& operator=(const TypeHeader& rhs);

	TypeHeader(TypeHeader&& other);
	TypeHeader& operator=(TypeHeader&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeHeader* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeHeader* replacement_struct, bool take_ownership = true);

	/**
	 * An enum that specifies which message struct this object can be downcast to.
	 */
	Aspn23MessageType virtual get_message_type() const;

	/**
	 * An enum that specifies which message struct this object can be downcast to.
	 */
	void virtual set_message_type(Aspn23MessageType);

	/**
	 * Unique identifier that identifies the device or application vendor. Vendor ID is
	 * user-selected, inspired by your company name to mitigate conflicts with other users. Vendor
	 * IDs 0x23 00 00 00 through 0x23 FF FF FF inclusive are reserved and shall not be chosen as
	 * user-selected vendor IDs.
	 */
	uint32_t virtual get_vendor_id() const;

	/**
	 * Unique identifier that identifies the device or application vendor. Vendor ID is
	 * user-selected, inspired by your company name to mitigate conflicts with other users. Vendor
	 * IDs 0x23 00 00 00 through 0x23 FF FF FF inclusive are reserved and shall not be chosen as
	 * user-selected vendor IDs.
	 */
	void virtual set_vendor_id(uint32_t);

	/**
	 * Unique identifier that identifies the sensor or device type as assigned by the vendor.
	 * Device_ids are unique within a given vendor_id.
	 */
	uint64_t virtual get_device_id() const;

	/**
	 * Unique identifier that identifies the sensor or device type as assigned by the vendor.
	 * Device_ids are unique within a given vendor_id.
	 */
	void virtual set_device_id(uint64_t);

	/**
	 * Unique identifier that provides additional context to define a logical stream of data from
	 * the sensor or device as assigned by the vendor. This identifier allows multiple measurements
	 * of the same type to be provided by a device. Context_ids are unique within a given vendor_id
	 * and device_id.
	 */
	uint32_t virtual get_context_id() const;

	/**
	 * Unique identifier that provides additional context to define a logical stream of data from
	 * the sensor or device as assigned by the vendor. This identifier allows multiple measurements
	 * of the same type to be provided by a device. Context_ids are unique within a given vendor_id
	 * and device_id.
	 */
	void virtual set_context_id(uint32_t);

	/**
	 * Unique identifier for a specific message within a data stream as defined by a vendor_id,
	 * device_id, and context_id. Sequential messages from each data source (identified by
	 * vendor_id, device_id, and context_id) shall increment by exactly 1 and rollover to 0 after an
	 * overflow.
	 */
	uint16_t virtual get_sequence_id() const;

	/**
	 * Unique identifier for a specific message within a data stream as defined by a vendor_id,
	 * device_id, and context_id. Sequential messages from each data source (identified by
	 * vendor_id, device_id, and context_id) shall increment by exactly 1 and rollover to 0 after an
	 * overflow.
	 */
	void virtual set_sequence_id(uint16_t);

private:
	Aspn23TypeHeader* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
