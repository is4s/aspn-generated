
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MetadataImu.h>

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
 * Metadata for inertial measurement unit.
 */
class MetadataImu : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MetadataImu(Aspn23MetadataImu* c_struct, bool take_ownership = true);

	MetadataImu(TypeMetadataheader info,
	            TypeTimestamp time_of_validity,
	            TypeMounting mounting,
	            Aspn23MetadataImuErrorModel error_model,
	            xt::xtensor<double, 1> error_model_params);

	~MetadataImu();

	MetadataImu(const MetadataImu& other);
	MetadataImu& operator=(const MetadataImu& rhs);

	MetadataImu(MetadataImu&& other);
	MetadataImu& operator=(MetadataImu&& rhs);

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
	Aspn23MetadataImu* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MetadataImu* replacement_struct, bool take_ownership = true);

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
	 * Allows the user to select an appropriate error model. Parameters are defined here. The number
	 * of parameters and the values for those parameters are included in subsequent fields.
	 */
	Aspn23MetadataImuErrorModel get_error_model() const;

	/**
	 * Allows the user to select an appropriate error model. Parameters are defined here. The number
	 * of parameters and the values for those parameters are included in subsequent fields.
	 */
	void set_error_model(Aspn23MetadataImuErrorModel);

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

private:
	Aspn23MetadataImu* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
