
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MetadataGpsLnavEphemeris.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeMetadataheader.hpp"
#include "TypeTimestamp.hpp"
#include "TypeSatnavClock.hpp"
#include "TypeKeplerOrbit.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * LNAV Ephemeris describing GPS satellite locations. Definitions and usage are covered in
 * ICD-GPS-200L, Section 20.3.3.4 and following.
 */
class MetadataGpsLnavEphemeris : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MetadataGpsLnavEphemeris(Aspn23MetadataGpsLnavEphemeris* c_struct, bool take_ownership = true);

	MetadataGpsLnavEphemeris(TypeMetadataheader info,
	                         TypeTimestamp time_of_validity,
	                         uint16_t week_number,
	                         int32_t prn,
	                         TypeSatnavClock clock,
	                         TypeKeplerOrbit orbit,
	                         double t_gd,
	                         uint16_t iodc,
	                         uint8_t iode);

	~MetadataGpsLnavEphemeris();

	MetadataGpsLnavEphemeris(const MetadataGpsLnavEphemeris& other);
	MetadataGpsLnavEphemeris& operator=(const MetadataGpsLnavEphemeris& rhs);

	MetadataGpsLnavEphemeris(MetadataGpsLnavEphemeris&& other);
	MetadataGpsLnavEphemeris& operator=(MetadataGpsLnavEphemeris&& rhs);

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
	Aspn23MetadataGpsLnavEphemeris* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MetadataGpsLnavEphemeris* replacement_struct,
	                  bool take_ownership = true);

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
	 * Full GPS week number calculated from the Modulo 1024 WN in Subframe 1 and the number of GPS
	 * week rollovers
	 */
	uint16_t get_week_number() const;

	/**
	 * Full GPS week number calculated from the Modulo 1024 WN in Subframe 1 and the number of GPS
	 * week rollovers
	 */
	void set_week_number(uint16_t);

	/**
	 * Satellite PRN number.
	 */
	int32_t get_prn() const;

	/**
	 * Satellite PRN number.
	 */
	void set_prn(int32_t);

	/**
	 * GNSS broadcast parameters required to calculate sv clock corrections.
	 */
	TypeSatnavClock get_clock() const;

	/**
	 * GNSS broadcast parameters required to calculate sv clock corrections.
	 */
	void set_clock(TypeSatnavClock);

	/**
	 * Keplerian orbit parameters required to calculate satellite position.
	 */
	TypeKeplerOrbit get_orbit() const;

	/**
	 * Keplerian orbit parameters required to calculate satellite position.
	 */
	void set_orbit(TypeKeplerOrbit);

	/**
	 * Group delay differential between L1 and L2.
	 */
	double get_t_gd() const;

	/**
	 * Group delay differential between L1 and L2.
	 */
	void set_t_gd(double);

	/**
	 * Issue of Data Clock. 10 bit value from Subframe 1
	 */
	uint16_t get_iodc() const;

	/**
	 * Issue of Data Clock. 10 bit value from Subframe 1
	 */
	void set_iodc(uint16_t);

	/**
	 * Issue of Data Ephemeris. 8 bits repeated in Subframe 2 and Subframe 3. Should match the 8
	 * LSBs of the IODC.
	 */
	uint8_t get_iode() const;

	/**
	 * Issue of Data Ephemeris. 8 bits repeated in Subframe 2 and Subframe 3. Should match the 8
	 * LSBs of the IODC.
	 */
	void set_iode(uint8_t);

private:
	Aspn23MetadataGpsLnavEphemeris* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
