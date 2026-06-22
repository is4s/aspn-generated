
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementAngularVelocity.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementAngularVelocity::MeasurementAngularVelocity(
    TypeHeader header,
    TypeTimestamp time_of_validity,
    Aspn23MeasurementAngularVelocityReferenceFrame reference_frame,
    Aspn23MeasurementAngularVelocityImuType imu_type,
    xt::xtensor_fixed<double, xt::xshape<3>> meas,
    xt::xtensor_fixed<double, xt::xshape<3, 3>> covariance,
    Aspn23MeasurementAngularVelocityErrorModel error_model,
    xt::xtensor<double, 1> error_model_params,
    std::vector<TypeIntegrity> integrity)
    : TypeHeader(header) {
	auto header_prep           = header.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	double meas_prep[3];
	for (size_t ii = 0; ii < 3; ii++) meas_prep[ii] = meas(ii);

	double covariance_prep[3][3];
	for (size_t row = 0; row < 3; row++)
		for (size_t col = 0; col < 3; col++) covariance_prep[row][col] = covariance(row, col);

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_angular_velocity_new(header_prep,
	                                                         time_of_validity_prep,
	                                                         reference_frame,
	                                                         imu_type,
	                                                         meas_prep,
	                                                         covariance_prep,
	                                                         error_model,
	                                                         error_model_params.size(),
	                                                         error_model_params.data(),
	                                                         integrity.size(),
	                                                         integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementAngularVelocity::MeasurementAngularVelocity(Aspn23MeasurementAngularVelocity* c_struct,
                                                       bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementAngularVelocity::MeasurementAngularVelocity(const MeasurementAngularVelocity& other)
    : TypeHeader(&other.c_struct->header, false) {
	auto header                = other.get_header();
	auto time_of_validity      = other.get_time_of_validity();
	auto meas                  = other.get_meas();
	auto covariance            = other.get_covariance();
	auto integrity             = other.get_integrity();
	auto header_prep           = header.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	double meas_prep[3];
	for (size_t ii = 0; ii < 3; ii++) meas_prep[ii] = meas(ii);

	double covariance_prep[3][3];
	for (size_t row = 0; row < 3; row++)
		for (size_t col = 0; col < 3; col++) covariance_prep[row][col] = covariance(row, col);

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_angular_velocity_new(header_prep,
	                                                         time_of_validity_prep,
	                                                         other.get_reference_frame(),
	                                                         other.get_imu_type(),
	                                                         meas_prep,
	                                                         covariance_prep,
	                                                         other.get_error_model(),
	                                                         other.get_error_model_params().size(),
	                                                         other.get_error_model_params().data(),
	                                                         other.get_integrity().size(),
	                                                         integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementAngularVelocity& MeasurementAngularVelocity::operator=(
    const MeasurementAngularVelocity& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_angular_velocity_free(this->c_struct);
		auto header                = other.get_header();
		auto time_of_validity      = other.get_time_of_validity();
		auto meas                  = other.get_meas();
		auto covariance            = other.get_covariance();
		auto integrity             = other.get_integrity();
		auto header_prep           = header.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		double meas_prep[3];
		for (size_t ii = 0; ii < 3; ii++) meas_prep[ii] = meas(ii);

		double covariance_prep[3][3];
		for (size_t row = 0; row < 3; row++)
			for (size_t col = 0; col < 3; col++) covariance_prep[row][col] = covariance(row, col);

		Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
		for (size_t ii = 0; ii < integrity.size(); ii++) {
			auto c_object      = integrity[ii].get_aspn_c();
			integrity_prep[ii] = *c_object;
		}

		this->c_struct =
		    aspn23_measurement_angular_velocity_new(header_prep,
		                                            time_of_validity_prep,
		                                            other.get_reference_frame(),
		                                            other.get_imu_type(),
		                                            meas_prep,
		                                            covariance_prep,
		                                            other.get_error_model(),
		                                            other.get_error_model_params().size(),
		                                            other.get_error_model_params().data(),
		                                            other.get_integrity().size(),
		                                            integrity_prep);

		delete[] integrity_prep;

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->header, false);
	}
	return *this;
}

MeasurementAngularVelocity::MeasurementAngularVelocity(MeasurementAngularVelocity&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementAngularVelocity& MeasurementAngularVelocity::operator=(
    MeasurementAngularVelocity&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_angular_velocity_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementAngularVelocity::~MeasurementAngularVelocity() {
	if (c_struct != nullptr && take_ownership)
		aspn23_measurement_angular_velocity_free(this->c_struct);
}

Aspn23MessageType MeasurementAngularVelocity::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementAngularVelocity::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementAngularVelocity::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementAngularVelocity::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementAngularVelocity::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementAngularVelocity::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementAngularVelocity::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementAngularVelocity::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementAngularVelocity::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementAngularVelocity::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementAngularVelocity* MeasurementAngularVelocity::get_aspn_c() const {
	return c_struct;
}

void MeasurementAngularVelocity::reset_aspn_c(Aspn23MeasurementAngularVelocity* replacement_struct,
                                              bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_angular_velocity_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementAngularVelocity::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementAngularVelocity::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementAngularVelocity::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementAngularVelocity::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

Aspn23MeasurementAngularVelocityReferenceFrame MeasurementAngularVelocity::get_reference_frame()
    const {
	nullptr_check();
	return c_struct->reference_frame;
}

void MeasurementAngularVelocity::set_reference_frame(
    Aspn23MeasurementAngularVelocityReferenceFrame reference_frame) {
	nullptr_check();
	c_struct->reference_frame = reference_frame;
}

Aspn23MeasurementAngularVelocityImuType MeasurementAngularVelocity::get_imu_type() const {
	nullptr_check();
	return c_struct->imu_type;
}

void MeasurementAngularVelocity::set_imu_type(Aspn23MeasurementAngularVelocityImuType imu_type) {
	nullptr_check();
	c_struct->imu_type = imu_type;
}

xt::xtensor_fixed<double, xt::xshape<3>> MeasurementAngularVelocity::get_meas() const {
	nullptr_check();

	std::vector<uint64_t> shape = {3};
	return xt::adapt(&c_struct->meas[0], 3, xt::no_ownership(), shape);
}

void MeasurementAngularVelocity::set_meas(xt::xtensor_fixed<double, xt::xshape<3>> meas) {
	nullptr_check();
	memcpy(c_struct->meas, meas.data(), 3 * sizeof(double));
}

xt::xtensor_fixed<double, xt::xshape<3, 3>> MeasurementAngularVelocity::get_covariance() const {
	nullptr_check();

	std::vector<std::size_t> shape = {3, 3};
	return xt::adapt(&c_struct->covariance[0][0], shape);
}

void MeasurementAngularVelocity::set_covariance(
    xt::xtensor_fixed<double, xt::xshape<3, 3>> covariance) {
	nullptr_check();
	memcpy(c_struct->covariance, covariance.data(), 3 * 3 * sizeof(double));
}

Aspn23MeasurementAngularVelocityErrorModel MeasurementAngularVelocity::get_error_model() const {
	nullptr_check();
	return c_struct->error_model;
}

void MeasurementAngularVelocity::set_error_model(
    Aspn23MeasurementAngularVelocityErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t MeasurementAngularVelocity::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::xtensor<double, 1> MeasurementAngularVelocity::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void MeasurementAngularVelocity::set_error_model_params(xt::xtensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t MeasurementAngularVelocity::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementAngularVelocity::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementAngularVelocity::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementAngularVelocity::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MeasurementAngularVelocity is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
