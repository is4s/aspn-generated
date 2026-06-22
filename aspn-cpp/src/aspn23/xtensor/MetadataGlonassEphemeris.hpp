
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MetadataGlonassEphemeris.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeMetadataheader.hpp"
#include "TypeTimestamp.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * GLONASS Ephemeris describing GLONASS satellite locations. Definitions and usage are covered in
 * GLONASS ICD L1,L2 - Edition 5.1 2008, Section 4.4.
 */
class MetadataGlonassEphemeris : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MetadataGlonassEphemeris(Aspn23MetadataGlonassEphemeris* c_struct, bool take_ownership = true);

	MetadataGlonassEphemeris(TypeMetadataheader info,
	                         TypeTimestamp time_of_validity,
	                         int32_t slot_number,
	                         int32_t freq_o,
	                         int32_t n_t,
	                         double t_k,
	                         double t_b,
	                         double gamma_n,
	                         double tau_n,
	                         double sv_pos_x,
	                         double sv_vel_x,
	                         double sv_accel_x,
	                         double sv_pos_y,
	                         double sv_vel_y,
	                         double sv_accel_y,
	                         double sv_pos_z,
	                         double sv_vel_z,
	                         double sv_accel_z);

	~MetadataGlonassEphemeris();

	MetadataGlonassEphemeris(const MetadataGlonassEphemeris& other);
	MetadataGlonassEphemeris& operator=(const MetadataGlonassEphemeris& rhs);

	MetadataGlonassEphemeris(MetadataGlonassEphemeris&& other);
	MetadataGlonassEphemeris& operator=(MetadataGlonassEphemeris&& rhs);

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
	Aspn23MetadataGlonassEphemeris* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MetadataGlonassEphemeris* replacement_struct,
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
	 * GLONASS satellite slot number.
	 */
	int32_t get_slot_number() const;

	/**
	 * GLONASS satellite slot number.
	 */
	void set_slot_number(int32_t);

	/**
	 * Frequency channel offset number in range from 0 to 20.
	 */
	int32_t get_freq_o() const;

	/**
	 * Frequency channel offset number in range from 0 to 20.
	 */
	void set_freq_o(int32_t);

	/**
	 * Calender number of day within 4 year interval starting at Jan 1 of a leap year
	 */
	int32_t get_n_t() const;

	/**
	 * Calender number of day within 4 year interval starting at Jan 1 of a leap year
	 */
	void set_n_t(int32_t);

	/**
	 * Time referenced to the beginning of the frame within the current day.
	 */
	double get_t_k() const;

	/**
	 * Time referenced to the beginning of the frame within the current day.
	 */
	void set_t_k(double);

	/**
	 * Index of time interval within current day according to UTC(SU) + 03 hrs.
	 */
	double get_t_b() const;

	/**
	 * Index of time interval within current day according to UTC(SU) + 03 hrs.
	 */
	void set_t_b(double);

	/**
	 * Relative Satellite frequency bias
	 */
	double get_gamma_n() const;

	/**
	 * Relative Satellite frequency bias
	 */
	void set_gamma_n(double);

	/**
	 * Satellite clock bias.
	 */
	double get_tau_n() const;

	/**
	 * Satellite clock bias.
	 */
	void set_tau_n(double);

	/**
	 * Satellite X position in PZ-90 coordinate system at time t_b.
	 */
	double get_sv_pos_x() const;

	/**
	 * Satellite X position in PZ-90 coordinate system at time t_b.
	 */
	void set_sv_pos_x(double);

	/**
	 * Satellite X velocity in PZ-90 coordinate system at time t_b.
	 */
	double get_sv_vel_x() const;

	/**
	 * Satellite X velocity in PZ-90 coordinate system at time t_b.
	 */
	void set_sv_vel_x(double);

	/**
	 * Satellite X acceleration in PZ-90 coordinate system at time t_b.
	 */
	double get_sv_accel_x() const;

	/**
	 * Satellite X acceleration in PZ-90 coordinate system at time t_b.
	 */
	void set_sv_accel_x(double);

	/**
	 * Satellite Y position in PZ-90 coordinate system at time t_b.
	 */
	double get_sv_pos_y() const;

	/**
	 * Satellite Y position in PZ-90 coordinate system at time t_b.
	 */
	void set_sv_pos_y(double);

	/**
	 * Satellite Y velocity in PZ-90 coordinate system at time t_b.
	 */
	double get_sv_vel_y() const;

	/**
	 * Satellite Y velocity in PZ-90 coordinate system at time t_b.
	 */
	void set_sv_vel_y(double);

	/**
	 * Satellite Y acceleration in PZ-90 coordinate system at time t_b.
	 */
	double get_sv_accel_y() const;

	/**
	 * Satellite Y acceleration in PZ-90 coordinate system at time t_b.
	 */
	void set_sv_accel_y(double);

	/**
	 * Satellite Z position in PZ-90 coordinate system at time t_b.
	 */
	double get_sv_pos_z() const;

	/**
	 * Satellite Z position in PZ-90 coordinate system at time t_b.
	 */
	void set_sv_pos_z(double);

	/**
	 * Satellite Z velocity in PZ-90 coordinate system at time t_b.
	 */
	double get_sv_vel_z() const;

	/**
	 * Satellite Z velocity in PZ-90 coordinate system at time t_b.
	 */
	void set_sv_vel_z(double);

	/**
	 * Satellite Z acceleration in PZ-90 coordinate system at time t_b.
	 */
	double get_sv_accel_z() const;

	/**
	 * Satellite Z acceleration in PZ-90 coordinate system at time t_b.
	 */
	void set_sv_accel_z(double);

private:
	Aspn23MetadataGlonassEphemeris* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
