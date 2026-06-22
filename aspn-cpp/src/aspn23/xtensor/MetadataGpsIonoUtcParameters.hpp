
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MetadataGpsIonoUtcParameters.h>

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
 * Broadcasted GPS navigation data for estimation of single frequency ionospheric correction and
 * determination of UTC. Definitions and usage are covered in ICD-GPS-200L, Section 20.3.3.5.1.6 and
 * 20.3.3.5.1.7.
 */
class MetadataGpsIonoUtcParameters : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MetadataGpsIonoUtcParameters(Aspn23MetadataGpsIonoUtcParameters* c_struct,
	                             bool take_ownership = true);

	MetadataGpsIonoUtcParameters(TypeMetadataheader info,
	                             TypeTimestamp time_of_validity,
	                             double a_0,
	                             double a_1,
	                             int8_t delta_t_ls,
	                             uint32_t tot,
	                             uint8_t wn_t,
	                             uint8_t wn_lsf,
	                             uint8_t dn,
	                             int8_t delta_t_lsf,
	                             double alpha_0,
	                             double alpha_1,
	                             double alpha_2,
	                             double alpha_3,
	                             double beta_0,
	                             double beta_1,
	                             double beta_2,
	                             double beta_3);

	~MetadataGpsIonoUtcParameters();

	MetadataGpsIonoUtcParameters(const MetadataGpsIonoUtcParameters& other);
	MetadataGpsIonoUtcParameters& operator=(const MetadataGpsIonoUtcParameters& rhs);

	MetadataGpsIonoUtcParameters(MetadataGpsIonoUtcParameters&& other);
	MetadataGpsIonoUtcParameters& operator=(MetadataGpsIonoUtcParameters&& rhs);

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
	Aspn23MetadataGpsIonoUtcParameters* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MetadataGpsIonoUtcParameters* replacement_struct,
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
	 * Bias coefficient of GPS time scale relative to UTC time scale.
	 */
	double get_a_0() const;

	/**
	 * Bias coefficient of GPS time scale relative to UTC time scale.
	 */
	void set_a_0(double);

	/**
	 * Drift coefficient of GPS time scale relative to UTC time scale.
	 */
	double get_a_1() const;

	/**
	 * Drift coefficient of GPS time scale relative to UTC time scale.
	 */
	void set_a_1(double);

	/**
	 * Leap second count.
	 */
	int8_t get_delta_t_ls() const;

	/**
	 * Leap second count.
	 */
	void set_delta_t_ls(int8_t);

	/**
	 * Reference GPS time of week for UTC parameters
	 */
	uint32_t get_tot() const;

	/**
	 * Reference GPS time of week for UTC parameters
	 */
	void set_tot(uint32_t);

	/**
	 * Reference Modulo 256 GPS Week number for UTC parameters
	 */
	uint8_t get_wn_t() const;

	/**
	 * Reference Modulo 256 GPS Week number for UTC parameters
	 */
	void set_wn_t(uint8_t);

	/**
	 * Modulo 256 GPS Week number at the end of which delta_t_lsf becomes effective.
	 */
	uint8_t get_wn_lsf() const;

	/**
	 * Modulo 256 GPS Week number at the end of which delta_t_lsf becomes effective.
	 */
	void set_wn_lsf(uint8_t);

	/**
	 * Day number at the end of which delta_t_lsf becomes effective (1 to 7).
	 */
	uint8_t get_dn() const;

	/**
	 * Day number at the end of which delta_t_lsf becomes effective (1 to 7).
	 */
	void set_dn(uint8_t);

	/**
	 * Future leap second count.
	 */
	int8_t get_delta_t_lsf() const;

	/**
	 * Future leap second count.
	 */
	void set_delta_t_lsf(int8_t);

	/**
	 * Zeroth-order coefficient of amplitude of vertical ionospheric delay.
	 */
	double get_alpha_0() const;

	/**
	 * Zeroth-order coefficient of amplitude of vertical ionospheric delay.
	 */
	void set_alpha_0(double);

	/**
	 * First-order coefficient of amplitude of vertical ionospheric delay.
	 */
	double get_alpha_1() const;

	/**
	 * First-order coefficient of amplitude of vertical ionospheric delay.
	 */
	void set_alpha_1(double);

	/**
	 * Second-order coefficient of amplitude of vertical ionospheric delay.
	 */
	double get_alpha_2() const;

	/**
	 * Second-order coefficient of amplitude of vertical ionospheric delay.
	 */
	void set_alpha_2(double);

	/**
	 * Third-order coefficient of amplitude of vertical ionospheric delay.
	 */
	double get_alpha_3() const;

	/**
	 * Third-order coefficient of amplitude of vertical ionospheric delay.
	 */
	void set_alpha_3(double);

	/**
	 * Zeroth-order coefficient of period of ionospheric delay model.
	 */
	double get_beta_0() const;

	/**
	 * Zeroth-order coefficient of period of ionospheric delay model.
	 */
	void set_beta_0(double);

	/**
	 * First-order coefficient of period of ionospheric delay model.
	 */
	double get_beta_1() const;

	/**
	 * First-order coefficient of period of ionospheric delay model.
	 */
	void set_beta_1(double);

	/**
	 * Second-order coefficient of period of ionospheric delay model.
	 */
	double get_beta_2() const;

	/**
	 * Second-order coefficient of period of ionospheric delay model.
	 */
	void set_beta_2(double);

	/**
	 * Third-order coefficient of period of ionospheric delay model.
	 */
	double get_beta_3() const;

	/**
	 * Third-order coefficient of period of ionospheric delay model.
	 */
	void set_beta_3(double);

private:
	Aspn23MetadataGpsIonoUtcParameters* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
