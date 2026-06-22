
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MeasurementSatnavSubframe.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeHeader.hpp"
#include "TypeTimestamp.hpp"
#include "TypeSatnavSatelliteSystem.hpp"
#include "TypeIntegrity.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * satnav navigation data bit subframe.
 */
class MeasurementSatnavSubframe : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MeasurementSatnavSubframe(Aspn23MeasurementSatnavSubframe* c_struct,
	                          bool take_ownership = true);

	MeasurementSatnavSubframe(TypeHeader header,
	                          TypeTimestamp time_of_validity,
	                          int64_t gnss_message_id,
	                          int32_t prn,
	                          TypeSatnavSatelliteSystem satellite_system,
	                          int32_t freq_slot_id,
	                          xt::xtensor<int8_t, 1> data_vector,
	                          std::vector<TypeIntegrity> integrity);

	~MeasurementSatnavSubframe();

	MeasurementSatnavSubframe(const MeasurementSatnavSubframe& other);
	MeasurementSatnavSubframe& operator=(const MeasurementSatnavSubframe& rhs);

	MeasurementSatnavSubframe(MeasurementSatnavSubframe&& other);
	MeasurementSatnavSubframe& operator=(MeasurementSatnavSubframe&& rhs);

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
	Aspn23MeasurementSatnavSubframe* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MeasurementSatnavSubframe* replacement_struct,
	                  bool take_ownership = true);

	/**
	 * Standard ASPN measurement header.
	 */
	TypeHeader get_header() const;

	/**
	 * Standard ASPN measurement header.
	 */
	void set_header(TypeHeader);

	/**
	 * Time at which the measurement is considered to be valid.
	 */
	TypeTimestamp get_time_of_validity() const;

	/**
	 * Time at which the measurement is considered to be valid.
	 */
	void set_time_of_validity(TypeTimestamp);

	/**
	 * Message ID provided from the satnav receiver.
	 */
	int64_t get_gnss_message_id() const;

	/**
	 * Message ID provided from the satnav receiver.
	 */
	void set_gnss_message_id(int64_t);

	/**
	 * Satellite ID number.
	 */
	int32_t get_prn() const;

	/**
	 * Satellite ID number.
	 */
	void set_prn(int32_t);

	/**
	 * Describes the satellite system that generated the subframe.
	 */
	TypeSatnavSatelliteSystem get_satellite_system() const;

	/**
	 * Describes the satellite system that generated the subframe.
	 */
	void set_satellite_system(TypeSatnavSatelliteSystem);

	/**
	 * Frequency slot +7 (range from 0-13). Only used for GLONASS.
	 */
	int32_t get_freq_slot_id() const;

	/**
	 * Frequency slot +7 (range from 0-13). Only used for GLONASS.
	 */
	void set_freq_slot_id(int32_t);

	/**
	 * Number of bytes of subframe data.
	 */
	uint16_t get_num_bytes() const;

	/**
	 * num_bytes sized array of raw subframe message collected by the sensor. The underlying type
	 * and shape of the data vector is given by satnav_msg_id.
	 */
	xt::xtensor<int8_t, 1> get_data_vector() const;

	/**
	 * num_bytes sized array of raw subframe message collected by the sensor. The underlying type
	 * and shape of the data vector is given by satnav_msg_id.
	 */
	void set_data_vector(xt::xtensor<int8_t, 1>);

	/**
	 * Number of integrity values.
	 */
	uint8_t get_num_integrity() const;

	/**
	 * Measurement integrity. Includes the integrity method used and an integrity value (which is to
	 * be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
	 * to report multiple integrity values based on multiple integrity methods.
	 */
	std::vector<TypeIntegrity> get_integrity() const;

	/**
	 * Measurement integrity. Includes the integrity method used and an integrity value (which is to
	 * be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
	 * to report multiple integrity values based on multiple integrity methods.
	 */
	void set_integrity(std::vector<TypeIntegrity>);

private:
	Aspn23MeasurementSatnavSubframe* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
