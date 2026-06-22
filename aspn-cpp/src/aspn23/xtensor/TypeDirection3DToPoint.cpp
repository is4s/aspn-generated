
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeDirection3DToPoint.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

TypeDirection3DToPoint::TypeDirection3DToPoint(
    TypeRemotePoint remote_point,
    Aspn23TypeDirection3DToPointReferenceFrame reference_frame,
    xt::xtensor_fixed<double, xt::xshape<2>> obs,
    xt::xtensor_fixed<double, xt::xshape<2, 2>> covariance,
    bool has_observation_characteristics,
    TypeImageFeature observation_characteristics,
    Aspn23TypeDirection3DToPointErrorModel error_model,
    xt::xtensor<double, 1> error_model_params,
    std::vector<TypeIntegrity> integrity) {
	auto remote_point_prep = remote_point.get_aspn_c();
	double obs_prep[2];
	for (size_t ii = 0; ii < 2; ii++) obs_prep[ii] = obs(ii);

	double covariance_prep[2][2];
	for (size_t row = 0; row < 2; row++)
		for (size_t col = 0; col < 2; col++) covariance_prep[row][col] = covariance(row, col);
	auto observation_characteristics_prep = observation_characteristics.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep   = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_type_direction_3d_to_point_new(remote_point_prep,
	                                                       reference_frame,
	                                                       obs_prep,
	                                                       covariance_prep,
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

TypeDirection3DToPoint::TypeDirection3DToPoint(Aspn23TypeDirection3DToPoint* c_struct,
                                               bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeDirection3DToPoint::TypeDirection3DToPoint(const TypeDirection3DToPoint& other) {
	auto remote_point                = other.get_remote_point();
	auto obs                         = other.get_obs();
	auto covariance                  = other.get_covariance();
	auto observation_characteristics = other.get_observation_characteristics();
	auto integrity                   = other.get_integrity();
	auto remote_point_prep           = remote_point.get_aspn_c();
	double obs_prep[2];
	for (size_t ii = 0; ii < 2; ii++) obs_prep[ii] = obs(ii);

	double covariance_prep[2][2];
	for (size_t row = 0; row < 2; row++)
		for (size_t col = 0; col < 2; col++) covariance_prep[row][col] = covariance(row, col);
	auto observation_characteristics_prep = observation_characteristics.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep   = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct =
	    aspn23_type_direction_3d_to_point_new(remote_point_prep,
	                                          other.get_reference_frame(),
	                                          obs_prep,
	                                          covariance_prep,
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

TypeDirection3DToPoint& TypeDirection3DToPoint::operator=(const TypeDirection3DToPoint& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_direction_3d_to_point_free(this->c_struct);
		auto remote_point                = other.get_remote_point();
		auto obs                         = other.get_obs();
		auto covariance                  = other.get_covariance();
		auto observation_characteristics = other.get_observation_characteristics();
		auto integrity                   = other.get_integrity();
		auto remote_point_prep           = remote_point.get_aspn_c();
		double obs_prep[2];
		for (size_t ii = 0; ii < 2; ii++) obs_prep[ii] = obs(ii);

		double covariance_prep[2][2];
		for (size_t row = 0; row < 2; row++)
			for (size_t col = 0; col < 2; col++) covariance_prep[row][col] = covariance(row, col);
		auto observation_characteristics_prep = observation_characteristics.get_aspn_c();
		Aspn23TypeIntegrity* integrity_prep   = new Aspn23TypeIntegrity[integrity.size()];
		for (size_t ii = 0; ii < integrity.size(); ii++) {
			auto c_object      = integrity[ii].get_aspn_c();
			integrity_prep[ii] = *c_object;
		}

		this->c_struct =
		    aspn23_type_direction_3d_to_point_new(remote_point_prep,
		                                          other.get_reference_frame(),
		                                          obs_prep,
		                                          covariance_prep,
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

TypeDirection3DToPoint::TypeDirection3DToPoint(TypeDirection3DToPoint&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeDirection3DToPoint& TypeDirection3DToPoint::operator=(TypeDirection3DToPoint&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_direction_3d_to_point_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeDirection3DToPoint::~TypeDirection3DToPoint() {
	if (c_struct != nullptr && take_ownership)
		aspn23_type_direction_3d_to_point_free(this->c_struct);
}

Aspn23TypeDirection3DToPoint* TypeDirection3DToPoint::get_aspn_c() const { return c_struct; }

void TypeDirection3DToPoint::reset_aspn_c(Aspn23TypeDirection3DToPoint* replacement_struct,
                                          bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_type_direction_3d_to_point_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeRemotePoint TypeDirection3DToPoint::get_remote_point() const {
	nullptr_check();
	return aspn23_type_remote_point_copy(&c_struct->remote_point);
}

void TypeDirection3DToPoint::set_remote_point(TypeRemotePoint remote_point) {
	nullptr_check();
	auto c_object          = std::move(remote_point).get_aspn_c();
	c_struct->remote_point = *c_object;
}

Aspn23TypeDirection3DToPointReferenceFrame TypeDirection3DToPoint::get_reference_frame() const {
	nullptr_check();
	return c_struct->reference_frame;
}

void TypeDirection3DToPoint::set_reference_frame(
    Aspn23TypeDirection3DToPointReferenceFrame reference_frame) {
	nullptr_check();
	c_struct->reference_frame = reference_frame;
}

xt::xtensor_fixed<double, xt::xshape<2>> TypeDirection3DToPoint::get_obs() const {
	nullptr_check();

	std::vector<uint64_t> shape = {2};
	return xt::adapt(&c_struct->obs[0], 2, xt::no_ownership(), shape);
}

void TypeDirection3DToPoint::set_obs(xt::xtensor_fixed<double, xt::xshape<2>> obs) {
	nullptr_check();
	memcpy(c_struct->obs, obs.data(), 2 * sizeof(double));
}

xt::xtensor_fixed<double, xt::xshape<2, 2>> TypeDirection3DToPoint::get_covariance() const {
	nullptr_check();

	std::vector<std::size_t> shape = {2, 2};
	return xt::adapt(&c_struct->covariance[0][0], shape);
}

void TypeDirection3DToPoint::set_covariance(
    xt::xtensor_fixed<double, xt::xshape<2, 2>> covariance) {
	nullptr_check();
	memcpy(c_struct->covariance, covariance.data(), 2 * 2 * sizeof(double));
}

bool TypeDirection3DToPoint::get_has_observation_characteristics() const {
	nullptr_check();
	return c_struct->has_observation_characteristics;
}

void TypeDirection3DToPoint::set_has_observation_characteristics(
    bool has_observation_characteristics) {
	nullptr_check();
	c_struct->has_observation_characteristics = has_observation_characteristics;
}

TypeImageFeature TypeDirection3DToPoint::get_observation_characteristics() const {
	nullptr_check();
	if (c_struct->has_observation_characteristics)
		return aspn23_type_image_feature_copy(&c_struct->observation_characteristics);
	return nullptr;
}

void TypeDirection3DToPoint::set_observation_characteristics(
    TypeImageFeature observation_characteristics) {
	nullptr_check();
	auto c_object                         = std::move(observation_characteristics).get_aspn_c();
	c_struct->observation_characteristics = *c_object;
}

Aspn23TypeDirection3DToPointErrorModel TypeDirection3DToPoint::get_error_model() const {
	nullptr_check();
	return c_struct->error_model;
}

void TypeDirection3DToPoint::set_error_model(Aspn23TypeDirection3DToPointErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t TypeDirection3DToPoint::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::xtensor<double, 1> TypeDirection3DToPoint::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void TypeDirection3DToPoint::set_error_model_params(xt::xtensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t TypeDirection3DToPoint::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> TypeDirection3DToPoint::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void TypeDirection3DToPoint::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void TypeDirection3DToPoint::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "TypeDirection3DToPoint is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
