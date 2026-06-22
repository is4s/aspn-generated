
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementTime.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementTime::MeasurementTime(TypeHeader header,
                                 TypeTimestamp time_of_validity,
                                 int32_t time_of_validity_attosec,
                                 xt::pytensor<uint8_t, 1> clock_id,
                                 xt::pytensor<int64_t, 1> elapsed_nsec,
                                 xt::pytensor<int32_t, 1> elapsed_attosec,
                                 uint8_t digits_of_precision,
                                 xt::pytensor<double, 2> covariance,
                                 Aspn23MeasurementTimeErrorModel error_model,
                                 xt::pytensor<double, 1> error_model_params,
                                 std::vector<TypeIntegrity> integrity)
    : TypeHeader(header) {
	auto header_prep                    = header.get_aspn_c();
	auto time_of_validity_prep          = time_of_validity.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_time_new(header_prep,
	                                             time_of_validity_prep,
	                                             time_of_validity_attosec,
	                                             clock_id.size(),
	                                             clock_id.data(),
	                                             elapsed_nsec.data(),
	                                             elapsed_attosec.data(),
	                                             digits_of_precision,
	                                             covariance.data(),
	                                             error_model,
	                                             error_model_params.size(),
	                                             error_model_params.data(),
	                                             integrity.size(),
	                                             integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementTime::MeasurementTime(Aspn23MeasurementTime* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementTime::MeasurementTime(const MeasurementTime& other)
    : TypeHeader(&other.c_struct->header, false) {
	auto header                         = other.get_header();
	auto time_of_validity               = other.get_time_of_validity();
	auto integrity                      = other.get_integrity();
	auto header_prep                    = header.get_aspn_c();
	auto time_of_validity_prep          = time_of_validity.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_time_new(header_prep,
	                                             time_of_validity_prep,
	                                             other.get_time_of_validity_attosec(),
	                                             other.get_clock_id().size(),
	                                             other.get_clock_id().data(),
	                                             other.get_elapsed_nsec().data(),
	                                             other.get_elapsed_attosec().data(),
	                                             other.get_digits_of_precision(),
	                                             other.get_covariance().data(),
	                                             other.get_error_model(),
	                                             other.get_error_model_params().size(),
	                                             other.get_error_model_params().data(),
	                                             other.get_integrity().size(),
	                                             integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementTime& MeasurementTime::operator=(const MeasurementTime& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_time_free(this->c_struct);
		auto header                         = other.get_header();
		auto time_of_validity               = other.get_time_of_validity();
		auto integrity                      = other.get_integrity();
		auto header_prep                    = header.get_aspn_c();
		auto time_of_validity_prep          = time_of_validity.get_aspn_c();
		Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
		for (size_t ii = 0; ii < integrity.size(); ii++) {
			auto c_object      = integrity[ii].get_aspn_c();
			integrity_prep[ii] = *c_object;
		}

		this->c_struct = aspn23_measurement_time_new(header_prep,
		                                             time_of_validity_prep,
		                                             other.get_time_of_validity_attosec(),
		                                             other.get_clock_id().size(),
		                                             other.get_clock_id().data(),
		                                             other.get_elapsed_nsec().data(),
		                                             other.get_elapsed_attosec().data(),
		                                             other.get_digits_of_precision(),
		                                             other.get_covariance().data(),
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

MeasurementTime::MeasurementTime(MeasurementTime&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementTime& MeasurementTime::operator=(MeasurementTime&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_time_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementTime::~MeasurementTime() {
	if (c_struct != nullptr && take_ownership) aspn23_measurement_time_free(this->c_struct);
}

Aspn23MessageType MeasurementTime::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementTime::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementTime::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementTime::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementTime::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementTime::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementTime::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementTime::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementTime::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementTime::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementTime* MeasurementTime::get_aspn_c() const { return c_struct; }

void MeasurementTime::reset_aspn_c(Aspn23MeasurementTime* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_time_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementTime::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementTime::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementTime::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementTime::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

int32_t MeasurementTime::get_time_of_validity_attosec() const {
	nullptr_check();
	return c_struct->time_of_validity_attosec;
}

void MeasurementTime::set_time_of_validity_attosec(int32_t time_of_validity_attosec) {
	nullptr_check();
	c_struct->time_of_validity_attosec = time_of_validity_attosec;
}

uint8_t MeasurementTime::get_num_obs() const {
	nullptr_check();
	return c_struct->num_obs;
}

xt::pytensor<uint8_t, 1> MeasurementTime::get_clock_id() const {
	nullptr_check();
	if (c_struct->clock_id == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_obs};
	return xt::adapt(c_struct->clock_id, c_struct->num_obs, xt::no_ownership(), shape);
}

void MeasurementTime::set_clock_id(xt::pytensor<uint8_t, 1> clock_id) {
	nullptr_check();
	memcpy(c_struct->clock_id, clock_id.data(), c_struct->num_obs * sizeof(uint8_t));
	c_struct->num_obs = clock_id.size();
}

xt::pytensor<int64_t, 1> MeasurementTime::get_elapsed_nsec() const {
	nullptr_check();
	if (c_struct->elapsed_nsec == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_obs};
	return xt::adapt(c_struct->elapsed_nsec, c_struct->num_obs, xt::no_ownership(), shape);
}

void MeasurementTime::set_elapsed_nsec(xt::pytensor<int64_t, 1> elapsed_nsec) {
	nullptr_check();
	memcpy(c_struct->elapsed_nsec, elapsed_nsec.data(), c_struct->num_obs * sizeof(int64_t));
	c_struct->num_obs = elapsed_nsec.size();
}

xt::pytensor<int32_t, 1> MeasurementTime::get_elapsed_attosec() const {
	nullptr_check();
	if (c_struct->elapsed_attosec == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_obs};
	return xt::adapt(c_struct->elapsed_attosec, c_struct->num_obs, xt::no_ownership(), shape);
}

void MeasurementTime::set_elapsed_attosec(xt::pytensor<int32_t, 1> elapsed_attosec) {
	nullptr_check();
	memcpy(c_struct->elapsed_attosec, elapsed_attosec.data(), c_struct->num_obs * sizeof(int32_t));
	c_struct->num_obs = elapsed_attosec.size();
}

uint8_t MeasurementTime::get_digits_of_precision() const {
	nullptr_check();
	return c_struct->digits_of_precision;
}

void MeasurementTime::set_digits_of_precision(uint8_t digits_of_precision) {
	nullptr_check();
	c_struct->digits_of_precision = digits_of_precision;
}

xt::pytensor<double, 2> MeasurementTime::get_covariance() const {
	nullptr_check();
	if (c_struct->covariance == nullptr) return {};
	std::vector<std::size_t> shape = {c_struct->num_obs, c_struct->num_obs};
	return xt::adapt(
	    c_struct->covariance, c_struct->num_obs * c_struct->num_obs, xt::no_ownership(), shape);
}

void MeasurementTime::set_covariance(xt::pytensor<double, 2> covariance) {
	nullptr_check();
	memcpy(c_struct->covariance,
	       covariance.data(),
	       c_struct->num_obs * c_struct->num_obs * sizeof(double));

	c_struct->num_obs = covariance.dimension() == 2 ? covariance.shape()[1] : 0;
}

Aspn23MeasurementTimeErrorModel MeasurementTime::get_error_model() const {
	nullptr_check();
	return c_struct->error_model;
}

void MeasurementTime::set_error_model(Aspn23MeasurementTimeErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t MeasurementTime::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::pytensor<double, 1> MeasurementTime::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void MeasurementTime::set_error_model_params(xt::pytensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t MeasurementTime::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementTime::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementTime::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementTime::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("MeasurementTime is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
