
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MeasurementMagneticField.h>

// xtensor
#include <xtensor-python/pytensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeHeader.hpp"
#include "TypeTimestamp.hpp"
#include "TypeIntegrity.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Vector magnetic field. Represents the magnetic field strength along sensor x, y, and z axes as
 * defined in mounting. May represent 1-D, 2-D, or 3-D measurement
 */
class MeasurementMagneticField : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MeasurementMagneticField(Aspn23MeasurementMagneticField* c_struct, bool take_ownership = true);

	MeasurementMagneticField(TypeHeader header,
	                         TypeTimestamp time_of_validity,
	                         double x_field_strength,
	                         double y_field_strength,
	                         double z_field_strength,
	                         xt::pytensor<double, 2> covariance,
	                         Aspn23MeasurementMagneticFieldErrorModel error_model,
	                         xt::pytensor<double, 1> error_model_params,
	                         std::vector<TypeIntegrity> integrity);

	~MeasurementMagneticField();

	MeasurementMagneticField(const MeasurementMagneticField& other);
	MeasurementMagneticField& operator=(const MeasurementMagneticField& rhs);

	MeasurementMagneticField(MeasurementMagneticField&& other);
	MeasurementMagneticField& operator=(MeasurementMagneticField&& rhs);

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
	Aspn23MeasurementMagneticField* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MeasurementMagneticField* replacement_struct,
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
	 * Dimension of measurement provided. May be 1, 2, or 3.
	 */
	uint8_t get_num_meas() const;

	/**
	 * Field strength of magnetic field in nanoTesla (nT).
	 */
	double get_x_field_strength() const;

	/**
	 * Field strength of magnetic field in nanoTesla (nT).
	 */
	void set_x_field_strength(double);

	/**
	 * Field strength of magnetic field in nanoTesla (nT).
	 */
	double get_y_field_strength() const;

	/**
	 * Field strength of magnetic field in nanoTesla (nT).
	 */
	void set_y_field_strength(double);

	/**
	 * Field strength of magnetic field in nanoTesla (nT).
	 */
	double get_z_field_strength() const;

	/**
	 * Field strength of magnetic field in nanoTesla (nT).
	 */
	void set_z_field_strength(double);

	/**
	 * Measurement error variance or covariance depending on measurement dimension.
	 * Dimensions of covariance must be num_meas²
	 */
	xt::pytensor<double, 2> get_covariance() const;

	/**
	 * Measurement error variance or covariance depending on measurement dimension.
	 * Dimensions of covariance must be num_meas²
	 */
	void set_covariance(xt::pytensor<double, 2>);

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	Aspn23MeasurementMagneticFieldErrorModel get_error_model() const;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	void set_error_model(Aspn23MeasurementMagneticFieldErrorModel);

	/**
	 * Number of parameters required for the error model chosen.
	 */
	uint16_t get_num_error_model_params() const;

	/**
	 * Error model parameters that characterize the optional error model.
	 */
	xt::pytensor<double, 1> get_error_model_params() const;

	/**
	 * Error model parameters that characterize the optional error model.
	 */
	void set_error_model_params(xt::pytensor<double, 1>);

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
	Aspn23MeasurementMagneticField* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
