
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MetadataMagneticField.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeMetadataheader.hpp"
#include "TypeTimestamp.hpp"
#include "TypeMounting.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Metadata for a magnetic field measurement. In addition to generic metadata information,
 * calibration parameters may be provided to account for effects such as soft iron, scale factor,
 * non-orthogonality, zero-bias, and hard iron. In general, for an num_meas-dimensional
 * measurement,
 * the magnetic field calibration metadata (K and b) shall be used as
 *
 * m_calibrated = K * m_measured - b
 *
 * where m_calibrated, m_measured, and b are num_meas x 1 vectors (scalar for num_meas = 1) and K
 * is
 * an num_meas x num_meas matrix (scalar for num_meas = 1). See magnetic_calibration.md for
 * additional details.
 *
 * More sophisticated approaches that include calibration parameters such as time-varying effects,
 * first-order Gauss-Markov bias models, and calibration parameter uncertainties may be included
 * using an appropriate error model in the measurement message.
 */
class MetadataMagneticField : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MetadataMagneticField(Aspn23MetadataMagneticField* c_struct, bool take_ownership = true);

	MetadataMagneticField(TypeMetadataheader info,
	                      TypeTimestamp time_of_validity,
	                      TypeMounting mounting,
	                      xt::xtensor<double, 2> k,
	                      xt::xtensor<double, 1> b);

	~MetadataMagneticField();

	MetadataMagneticField(const MetadataMagneticField& other);
	MetadataMagneticField& operator=(const MetadataMagneticField& rhs);

	MetadataMagneticField(MetadataMagneticField&& other);
	MetadataMagneticField& operator=(MetadataMagneticField&& rhs);

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
	Aspn23MetadataMagneticField* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MetadataMagneticField* replacement_struct, bool take_ownership = true);

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
	 * Standard ASPN mounting information.
	 */
	TypeMounting get_mounting() const;

	/**
	 * Standard ASPN mounting information.
	 */
	void set_mounting(TypeMounting);

	/**
	 * Dimension of measurement for which this metadata is applicable. May be 1, 2, or 3.
	 */
	uint8_t get_num_meas() const;

	/**
	 * Optional calibration parameter to account for the combined effects of soft iron, scale
	 * factor, and non-orthogonality as a unitless num_meas x num_meas matrix. Optional, but if
	 * provided, b must also be provided.
	 *
	 * This matrix must contain all real numbers or all NaNs.
	 */
	xt::xtensor<double, 2> get_k() const;

	/**
	 * Optional calibration parameter to account for the combined effects of soft iron, scale
	 * factor, and non-orthogonality as a unitless num_meas x num_meas matrix. Optional, but if
	 * provided, b must also be provided.
	 *
	 * This matrix must contain all real numbers or all NaNs.
	 */
	void set_k(xt::xtensor<double, 2>);

	/**
	 * Optional calibration parameter to account for the combined effects of zero-bias and hard iron
	 * as a num_meas x 1 vector in nanoTesla (nT). Optional, but if provided, K must also be
	 * provided.
	 */
	xt::xtensor<double, 1> get_b() const;

	/**
	 * Optional calibration parameter to account for the combined effects of zero-bias and hard iron
	 * as a num_meas x 1 vector in nanoTesla (nT). Optional, but if provided, K must also be
	 * provided.
	 */
	void set_b(xt::xtensor<double, 1>);

private:
	Aspn23MetadataMagneticField* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
