
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementBarometer.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementBarometer::MeasurementBarometer(TypeHeader header,
                                           TypeTimestamp time_of_validity,
                                           double pressure,
                                           double variance,
                                           Aspn23MeasurementBarometerErrorModel error_model,
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

	this->c_struct = aspn23_measurement_barometer_new(header_prep,
	                                                  time_of_validity_prep,
	                                                  pressure,
	                                                  variance,
	                                                  error_model,
	                                                  error_model_params.size(),
	                                                  error_model_params.data(),
	                                                  integrity.size(),
	                                                  integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementBarometer::MeasurementBarometer(Aspn23MeasurementBarometer* c_struct,
                                           bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementBarometer::MeasurementBarometer(const MeasurementBarometer& other)
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

	this->c_struct = aspn23_measurement_barometer_new(header_prep,
	                                                  time_of_validity_prep,
	                                                  other.get_pressure(),
	                                                  other.get_variance(),
	                                                  other.get_error_model(),
	                                                  other.get_error_model_params().size(),
	                                                  other.get_error_model_params().data(),
	                                                  other.get_integrity().size(),
	                                                  integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementBarometer& MeasurementBarometer::operator=(const MeasurementBarometer& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_barometer_free(this->c_struct);
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

		this->c_struct = aspn23_measurement_barometer_new(header_prep,
		                                                  time_of_validity_prep,
		                                                  other.get_pressure(),
		                                                  other.get_variance(),
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

MeasurementBarometer::MeasurementBarometer(MeasurementBarometer&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementBarometer& MeasurementBarometer::operator=(MeasurementBarometer&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_barometer_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementBarometer::~MeasurementBarometer() {
	if (c_struct != nullptr && take_ownership) aspn23_measurement_barometer_free(this->c_struct);
}

Aspn23MessageType MeasurementBarometer::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementBarometer::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementBarometer::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementBarometer::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementBarometer::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementBarometer::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementBarometer::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementBarometer::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementBarometer::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementBarometer::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementBarometer* MeasurementBarometer::get_aspn_c() const { return c_struct; }

void MeasurementBarometer::reset_aspn_c(Aspn23MeasurementBarometer* replacement_struct,
                                        bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_barometer_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementBarometer::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementBarometer::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementBarometer::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementBarometer::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

double MeasurementBarometer::get_pressure() const {
	nullptr_check();
	return c_struct->pressure;
}

void MeasurementBarometer::set_pressure(double pressure) {
	nullptr_check();
	c_struct->pressure = pressure;
}

double MeasurementBarometer::get_variance() const {
	nullptr_check();
	return c_struct->variance;
}

void MeasurementBarometer::set_variance(double variance) {
	nullptr_check();
	c_struct->variance = variance;
}

Aspn23MeasurementBarometerErrorModel MeasurementBarometer::get_error_model() const {
	nullptr_check();
	return c_struct->error_model;
}

void MeasurementBarometer::set_error_model(Aspn23MeasurementBarometerErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t MeasurementBarometer::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::pytensor<double, 1> MeasurementBarometer::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void MeasurementBarometer::set_error_model_params(xt::pytensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t MeasurementBarometer::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementBarometer::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementBarometer::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementBarometer::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("MeasurementBarometer is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
