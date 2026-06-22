
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MetadataSatnavObs.h>

// xtensor
#include <xtensor-python/pytensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeMetadataheader.hpp"
#include "TypeTimestamp.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Metadata for satnav_obs
 */
class MetadataSatnavObs : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MetadataSatnavObs(Aspn23MetadataSatnavObs* c_struct, bool take_ownership = true);

	MetadataSatnavObs(TypeMetadataheader info,
	                  TypeTimestamp time_of_validity,
	                  float deltarange_interval_start,
	                  float deltarange_interval_stop);

	~MetadataSatnavObs();

	MetadataSatnavObs(const MetadataSatnavObs& other);
	MetadataSatnavObs& operator=(const MetadataSatnavObs& rhs);

	MetadataSatnavObs(MetadataSatnavObs&& other);
	MetadataSatnavObs& operator=(MetadataSatnavObs&& rhs);

	Aspn23MessageType get_message_type() const override;
	void set_message_type(Aspn23MessageType) override;

	uint32_t get_vendor_id() const override;
	void set_vendor_id(uint32_t) override;

	uint64_t get_device_id() const override;
	void set_device_id(uint64_t) override;

	uint32_t get_context_id() const override;
	void set_context_id(uint32_t) override;

	uint16_t get_sequence_id() const override;
	void set_sequence_id(uint16_t) override;

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23MetadataSatnavObs* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MetadataSatnavObs* replacement_struct, bool take_ownership = true);

	/**
	 * Standard ASPN metadata header.
	 */
	TypeMetadataheader get_info() const;

	/**
	 * Standard ASPN metadata header.
	 */
	void set_info(TypeMetadataheader);

	/**
	 * Time at which the measurement is considered to be valid.
	 */
	TypeTimestamp get_time_of_validity() const;

	/**
	 * Time at which the measurement is considered to be valid.
	 */
	void set_time_of_validity(TypeTimestamp);

	/**
	 * Start time of the interval over which the deltarange is measured with respect to the
	 * measurement time. This value must be provided if the deltarange measurement is provided.
	 */
	float get_deltarange_interval_start() const;

	/**
	 * Start time of the interval over which the deltarange is measured with respect to the
	 * measurement time. This value must be provided if the deltarange measurement is provided.
	 */
	void set_deltarange_interval_start(float);

	/**
	 * Stop time of the interval over which the deltarange is measured with respect to the
	 * measurement time. This value must be provided if the deltarange measurement is provided. If
	 * the deltarange integration period is the same as the measurement time, this value should be
	 * 0.
	 */
	float get_deltarange_interval_stop() const;

	/**
	 * Stop time of the interval over which the deltarange is measured with respect to the
	 * measurement time. This value must be provided if the deltarange measurement is provided. If
	 * the deltarange integration period is the same as the measurement time, this value should be
	 * 0.
	 */
	void set_deltarange_interval_stop(float);

private:
	Aspn23MetadataSatnavObs* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
