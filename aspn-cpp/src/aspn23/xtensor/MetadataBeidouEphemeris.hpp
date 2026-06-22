
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MetadataBeidouEphemeris.h>

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
 * BeiDou Ephemeris describing satellite locations. Definitions and usage are covered in
 * BDS-SIS-ICD-BII-3.0, February 2019,
 */
class MetadataBeidouEphemeris : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MetadataBeidouEphemeris(Aspn23MetadataBeidouEphemeris* c_struct, bool take_ownership = true);

	MetadataBeidouEphemeris(TypeMetadataheader info,
	                        TypeTimestamp time_of_validity,
	                        int32_t prn,
	                        TypeSatnavClock clock,
	                        TypeKeplerOrbit orbit,
	                        double t_gd1,
	                        double t_gd2,
	                        int16_t aodc,
	                        int16_t aode);

	~MetadataBeidouEphemeris();

	MetadataBeidouEphemeris(const MetadataBeidouEphemeris& other);
	MetadataBeidouEphemeris& operator=(const MetadataBeidouEphemeris& rhs);

	MetadataBeidouEphemeris(MetadataBeidouEphemeris&& other);
	MetadataBeidouEphemeris& operator=(MetadataBeidouEphemeris&& rhs);

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
	Aspn23MetadataBeidouEphemeris* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MetadataBeidouEphemeris* replacement_struct,
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
	 * Group delay differential for B1I user.
	 */
	double get_t_gd1() const;

	/**
	 * Group delay differential for B1I user.
	 */
	void set_t_gd1(double);

	/**
	 * Group delay differential for B2I user.
	 */
	double get_t_gd2() const;

	/**
	 * Group delay differential for B2I user.
	 */
	void set_t_gd2(double);

	/**
	 * Age of data, clock is updated at start of each hour in BDT per table 5-6 in
	 * BDS-SIS-ICD-BII-3.0.
	 */
	int16_t get_aodc() const;

	/**
	 * Age of data, clock is updated at start of each hour in BDT per table 5-6 in
	 * BDS-SIS-ICD-BII-3.0.
	 */
	void set_aodc(int16_t);

	/**
	 * Age of data, ephemeris is updated at start of each hour in BDT per table 5-8 in
	 * BDS-SIS-ICD-BII-3.0.
	 */
	int16_t get_aode() const;

	/**
	 * Age of data, ephemeris is updated at start of each hour in BDT per table 5-8 in
	 * BDS-SIS-ICD-BII-3.0.
	 */
	void set_aode(int16_t);

private:
	Aspn23MetadataBeidouEphemeris* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
