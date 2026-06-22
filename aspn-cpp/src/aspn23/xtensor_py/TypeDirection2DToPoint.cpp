
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeDirection2DToPoint.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

TypeDirection2DToPoint::TypeDirection2DToPoint(TypeRemotePoint remote_point,
                                               Aspn23TypeDirection2DToPointReference reference,
                                               double obs,
                                               double variance,
                                               bool has_observation_characteristics,
                                               TypeImageFeature observation_characteristics,
                                               Aspn23TypeDirection2DToPointErrorModel error_model,
                                               xt::pytensor<double, 1> error_model_params,
                                               std::vector<TypeIntegrity> integrity) {
	auto remote_point_prep                = remote_point.get_aspn_c();
	auto observation_characteristics_prep = observation_characteristics.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep   = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_type_direction_2d_to_point_new(remote_point_prep,
	                                                       reference,
	                                                       obs,
	                                                       variance,
	                                                       has_observation_characteristics,
	                                                       observation_characteristics_prep,
	                                                       error_model,
	                                                       error_model_params.size(),
	                                                       error_model_params.data(),
	                                                       integrity.size(),
	                                                       integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;
}

TypeDirection2DToPoint::TypeDirection2DToPoint(Aspn23TypeDirection2DToPoint* c_struct,
                                               bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeDirection2DToPoint::TypeDirection2DToPoint(const TypeDirection2DToPoint& other) {
	auto remote_point                     = other.get_remote_point();
	auto observation_characteristics      = other.get_observation_characteristics();
	auto integrity                        = other.get_integrity();
	auto remote_point_prep                = remote_point.get_aspn_c();
	auto observation_characteristics_prep = observation_characteristics.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep   = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct =
	    aspn23_type_direction_2d_to_point_new(remote_point_prep,
	                                          other.get_reference(),
	                                          other.get_obs(),
	                                          other.get_variance(),
	                                          other.get_has_observation_characteristics(),
	                                          observation_characteristics_prep,
	                                          other.get_error_model(),
	                                          other.get_error_model_params().size(),
	                                          other.get_error_model_params().data(),
	                                          other.get_integrity().size(),
	                                          integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;
}

TypeDirection2DToPoint& TypeDirection2DToPoint::operator=(const TypeDirection2DToPoint& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_direction_2d_to_point_free(this->c_struct);
		auto remote_point                     = other.get_remote_point();
		auto observation_characteristics      = other.get_observation_characteristics();
		auto integrity                        = other.get_integrity();
		auto remote_point_prep                = remote_point.get_aspn_c();
		auto observation_characteristics_prep = observation_characteristics.get_aspn_c();
		Aspn23TypeIntegrity* integrity_prep   = new Aspn23TypeIntegrity[integrity.size()];
		for (size_t ii = 0; ii < integrity.size(); ii++) {
			auto c_object      = integrity[ii].get_aspn_c();
			integrity_prep[ii] = *c_object;
		}

		this->c_struct =
		    aspn23_type_direction_2d_to_point_new(remote_point_prep,
		                                          other.get_reference(),
		                                          other.get_obs(),
		                                          other.get_variance(),
		                                          other.get_has_observation_characteristics(),
		                                          observation_characteristics_prep,
		                                          other.get_error_model(),
		                                          other.get_error_model_params().size(),
		                                          other.get_error_model_params().data(),
		                                          other.get_integrity().size(),
		                                          integrity_prep);

		delete[] integrity_prep;

		this->take_ownership = true;
	}
	return *this;
}

TypeDirection2DToPoint::TypeDirection2DToPoint(TypeDirection2DToPoint&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeDirection2DToPoint& TypeDirection2DToPoint::operator=(TypeDirection2DToPoint&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_direction_2d_to_point_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeDirection2DToPoint::~TypeDirection2DToPoint() {
	if (c_struct != nullptr && take_ownership)
		aspn23_type_direction_2d_to_point_free(this->c_struct);
}

Aspn23TypeDirection2DToPoint* TypeDirection2DToPoint::get_aspn_c() const { return c_struct; }

void TypeDirection2DToPoint::reset_aspn_c(Aspn23TypeDirection2DToPoint* replacement_struct,
                                          bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_type_direction_2d_to_point_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeRemotePoint TypeDirection2DToPoint::get_remote_point() const {
	nullptr_check();
	return aspn23_type_remote_point_copy(&c_struct->remote_point);
}

void TypeDirection2DToPoint::set_remote_point(TypeRemotePoint remote_point) {
	nullptr_check();
	auto c_object          = std::move(remote_point).get_aspn_c();
	c_struct->remote_point = *c_object;
}

Aspn23TypeDirection2DToPointReference TypeDirection2DToPoint::get_reference() const {
	nullptr_check();
	return c_struct->reference;
}

void TypeDirection2DToPoint::set_reference(Aspn23TypeDirection2DToPointReference reference) {
	nullptr_check();
	c_struct->reference = reference;
}

double TypeDirection2DToPoint::get_obs() const {
	nullptr_check();
	return c_struct->obs;
}

void TypeDirection2DToPoint::set_obs(double obs) {
	nullptr_check();
	c_struct->obs = obs;
}

double TypeDirection2DToPoint::get_variance() const {
	nullptr_check();
	return c_struct->variance;
}

void TypeDirection2DToPoint::set_variance(double variance) {
	nullptr_check();
	c_struct->variance = variance;
}

bool TypeDirection2DToPoint::get_has_observation_characteristics() const {
	nullptr_check();
	return c_struct->has_observation_characteristics;
}

void TypeDirection2DToPoint::set_has_observation_characteristics(
    bool has_observation_characteristics) {
	nullptr_check();
	c_struct->has_observation_characteristics = has_observation_characteristics;
}

TypeImageFeature TypeDirection2DToPoint::get_observation_characteristics() const {
	nullptr_check();
	if (c_struct->has_observation_characteristics)
		return aspn23_type_image_feature_copy(&c_struct->observation_characteristics);
	return nullptr;
}

void TypeDirection2DToPoint::set_observation_characteristics(
    TypeImageFeature observation_characteristics) {
	nullptr_check();
	auto c_object                         = std::move(observation_characteristics).get_aspn_c();
	c_struct->observation_characteristics = *c_object;
}

Aspn23TypeDirection2DToPointErrorModel TypeDirection2DToPoint::get_error_model() const {
	nullptr_check();
	return c_struct->error_model;
}

void TypeDirection2DToPoint::set_error_model(Aspn23TypeDirection2DToPointErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t TypeDirection2DToPoint::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::pytensor<double, 1> TypeDirection2DToPoint::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void TypeDirection2DToPoint::set_error_model_params(xt::pytensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t TypeDirection2DToPoint::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> TypeDirection2DToPoint::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void TypeDirection2DToPoint::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void TypeDirection2DToPoint::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "TypeDirection2DToPoint is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
