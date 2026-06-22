
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MeasurementSatnavWithSvData.h>

// xtensor
#include <xtensor-python/pytensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeHeader.hpp"
#include "TypeTimestamp.hpp"
#include "TypeSatnavTime.hpp"
#include "TypeSatnavObs.hpp"
#include "TypeSatnavSvData.hpp"
#include "TypeIntegrity.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Raw measurements from a satnav receiver.
 */
class MeasurementSatnavWithSvData : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MeasurementSatnavWithSvData(Aspn23MeasurementSatnavWithSvData* c_struct,
	                            bool take_ownership = true);

	MeasurementSatnavWithSvData(TypeHeader header,
	                            TypeTimestamp time_of_validity,
	                            TypeSatnavTime receiver_clock_time,
	                            uint16_t num_signal_types,
	                            std::vector<TypeSatnavObs> obs,
	                            std::vector<TypeSatnavSvData> sv_data,
	                            std::vector<TypeIntegrity> integrity);

	~MeasurementSatnavWithSvData();

	MeasurementSatnavWithSvData(const MeasurementSatnavWithSvData& other);
	MeasurementSatnavWithSvData& operator=(const MeasurementSatnavWithSvData& rhs);

	MeasurementSatnavWithSvData(MeasurementSatnavWithSvData&& other);
	MeasurementSatnavWithSvData& operator=(MeasurementSatnavWithSvData&& rhs);

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
	Aspn23MeasurementSatnavWithSvData* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MeasurementSatnavWithSvData* replacement_struct,
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
	 * Receiver clock time. In a multi-GNSS receiver (GPS/GLONASS/Galileo/QZSS/BeiDou) all
	 * pseudorange observations must refer to one receiver clock only. The receiver clock time of
	 * the measurement is the receiver clock time of the received signals. It is identical for the
	 * phase and range measurements and is identical for all satellites observed in a given epoch.
	 */
	TypeSatnavTime get_receiver_clock_time() const;

	/**
	 * Receiver clock time. In a multi-GNSS receiver (GPS/GLONASS/Galileo/QZSS/BeiDou) all
	 * pseudorange observations must refer to one receiver clock only. The receiver clock time of
	 * the measurement is the receiver clock time of the received signals. It is identical for the
	 * phase and range measurements and is identical for all satellites observed in a given epoch.
	 */
	void set_receiver_clock_time(TypeSatnavTime);

	/**
	 * Number of different signal types tracked in the current epoch. Examples of signal types
	 * include GPS L1 C/A code, Galileo E1B.
	 */
	uint16_t get_num_signal_types() const;

	/**
	 * Number of different signal types tracked in the current epoch. Examples of signal types
	 * include GPS L1 C/A code, Galileo E1B.
	 */
	void set_num_signal_types(uint16_t);

	/**
	 * Total number of signals tracked across all PRNs and signal types.
	 */
	uint16_t get_num_signals_tracked() const;

	/**
	 * Array of satnav obs data for all of the signals/PRNs being tracked in this epoch.
	 */
	std::vector<TypeSatnavObs> get_obs() const;

	/**
	 * Array of satnav obs data for all of the signals/PRNs being tracked in this epoch.
	 */
	void set_obs(std::vector<TypeSatnavObs>);

	/**
	 * Array of satellite position, velocity, and clock information. These line up precisely with
	 * the obs, such that sv_data[N] is the satellite information for observations obs[N] for any
	 * valid N.
	 */
	std::vector<TypeSatnavSvData> get_sv_data() const;

	/**
	 * Array of satellite position, velocity, and clock information. These line up precisely with
	 * the obs, such that sv_data[N] is the satellite information for observations obs[N] for any
	 * valid N.
	 */
	void set_sv_data(std::vector<TypeSatnavSvData>);

	/**
	 * Number of integrity values.
	 */
	uint8_t get_num_integrity() const;

	/**
	 * Measurement integrity at the sensor level. Integrity is also available for each observable,
	 * which is found in the observable type definition. Includes the integrity method used and an
	 * integrity value (which is to be interpreted based upon the integrity method). The intent of
	 * allowing num_integrity > 1 is to report multiple integrity values based on multiple integrity
	 * methods.
	 */
	std::vector<TypeIntegrity> get_integrity() const;

	/**
	 * Measurement integrity at the sensor level. Integrity is also available for each observable,
	 * which is found in the observable type definition. Includes the integrity method used and an
	 * integrity value (which is to be interpreted based upon the integrity method). The intent of
	 * allowing num_integrity > 1 is to report multiple integrity values based on multiple integrity
	 * methods.
	 */
	void set_integrity(std::vector<TypeIntegrity>);

private:
	Aspn23MeasurementSatnavWithSvData* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
