
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MeasurementImu.h>

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
 * Inertial Measurement Unit (IMU) measurements from the device's three axis accelerometers and
 * three axis gyroscopes.
 */
class MeasurementImu : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MeasurementImu(Aspn23MeasurementImu* c_struct, bool take_ownership = true);

	MeasurementImu(TypeHeader header,
	               TypeTimestamp time_of_validity,
	               Aspn23MeasurementImuImuType imu_type,
	               xt::xtensor_fixed<double, xt::xshape<3>> meas_accel,
	               xt::xtensor_fixed<double, xt::xshape<3>> meas_gyro,
	               std::vector<TypeIntegrity> integrity);

	~MeasurementImu();

	MeasurementImu(const MeasurementImu& other);
	MeasurementImu& operator=(const MeasurementImu& rhs);

	MeasurementImu(MeasurementImu&& other);
	MeasurementImu& operator=(MeasurementImu&& rhs);

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
	Aspn23MeasurementImu* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MeasurementImu* replacement_struct, bool take_ownership = true);

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
	 * IMU type
	 */
	Aspn23MeasurementImuImuType get_imu_type() const;

	/**
	 * IMU type
	 */
	void set_imu_type(Aspn23MeasurementImuImuType);

	/**
	 * Accelerometer (specific force) measurements in 3 axes per enumerated definition.
	 */
	xt::xtensor_fixed<double, xt::xshape<3>> get_meas_accel() const;

	/**
	 * Accelerometer (specific force) measurements in 3 axes per enumerated definition.
	 */
	void set_meas_accel(xt::xtensor_fixed<double, xt::xshape<3>>);

	/**
	 * Gyroscope measurements in 3 axes per enumerated definition.
	 */
	xt::xtensor_fixed<double, xt::xshape<3>> get_meas_gyro() const;

	/**
	 * Gyroscope measurements in 3 axes per enumerated definition.
	 */
	void set_meas_gyro(xt::xtensor_fixed<double, xt::xshape<3>>);

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
	Aspn23MeasurementImu* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
