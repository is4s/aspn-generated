
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementPositionVelocityAttitude.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementPositionVelocityAttitude::MeasurementPositionVelocityAttitude(
    TypeHeader header,
    TypeTimestamp time_of_validity,
    Aspn23MeasurementPositionVelocityAttitudeReferenceFrame reference_frame,
    double p1,
    double p2,
    double p3,
    double v1,
    double v2,
    double v3,
    xt::xtensor_fixed<double, xt::xshape<4>> quaternion,
    xt::xtensor<double, 2> covariance,
    Aspn23MeasurementPositionVelocityAttitudeErrorModel error_model,
    xt::xtensor<double, 1> error_model_params,
    std::vector<TypeIntegrity> integrity)
    : TypeHeader(header) {
	auto header_prep           = header.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	double quaternion_prep[4];
	for (size_t ii = 0; ii < 4; ii++) quaternion_prep[ii] = quaternion(ii);

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_position_velocity_attitude_new(
	    header_prep,
	    time_of_validity_prep,
	    reference_frame,
	    p1,
	    p2,
	    p3,
	    v1,
	    v2,
	    v3,
	    quaternion_prep,
	    covariance.dimension() == 2 ? covariance.shape()[1] : 0,
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

MeasurementPositionVelocityAttitude::MeasurementPositionVelocityAttitude(
    Aspn23MeasurementPositionVelocityAttitude* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementPositionVelocityAttitude::MeasurementPositionVelocityAttitude(
    const MeasurementPositionVelocityAttitude& other)
    : TypeHeader(&other.c_struct->header, false) {
	auto header                = other.get_header();
	auto time_of_validity      = other.get_time_of_validity();
	auto quaternion            = other.get_quaternion();
	auto integrity             = other.get_integrity();
	auto header_prep           = header.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	double quaternion_prep[4];
	for (size_t ii = 0; ii < 4; ii++) quaternion_prep[ii] = quaternion(ii);

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_position_velocity_attitude_new(
	    header_prep,
	    time_of_validity_prep,
	    other.get_reference_frame(),
	    other.get_p1(),
	    other.get_p2(),
	    other.get_p3(),
	    other.get_v1(),
	    other.get_v2(),
	    other.get_v3(),
	    quaternion_prep,
	    other.get_covariance().dimension() == 2 ? other.get_covariance().shape()[1] : 0,
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

MeasurementPositionVelocityAttitude& MeasurementPositionVelocityAttitude::operator=(
    const MeasurementPositionVelocityAttitude& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_position_velocity_attitude_free(this->c_struct);
		auto header                = other.get_header();
		auto time_of_validity      = other.get_time_of_validity();
		auto quaternion            = other.get_quaternion();
		auto integrity             = other.get_integrity();
		auto header_prep           = header.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		double quaternion_prep[4];
		for (size_t ii = 0; ii < 4; ii++) quaternion_prep[ii] = quaternion(ii);

		Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
		for (size_t ii = 0; ii < integrity.size(); ii++) {
			auto c_object      = integrity[ii].get_aspn_c();
			integrity_prep[ii] = *c_object;
		}

		this->c_struct = aspn23_measurement_position_velocity_attitude_new(
		    header_prep,
		    time_of_validity_prep,
		    other.get_reference_frame(),
		    other.get_p1(),
		    other.get_p2(),
		    other.get_p3(),
		    other.get_v1(),
		    other.get_v2(),
		    other.get_v3(),
		    quaternion_prep,
		    other.get_covariance().dimension() == 2 ? other.get_covariance().shape()[1] : 0,
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

MeasurementPositionVelocityAttitude::MeasurementPositionVelocityAttitude(
    MeasurementPositionVelocityAttitude&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementPositionVelocityAttitude& MeasurementPositionVelocityAttitude::operator=(
    MeasurementPositionVelocityAttitude&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_position_velocity_attitude_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementPositionVelocityAttitude::~MeasurementPositionVelocityAttitude() {
	if (c_struct != nullptr && take_ownership)
		aspn23_measurement_position_velocity_attitude_free(this->c_struct);
}

Aspn23MessageType MeasurementPositionVelocityAttitude::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementPositionVelocityAttitude::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementPositionVelocityAttitude::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementPositionVelocityAttitude::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementPositionVelocityAttitude::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementPositionVelocityAttitude::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementPositionVelocityAttitude::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementPositionVelocityAttitude::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementPositionVelocityAttitude::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementPositionVelocityAttitude::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementPositionVelocityAttitude* MeasurementPositionVelocityAttitude::get_aspn_c() const {
	return c_struct;
}

void MeasurementPositionVelocityAttitude::reset_aspn_c(
    Aspn23MeasurementPositionVelocityAttitude* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_position_velocity_attitude_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementPositionVelocityAttitude::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementPositionVelocityAttitude::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementPositionVelocityAttitude::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementPositionVelocityAttitude::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

Aspn23MeasurementPositionVelocityAttitudeReferenceFrame
MeasurementPositionVelocityAttitude::get_reference_frame() const {
	nullptr_check();
	return c_struct->reference_frame;
}

void MeasurementPositionVelocityAttitude::set_reference_frame(
    Aspn23MeasurementPositionVelocityAttitudeReferenceFrame reference_frame) {
	nullptr_check();
	c_struct->reference_frame = reference_frame;
}

double MeasurementPositionVelocityAttitude::get_p1() const {
	nullptr_check();
	return c_struct->p1;
}

void MeasurementPositionVelocityAttitude::set_p1(double p1) {
	nullptr_check();
	c_struct->p1 = p1;
}

double MeasurementPositionVelocityAttitude::get_p2() const {
	nullptr_check();
	return c_struct->p2;
}

void MeasurementPositionVelocityAttitude::set_p2(double p2) {
	nullptr_check();
	c_struct->p2 = p2;
}

double MeasurementPositionVelocityAttitude::get_p3() const {
	nullptr_check();
	return c_struct->p3;
}

void MeasurementPositionVelocityAttitude::set_p3(double p3) {
	nullptr_check();
	c_struct->p3 = p3;
}

double MeasurementPositionVelocityAttitude::get_v1() const {
	nullptr_check();
	return c_struct->v1;
}

void MeasurementPositionVelocityAttitude::set_v1(double v1) {
	nullptr_check();
	c_struct->v1 = v1;
}

double MeasurementPositionVelocityAttitude::get_v2() const {
	nullptr_check();
	return c_struct->v2;
}

void MeasurementPositionVelocityAttitude::set_v2(double v2) {
	nullptr_check();
	c_struct->v2 = v2;
}

double MeasurementPositionVelocityAttitude::get_v3() const {
	nullptr_check();
	return c_struct->v3;
}

void MeasurementPositionVelocityAttitude::set_v3(double v3) {
	nullptr_check();
	c_struct->v3 = v3;
}

xt::xtensor_fixed<double, xt::xshape<4>> MeasurementPositionVelocityAttitude::get_quaternion()
    const {
	nullptr_check();

	std::vector<uint64_t> shape = {4};
	return xt::adapt(&c_struct->quaternion[0], 4, xt::no_ownership(), shape);
}

void MeasurementPositionVelocityAttitude::set_quaternion(
    xt::xtensor_fixed<double, xt::xshape<4>> quaternion) {
	nullptr_check();
	memcpy(c_struct->quaternion, quaternion.data(), 4 * sizeof(double));
}

uint8_t MeasurementPositionVelocityAttitude::get_num_meas() const {
	nullptr_check();
	return c_struct->num_meas;
}

xt::xtensor<double, 2> MeasurementPositionVelocityAttitude::get_covariance() const {
	nullptr_check();
	if (c_struct->covariance == nullptr) return {};
	std::vector<std::size_t> shape = {c_struct->num_meas, c_struct->num_meas};
	return xt::adapt(
	    c_struct->covariance, c_struct->num_meas * c_struct->num_meas, xt::no_ownership(), shape);
}

void MeasurementPositionVelocityAttitude::set_covariance(xt::xtensor<double, 2> covariance) {
	nullptr_check();
	memcpy(c_struct->covariance,
	       covariance.data(),
	       c_struct->num_meas * c_struct->num_meas * sizeof(double));

	c_struct->num_meas = covariance.dimension() == 2 ? covariance.shape()[1] : 0;
}

Aspn23MeasurementPositionVelocityAttitudeErrorModel
MeasurementPositionVelocityAttitude::get_error_model() const {
	nullptr_check();
	return c_struct->error_model;
}

void MeasurementPositionVelocityAttitude::set_error_model(
    Aspn23MeasurementPositionVelocityAttitudeErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t MeasurementPositionVelocityAttitude::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::xtensor<double, 1> MeasurementPositionVelocityAttitude::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void MeasurementPositionVelocityAttitude::set_error_model_params(
    xt::xtensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t MeasurementPositionVelocityAttitude::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementPositionVelocityAttitude::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementPositionVelocityAttitude::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementPositionVelocityAttitude::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MeasurementPositionVelocityAttitude is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
