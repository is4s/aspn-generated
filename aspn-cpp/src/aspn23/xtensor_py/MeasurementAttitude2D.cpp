
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementAttitude2D.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementAttitude2D::MeasurementAttitude2D(
    TypeHeader header,
    TypeTimestamp time_of_validity,
    Aspn23MeasurementAttitude2DReferenceFrame reference_frame,
    xt::pytensor<double, 1> attitude2d,
    xt::pytensor<double, 2> covariance,
    Aspn23MeasurementAttitude2DErrorModel error_model,
    xt::pytensor<double, 1> error_model_params,
    std::vector<TypeIntegrity> integrity)
    : TypeHeader(header) {
	auto header_prep           = header.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	double attitude2d_prep[2];
	for (size_t ii = 0; ii < 2; ii++) attitude2d_prep[ii] = attitude2d(ii);

	double covariance_prep[2][2];
	for (size_t row = 0; row < 2; row++)
		for (size_t col = 0; col < 2; col++) covariance_prep[row][col] = covariance(row, col);

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_attitude_2d_new(header_prep,
	                                                    time_of_validity_prep,
	                                                    reference_frame,
	                                                    attitude2d_prep,
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

MeasurementAttitude2D::MeasurementAttitude2D(Aspn23MeasurementAttitude2D* c_struct,
                                             bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementAttitude2D::MeasurementAttitude2D(const MeasurementAttitude2D& other)
    : TypeHeader(&other.c_struct->header, false) {
	auto header                = other.get_header();
	auto time_of_validity      = other.get_time_of_validity();
	auto attitude2d            = other.get_attitude2d();
	auto covariance            = other.get_covariance();
	auto integrity             = other.get_integrity();
	auto header_prep           = header.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	double attitude2d_prep[2];
	for (size_t ii = 0; ii < 2; ii++) attitude2d_prep[ii] = attitude2d(ii);

	double covariance_prep[2][2];
	for (size_t row = 0; row < 2; row++)
		for (size_t col = 0; col < 2; col++) covariance_prep[row][col] = covariance(row, col);

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_attitude_2d_new(header_prep,
	                                                    time_of_validity_prep,
	                                                    other.get_reference_frame(),
	                                                    attitude2d_prep,
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

MeasurementAttitude2D& MeasurementAttitude2D::operator=(const MeasurementAttitude2D& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_attitude_2d_free(this->c_struct);
		auto header                = other.get_header();
		auto time_of_validity      = other.get_time_of_validity();
		auto attitude2d            = other.get_attitude2d();
		auto covariance            = other.get_covariance();
		auto integrity             = other.get_integrity();
		auto header_prep           = header.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		double attitude2d_prep[2];
		for (size_t ii = 0; ii < 2; ii++) attitude2d_prep[ii] = attitude2d(ii);

		double covariance_prep[2][2];
		for (size_t row = 0; row < 2; row++)
			for (size_t col = 0; col < 2; col++) covariance_prep[row][col] = covariance(row, col);

		Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
		for (size_t ii = 0; ii < integrity.size(); ii++) {
			auto c_object      = integrity[ii].get_aspn_c();
			integrity_prep[ii] = *c_object;
		}

		this->c_struct = aspn23_measurement_attitude_2d_new(header_prep,
		                                                    time_of_validity_prep,
		                                                    other.get_reference_frame(),
		                                                    attitude2d_prep,
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

MeasurementAttitude2D::MeasurementAttitude2D(MeasurementAttitude2D&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementAttitude2D& MeasurementAttitude2D::operator=(MeasurementAttitude2D&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_attitude_2d_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementAttitude2D::~MeasurementAttitude2D() {
	if (c_struct != nullptr && take_ownership) aspn23_measurement_attitude_2d_free(this->c_struct);
}

Aspn23MessageType MeasurementAttitude2D::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementAttitude2D::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementAttitude2D::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementAttitude2D::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementAttitude2D::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementAttitude2D::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementAttitude2D::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementAttitude2D::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementAttitude2D::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementAttitude2D::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementAttitude2D* MeasurementAttitude2D::get_aspn_c() const { return c_struct; }

void MeasurementAttitude2D::reset_aspn_c(Aspn23MeasurementAttitude2D* replacement_struct,
                                         bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_attitude_2d_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementAttitude2D::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementAttitude2D::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementAttitude2D::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementAttitude2D::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

Aspn23MeasurementAttitude2DReferenceFrame MeasurementAttitude2D::get_reference_frame() const {
	nullptr_check();
	return c_struct->reference_frame;
}

void MeasurementAttitude2D::set_reference_frame(
    Aspn23MeasurementAttitude2DReferenceFrame reference_frame) {
	nullptr_check();
	c_struct->reference_frame = reference_frame;
}

xt::pytensor<double, 1> MeasurementAttitude2D::get_attitude2d() const {
	nullptr_check();

	std::vector<uint64_t> shape = {2};
	return xt::adapt(&c_struct->attitude2d[0], 2, xt::no_ownership(), shape);
}

void MeasurementAttitude2D::set_attitude2d(xt::pytensor<double, 1> attitude2d) {
	nullptr_check();
	memcpy(c_struct->attitude2d, attitude2d.data(), 2 * sizeof(double));
}

xt::pytensor<double, 2> MeasurementAttitude2D::get_covariance() const {
	nullptr_check();

	std::vector<std::size_t> shape = {2, 2};
	return xt::adapt(&c_struct->covariance[0][0], shape);
}

void MeasurementAttitude2D::set_covariance(xt::pytensor<double, 2> covariance) {
	nullptr_check();
	memcpy(c_struct->covariance, covariance.data(), 2 * 2 * sizeof(double));
}

Aspn23MeasurementAttitude2DErrorModel MeasurementAttitude2D::get_error_model() const {
	nullptr_check();
	return c_struct->error_model;
}

void MeasurementAttitude2D::set_error_model(Aspn23MeasurementAttitude2DErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t MeasurementAttitude2D::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::pytensor<double, 1> MeasurementAttitude2D::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void MeasurementAttitude2D::set_error_model_params(xt::pytensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t MeasurementAttitude2D::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementAttitude2D::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementAttitude2D::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementAttitude2D::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("MeasurementAttitude2D is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
