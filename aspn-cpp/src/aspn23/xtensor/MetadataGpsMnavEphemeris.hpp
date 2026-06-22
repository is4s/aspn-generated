
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MetadataGpsMnavEphemeris.h>

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
 * MNAV Ephemeris describing GPS satellite locations. Definitions and usage are covered in
 * ICD-GPS-200L, Section 20.3.3.4 and following, with additional military use definitions and usage
 * covered in ICD-GPS-700D.
 */
class MetadataGpsMnavEphemeris : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MetadataGpsMnavEphemeris(Aspn23MetadataGpsMnavEphemeris* c_struct, bool take_ownership = true);

	MetadataGpsMnavEphemeris(TypeMetadataheader info,
	                         TypeTimestamp time_of_validity,
	                         uint16_t week_number,
	                         int32_t prn,
	                         TypeSatnavClock clock,
	                         TypeKeplerOrbit orbit,
	                         double a_dot,
	                         double delta_af_0,
	                         double delta_af_1,
	                         double delta_gamma,
	                         double delta_i,
	                         double delta_omega,
	                         double delta_a,
	                         double isc_l1_m_e,
	                         double isc_l2_m_e,
	                         double isc_l1_m_s,
	                         double isc_l2_m_s,
	                         double isa_l2_py,
	                         double isa_l1_m_e,
	                         double isa_l2_m_e,
	                         double isa_l1_m_s,
	                         double isa_l2_m_s);

	~MetadataGpsMnavEphemeris();

	MetadataGpsMnavEphemeris(const MetadataGpsMnavEphemeris& other);
	MetadataGpsMnavEphemeris& operator=(const MetadataGpsMnavEphemeris& rhs);

	MetadataGpsMnavEphemeris(MetadataGpsMnavEphemeris&& other);
	MetadataGpsMnavEphemeris& operator=(MetadataGpsMnavEphemeris&& rhs);

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
	Aspn23MetadataGpsMnavEphemeris* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MetadataGpsMnavEphemeris* replacement_struct,
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
	 * Change rate of semi-major axis.
	 */
	double get_a_dot() const;

	/**
	 * Change rate of semi-major axis.
	 */
	void set_a_dot(double);

	/**
	 * SV clock bias correction provided by the Mnav Message Correction (MMC).
	 */
	double get_delta_af_0() const;

	/**
	 * SV clock bias correction provided by the Mnav Message Correction (MMC).
	 */
	void set_delta_af_0(double);

	/**
	 * SV clock drift correction provided by the Mnav Message Correction (MMC).
	 */
	double get_delta_af_1() const;

	/**
	 * SV clock drift correction provided by the Mnav Message Correction (MMC).
	 */
	void set_delta_af_1(double);

	/**
	 * Ephemeris parameters correction provided by the Mnav Message Correction (MMC).
	 */
	double get_delta_gamma() const;

	/**
	 * Ephemeris parameters correction provided by the Mnav Message Correction (MMC).
	 */
	void set_delta_gamma(double);

	/**
	 * Angle of inclination correction provided by the Mnav Message Correction (MMC).
	 */
	double get_delta_i() const;

	/**
	 * Angle of inclination correction provided by the Mnav Message Correction (MMC).
	 */
	void set_delta_i(double);

	/**
	 * Angle of Right Ascension correction provided by the Mnav Message Correction (MMC).
	 */
	double get_delta_omega() const;

	/**
	 * Angle of Right Ascension correction provided by the Mnav Message Correction (MMC).
	 */
	void set_delta_omega(double);

	/**
	 * Semi-major axis correction provided by the Mnav Message Correction (MMC).
	 */
	double get_delta_a() const;

	/**
	 * Semi-major axis correction provided by the Mnav Message Correction (MMC).
	 */
	void set_delta_a(double);

	/**
	 * L M1_E to L1 P(Y) inter-signal correction.
	 */
	double get_isc_l1_m_e() const;

	/**
	 * L M1_E to L1 P(Y) inter-signal correction.
	 */
	void set_isc_l1_m_e(double);

	/**
	 * L M2_E to L1 P(Y) inter-signal correction.
	 */
	double get_isc_l2_m_e() const;

	/**
	 * L M2_E to L1 P(Y) inter-signal correction.
	 */
	void set_isc_l2_m_e(double);

	/**
	 * L M1_S to L1 P(Y) inter-signal correction.
	 */
	double get_isc_l1_m_s() const;

	/**
	 * L M1_S to L1 P(Y) inter-signal correction.
	 */
	void set_isc_l1_m_s(double);

	/**
	 * L M2_S to L1 P(Y) inter-signal correction.
	 */
	double get_isc_l2_m_s() const;

	/**
	 * L M2_S to L1 P(Y) inter-signal correction.
	 */
	void set_isc_l2_m_s(double);

	/**
	 * L2 P(Y) to L1 P(Y) inter-signal accuracy index.
	 */
	double get_isa_l2_py() const;

	/**
	 * L2 P(Y) to L1 P(Y) inter-signal accuracy index.
	 */
	void set_isa_l2_py(double);

	/**
	 * L M1_E to L1 P(Y) inter-signal accuracy index.
	 */
	double get_isa_l1_m_e() const;

	/**
	 * L M1_E to L1 P(Y) inter-signal accuracy index.
	 */
	void set_isa_l1_m_e(double);

	/**
	 * L M2_E to L1 P(Y) inter-signal accuracy index.
	 */
	double get_isa_l2_m_e() const;

	/**
	 * L M2_E to L1 P(Y) inter-signal accuracy index.
	 */
	void set_isa_l2_m_e(double);

	/**
	 * L M1_S to L1 P(Y) inter-signal accuracy index.
	 */
	double get_isa_l1_m_s() const;

	/**
	 * L M1_S to L1 P(Y) inter-signal accuracy index.
	 */
	void set_isa_l1_m_s(double);

	/**
	 * L M2_S to L1 P(Y) inter-signal accuracy index.
	 */
	double get_isa_l2_m_s() const;

	/**
	 * L M2_S to L1 P(Y) inter-signal accuracy index.
	 */
	void set_isa_l2_m_s(double);

private:
	Aspn23MetadataGpsMnavEphemeris* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
