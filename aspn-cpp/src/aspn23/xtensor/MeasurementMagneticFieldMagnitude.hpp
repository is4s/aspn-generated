
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MeasurementMagneticFieldMagnitude.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeHeader.hpp"
#include "TypeTimestamp.hpp"
#include "TypeIntegrity.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Magnetic field magnitude measurement.
 */
class MeasurementMagneticFieldMagnitude : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MeasurementMagneticFieldMagnitude(Aspn23MeasurementMagneticFieldMagnitude* c_struct,
	                                  bool take_ownership = true);

	MeasurementMagneticFieldMagnitude(TypeHeader header,
	                                  TypeTimestamp time_of_validity,
	                                  double field_strength,
	                                  double variance,
	                                  Aspn23MeasurementMagneticFieldMagnitudeErrorModel error_model,
	                                  xt::xtensor<double, 1> error_model_params,
	                                  std::vector<TypeIntegrity> integrity);

	~MeasurementMagneticFieldMagnitude();

	MeasurementMagneticFieldMagnitude(const MeasurementMagneticFieldMagnitude& other);
	MeasurementMagneticFieldMagnitude& operator=(const MeasurementMagneticFieldMagnitude& rhs);

	MeasurementMagneticFieldMagnitude(MeasurementMagneticFieldMagnitude&& other);
	MeasurementMagneticFieldMagnitude& operator=(MeasurementMagneticFieldMagnitude&& rhs);

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
	Aspn23MeasurementMagneticFieldMagnitude* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MeasurementMagneticFieldMagnitude* replacement_struct,
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
	 * Field strength magnitude of magnetic field in nanoTesla (nT).
	 */
	double get_field_strength() const;

	/**
	 * Field strength magnitude of magnetic field in nanoTesla (nT).
	 */
	void set_field_strength(double);

	/**
	 * Magnetic field strength magnitude variance.
	 */
	double get_variance() const;

	/**
	 * Magnetic field strength magnitude variance.
	 */
	void set_variance(double);

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	Aspn23MeasurementMagneticFieldMagnitudeErrorModel get_error_model() const;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	void set_error_model(Aspn23MeasurementMagneticFieldMagnitudeErrorModel);

	/**
	 * Number of parameters required for the error model chosen.
	 */
	uint16_t get_num_error_model_params() const;

	/**
	 * Error model parameters that characterize the optional error model.
	 */
	xt::xtensor<double, 1> get_error_model_params() const;

	/**
	 * Error model parameters that characterize the optional error model.
	 */
	void set_error_model_params(xt::xtensor<double, 1>);

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
	Aspn23MeasurementMagneticFieldMagnitude* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
