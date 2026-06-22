
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementDirectionOfMotion3D.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementDirectionOfMotion3D::MeasurementDirectionOfMotion3D(
    TypeHeader header,
    TypeTimestamp time_of_validity,
    Aspn23MeasurementDirectionOfMotion3DReferenceFrame reference_frame,
    xt::pytensor<double, 1> obs,
    xt::pytensor<double, 1> error_vector,
    xt::pytensor<double, 2> covariance,
    Aspn23MeasurementDirectionOfMotion3DErrorModel error_model,
    xt::pytensor<double, 1> error_model_params,
    std::vector<TypeIntegrity> integrity)
    : TypeHeader(header) {
	auto header_prep           = header.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	double obs_prep[3];
	for (size_t ii = 0; ii < 3; ii++) obs_prep[ii] = obs(ii);

	double error_vector_prep[3];
	for (size_t ii = 0; ii < 3; ii++) error_vector_prep[ii] = error_vector(ii);

	double covariance_prep[2][2];
	for (size_t row = 0; row < 2; row++)
		for (size_t col = 0; col < 2; col++) covariance_prep[row][col] = covariance(row, col);

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_direction_of_motion_3d_new(header_prep,
	                                                               time_of_validity_prep,
	                                                               reference_frame,
	                                                               obs_prep,
	                                                               error_vector_prep,
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

MeasurementDirectionOfMotion3D::MeasurementDirectionOfMotion3D(
    Aspn23MeasurementDirectionOfMotion3D* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementDirectionOfMotion3D::MeasurementDirectionOfMotion3D(
    const MeasurementDirectionOfMotion3D& other)
    : TypeHeader(&other.c_struct->header, false) {
	auto header                = other.get_header();
	auto time_of_validity      = other.get_time_of_validity();
	auto obs                   = other.get_obs();
	auto error_vector          = other.get_error_vector();
	auto covariance            = other.get_covariance();
	auto integrity             = other.get_integrity();
	auto header_prep           = header.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	double obs_prep[3];
	for (size_t ii = 0; ii < 3; ii++) obs_prep[ii] = obs(ii);

	double error_vector_prep[3];
	for (size_t ii = 0; ii < 3; ii++) error_vector_prep[ii] = error_vector(ii);

	double covariance_prep[2][2];
	for (size_t row = 0; row < 2; row++)
		for (size_t col = 0; col < 2; col++) covariance_prep[row][col] = covariance(row, col);

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct =
	    aspn23_measurement_direction_of_motion_3d_new(header_prep,
	                                                  time_of_validity_prep,
	                                                  other.get_reference_frame(),
	                                                  obs_prep,
	                                                  error_vector_prep,
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

MeasurementDirectionOfMotion3D& MeasurementDirectionOfMotion3D::operator=(
    const MeasurementDirectionOfMotion3D& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_direction_of_motion_3d_free(this->c_struct);
		auto header                = other.get_header();
		auto time_of_validity      = other.get_time_of_validity();
		auto obs                   = other.get_obs();
		auto error_vector          = other.get_error_vector();
		auto covariance            = other.get_covariance();
		auto integrity             = other.get_integrity();
		auto header_prep           = header.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		double obs_prep[3];
		for (size_t ii = 0; ii < 3; ii++) obs_prep[ii] = obs(ii);

		double error_vector_prep[3];
		for (size_t ii = 0; ii < 3; ii++) error_vector_prep[ii] = error_vector(ii);

		double covariance_prep[2][2];
		for (size_t row = 0; row < 2; row++)
			for (size_t col = 0; col < 2; col++) covariance_prep[row][col] = covariance(row, col);

		Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
		for (size_t ii = 0; ii < integrity.size(); ii++) {
			auto c_object      = integrity[ii].get_aspn_c();
			integrity_prep[ii] = *c_object;
		}

		this->c_struct =
		    aspn23_measurement_direction_of_motion_3d_new(header_prep,
		                                                  time_of_validity_prep,
		                                                  other.get_reference_frame(),
		                                                  obs_prep,
		                                                  error_vector_prep,
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

MeasurementDirectionOfMotion3D::MeasurementDirectionOfMotion3D(
    MeasurementDirectionOfMotion3D&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementDirectionOfMotion3D& MeasurementDirectionOfMotion3D::operator=(
    MeasurementDirectionOfMotion3D&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_direction_of_motion_3d_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementDirectionOfMotion3D::~MeasurementDirectionOfMotion3D() {
	if (c_struct != nullptr && take_ownership)
		aspn23_measurement_direction_of_motion_3d_free(this->c_struct);
}

Aspn23MessageType MeasurementDirectionOfMotion3D::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementDirectionOfMotion3D::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementDirectionOfMotion3D::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementDirectionOfMotion3D::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementDirectionOfMotion3D::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementDirectionOfMotion3D::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementDirectionOfMotion3D::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementDirectionOfMotion3D::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementDirectionOfMotion3D::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementDirectionOfMotion3D::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementDirectionOfMotion3D* MeasurementDirectionOfMotion3D::get_aspn_c() const {
	return c_struct;
}

void MeasurementDirectionOfMotion3D::reset_aspn_c(
    Aspn23MeasurementDirectionOfMotion3D* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_direction_of_motion_3d_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementDirectionOfMotion3D::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementDirectionOfMotion3D::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementDirectionOfMotion3D::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementDirectionOfMotion3D::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

Aspn23MeasurementDirectionOfMotion3DReferenceFrame
MeasurementDirectionOfMotion3D::get_reference_frame() const {
	nullptr_check();
	return c_struct->reference_frame;
}

void MeasurementDirectionOfMotion3D::set_reference_frame(
    Aspn23MeasurementDirectionOfMotion3DReferenceFrame reference_frame) {
	nullptr_check();
	c_struct->reference_frame = reference_frame;
}

xt::pytensor<double, 1> MeasurementDirectionOfMotion3D::get_obs() const {
	nullptr_check();

	std::vector<uint64_t> shape = {3};
	return xt::adapt(&c_struct->obs[0], 3, xt::no_ownership(), shape);
}

void MeasurementDirectionOfMotion3D::set_obs(xt::pytensor<double, 1> obs) {
	nullptr_check();
	memcpy(c_struct->obs, obs.data(), 3 * sizeof(double));
}

xt::pytensor<double, 1> MeasurementDirectionOfMotion3D::get_error_vector() const {
	nullptr_check();

	std::vector<uint64_t> shape = {3};
	return xt::adapt(&c_struct->error_vector[0], 3, xt::no_ownership(), shape);
}

void MeasurementDirectionOfMotion3D::set_error_vector(xt::pytensor<double, 1> error_vector) {
	nullptr_check();
	memcpy(c_struct->error_vector, error_vector.data(), 3 * sizeof(double));
}

xt::pytensor<double, 2> MeasurementDirectionOfMotion3D::get_covariance() const {
	nullptr_check();

	std::vector<std::size_t> shape = {2, 2};
	return xt::adapt(&c_struct->covariance[0][0], shape);
}

void MeasurementDirectionOfMotion3D::set_covariance(xt::pytensor<double, 2> covariance) {
	nullptr_check();
	memcpy(c_struct->covariance, covariance.data(), 2 * 2 * sizeof(double));
}

Aspn23MeasurementDirectionOfMotion3DErrorModel MeasurementDirectionOfMotion3D::get_error_model()
    const {
	nullptr_check();
	return c_struct->error_model;
}

void MeasurementDirectionOfMotion3D::set_error_model(
    Aspn23MeasurementDirectionOfMotion3DErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t MeasurementDirectionOfMotion3D::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::pytensor<double, 1> MeasurementDirectionOfMotion3D::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void MeasurementDirectionOfMotion3D::set_error_model_params(
    xt::pytensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t MeasurementDirectionOfMotion3D::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementDirectionOfMotion3D::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementDirectionOfMotion3D::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementDirectionOfMotion3D::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MeasurementDirectionOfMotion3D is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
