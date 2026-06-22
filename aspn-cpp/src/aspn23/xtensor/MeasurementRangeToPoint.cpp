
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementRangeToPoint.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementRangeToPoint::MeasurementRangeToPoint(
    TypeHeader header,
    TypeTimestamp time_of_validity,
    TypeRemotePoint remote_point,
    double obs,
    double variance,
    Aspn23MeasurementRangeToPointErrorModel error_model,
    xt::xtensor<double, 1> error_model_params,
    std::vector<TypeIntegrity> integrity)
    : TypeHeader(header) {
	auto header_prep                    = header.get_aspn_c();
	auto time_of_validity_prep          = time_of_validity.get_aspn_c();
	auto remote_point_prep              = remote_point.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_range_to_point_new(header_prep,
	                                                       time_of_validity_prep,
	                                                       remote_point_prep,
	                                                       obs,
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

MeasurementRangeToPoint::MeasurementRangeToPoint(Aspn23MeasurementRangeToPoint* c_struct,
                                                 bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementRangeToPoint::MeasurementRangeToPoint(const MeasurementRangeToPoint& other)
    : TypeHeader(&other.c_struct->header, false) {
	auto header                         = other.get_header();
	auto time_of_validity               = other.get_time_of_validity();
	auto remote_point                   = other.get_remote_point();
	auto integrity                      = other.get_integrity();
	auto header_prep                    = header.get_aspn_c();
	auto time_of_validity_prep          = time_of_validity.get_aspn_c();
	auto remote_point_prep              = remote_point.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_range_to_point_new(header_prep,
	                                                       time_of_validity_prep,
	                                                       remote_point_prep,
	                                                       other.get_obs(),
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

MeasurementRangeToPoint& MeasurementRangeToPoint::operator=(const MeasurementRangeToPoint& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_range_to_point_free(this->c_struct);
		auto header                         = other.get_header();
		auto time_of_validity               = other.get_time_of_validity();
		auto remote_point                   = other.get_remote_point();
		auto integrity                      = other.get_integrity();
		auto header_prep                    = header.get_aspn_c();
		auto time_of_validity_prep          = time_of_validity.get_aspn_c();
		auto remote_point_prep              = remote_point.get_aspn_c();
		Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
		for (size_t ii = 0; ii < integrity.size(); ii++) {
			auto c_object      = integrity[ii].get_aspn_c();
			integrity_prep[ii] = *c_object;
		}

		this->c_struct =
		    aspn23_measurement_range_to_point_new(header_prep,
		                                          time_of_validity_prep,
		                                          remote_point_prep,
		                                          other.get_obs(),
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

MeasurementRangeToPoint::MeasurementRangeToPoint(MeasurementRangeToPoint&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementRangeToPoint& MeasurementRangeToPoint::operator=(MeasurementRangeToPoint&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_range_to_point_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementRangeToPoint::~MeasurementRangeToPoint() {
	if (c_struct != nullptr && take_ownership)
		aspn23_measurement_range_to_point_free(this->c_struct);
}

Aspn23MessageType MeasurementRangeToPoint::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementRangeToPoint::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementRangeToPoint::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementRangeToPoint::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementRangeToPoint::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementRangeToPoint::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementRangeToPoint::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementRangeToPoint::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementRangeToPoint::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementRangeToPoint::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementRangeToPoint* MeasurementRangeToPoint::get_aspn_c() const { return c_struct; }

void MeasurementRangeToPoint::reset_aspn_c(Aspn23MeasurementRangeToPoint* replacement_struct,
                                           bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_range_to_point_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementRangeToPoint::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementRangeToPoint::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementRangeToPoint::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementRangeToPoint::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

TypeRemotePoint MeasurementRangeToPoint::get_remote_point() const {
	nullptr_check();
	return aspn23_type_remote_point_copy(&c_struct->remote_point);
}

void MeasurementRangeToPoint::set_remote_point(TypeRemotePoint remote_point) {
	nullptr_check();
	auto c_object          = std::move(remote_point).get_aspn_c();
	c_struct->remote_point = *c_object;
}

double MeasurementRangeToPoint::get_obs() const {
	nullptr_check();
	return c_struct->obs;
}

void MeasurementRangeToPoint::set_obs(double obs) {
	nullptr_check();
	c_struct->obs = obs;
}

double MeasurementRangeToPoint::get_variance() const {
	nullptr_check();
	return c_struct->variance;
}

void MeasurementRangeToPoint::set_variance(double variance) {
	nullptr_check();
	c_struct->variance = variance;
}

Aspn23MeasurementRangeToPointErrorModel MeasurementRangeToPoint::get_error_model() const {
	nullptr_check();
	return c_struct->error_model;
}

void MeasurementRangeToPoint::set_error_model(Aspn23MeasurementRangeToPointErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t MeasurementRangeToPoint::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::xtensor<double, 1> MeasurementRangeToPoint::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void MeasurementRangeToPoint::set_error_model_params(xt::xtensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t MeasurementRangeToPoint::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementRangeToPoint::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementRangeToPoint::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementRangeToPoint::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MeasurementRangeToPoint is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
