
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementImu.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementImu::MeasurementImu(TypeHeader header,
                               TypeTimestamp time_of_validity,
                               Aspn23MeasurementImuImuType imu_type,
                               xt::xtensor_fixed<double, xt::xshape<3>> meas_accel,
                               xt::xtensor_fixed<double, xt::xshape<3>> meas_gyro,
                               std::vector<TypeIntegrity> integrity)
    : TypeHeader(header) {
	auto header_prep           = header.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	double meas_accel_prep[3];
	for (size_t ii = 0; ii < 3; ii++) meas_accel_prep[ii] = meas_accel(ii);

	double meas_gyro_prep[3];
	for (size_t ii = 0; ii < 3; ii++) meas_gyro_prep[ii] = meas_gyro(ii);

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_imu_new(header_prep,
	                                            time_of_validity_prep,
	                                            imu_type,
	                                            meas_accel_prep,
	                                            meas_gyro_prep,
	                                            integrity.size(),
	                                            integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementImu::MeasurementImu(Aspn23MeasurementImu* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementImu::MeasurementImu(const MeasurementImu& other)
    : TypeHeader(&other.c_struct->header, false) {
	auto header                = other.get_header();
	auto time_of_validity      = other.get_time_of_validity();
	auto meas_accel            = other.get_meas_accel();
	auto meas_gyro             = other.get_meas_gyro();
	auto integrity             = other.get_integrity();
	auto header_prep           = header.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	double meas_accel_prep[3];
	for (size_t ii = 0; ii < 3; ii++) meas_accel_prep[ii] = meas_accel(ii);

	double meas_gyro_prep[3];
	for (size_t ii = 0; ii < 3; ii++) meas_gyro_prep[ii] = meas_gyro(ii);

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_imu_new(header_prep,
	                                            time_of_validity_prep,
	                                            other.get_imu_type(),
	                                            meas_accel_prep,
	                                            meas_gyro_prep,
	                                            other.get_integrity().size(),
	                                            integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementImu& MeasurementImu::operator=(const MeasurementImu& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_imu_free(this->c_struct);
		auto header                = other.get_header();
		auto time_of_validity      = other.get_time_of_validity();
		auto meas_accel            = other.get_meas_accel();
		auto meas_gyro             = other.get_meas_gyro();
		auto integrity             = other.get_integrity();
		auto header_prep           = header.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		double meas_accel_prep[3];
		for (size_t ii = 0; ii < 3; ii++) meas_accel_prep[ii] = meas_accel(ii);

		double meas_gyro_prep[3];
		for (size_t ii = 0; ii < 3; ii++) meas_gyro_prep[ii] = meas_gyro(ii);

		Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
		for (size_t ii = 0; ii < integrity.size(); ii++) {
			auto c_object      = integrity[ii].get_aspn_c();
			integrity_prep[ii] = *c_object;
		}

		this->c_struct = aspn23_measurement_imu_new(header_prep,
		                                            time_of_validity_prep,
		                                            other.get_imu_type(),
		                                            meas_accel_prep,
		                                            meas_gyro_prep,
		                                            other.get_integrity().size(),
		                                            integrity_prep);

		delete[] integrity_prep;

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->header, false);
	}
	return *this;
}

MeasurementImu::MeasurementImu(MeasurementImu&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementImu& MeasurementImu::operator=(MeasurementImu&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_imu_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementImu::~MeasurementImu() {
	if (c_struct != nullptr && take_ownership) aspn23_measurement_imu_free(this->c_struct);
}

Aspn23MessageType MeasurementImu::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementImu::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementImu::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementImu::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementImu::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementImu::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementImu::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementImu::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementImu::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementImu::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementImu* MeasurementImu::get_aspn_c() const { return c_struct; }

void MeasurementImu::reset_aspn_c(Aspn23MeasurementImu* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_imu_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementImu::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementImu::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementImu::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementImu::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

Aspn23MeasurementImuImuType MeasurementImu::get_imu_type() const {
	nullptr_check();
	return c_struct->imu_type;
}

void MeasurementImu::set_imu_type(Aspn23MeasurementImuImuType imu_type) {
	nullptr_check();
	c_struct->imu_type = imu_type;
}

xt::xtensor_fixed<double, xt::xshape<3>> MeasurementImu::get_meas_accel() const {
	nullptr_check();

	std::vector<uint64_t> shape = {3};
	return xt::adapt(&c_struct->meas_accel[0], 3, xt::no_ownership(), shape);
}

void MeasurementImu::set_meas_accel(xt::xtensor_fixed<double, xt::xshape<3>> meas_accel) {
	nullptr_check();
	memcpy(c_struct->meas_accel, meas_accel.data(), 3 * sizeof(double));
}

xt::xtensor_fixed<double, xt::xshape<3>> MeasurementImu::get_meas_gyro() const {
	nullptr_check();

	std::vector<uint64_t> shape = {3};
	return xt::adapt(&c_struct->meas_gyro[0], 3, xt::no_ownership(), shape);
}

void MeasurementImu::set_meas_gyro(xt::xtensor_fixed<double, xt::xshape<3>> meas_gyro) {
	nullptr_check();
	memcpy(c_struct->meas_gyro, meas_gyro.data(), 3 * sizeof(double));
}

uint8_t MeasurementImu::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementImu::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementImu::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementImu::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("MeasurementImu is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
