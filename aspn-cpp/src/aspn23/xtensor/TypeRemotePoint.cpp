
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeRemotePoint.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

TypeRemotePoint::TypeRemotePoint(
    uint8_t included_terms,
    uint32_t id,
    Aspn23TypeRemotePointPositionReferenceFrame position_reference_frame,
    double position1,
    double position2,
    double position3,
    xt::xtensor<double, 2> position_covariance) {

	this->c_struct = aspn23_type_remote_point_new(
	    included_terms,
	    id,
	    position_reference_frame,
	    position1,
	    position2,
	    position3,
	    position_covariance.dimension() == 2 ? position_covariance.shape()[1] : 0,
	    position_covariance.data());

	this->take_ownership = true;
}

TypeRemotePoint::TypeRemotePoint(Aspn23TypeRemotePoint* c_struct, bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeRemotePoint::TypeRemotePoint(const TypeRemotePoint& other) {

	this->c_struct = aspn23_type_remote_point_new(other.get_included_terms(),
	                                              other.get_id(),
	                                              other.get_position_reference_frame(),
	                                              other.get_position1(),
	                                              other.get_position2(),
	                                              other.get_position3(),
	                                              other.get_position_covariance().dimension() == 2
	                                                  ? other.get_position_covariance().shape()[1]
	                                                  : 0,
	                                              other.get_position_covariance().data());

	this->take_ownership = true;
}

TypeRemotePoint& TypeRemotePoint::operator=(const TypeRemotePoint& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_remote_point_free(this->c_struct);

		this->c_struct =
		    aspn23_type_remote_point_new(other.get_included_terms(),
		                                 other.get_id(),
		                                 other.get_position_reference_frame(),
		                                 other.get_position1(),
		                                 other.get_position2(),
		                                 other.get_position3(),
		                                 other.get_position_covariance().dimension() == 2
		                                     ? other.get_position_covariance().shape()[1]
		                                     : 0,
		                                 other.get_position_covariance().data());

		this->take_ownership = true;
	}
	return *this;
}

TypeRemotePoint::TypeRemotePoint(TypeRemotePoint&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeRemotePoint& TypeRemotePoint::operator=(TypeRemotePoint&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_remote_point_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeRemotePoint::~TypeRemotePoint() {
	if (c_struct != nullptr && take_ownership) aspn23_type_remote_point_free(this->c_struct);
}

Aspn23TypeRemotePoint* TypeRemotePoint::get_aspn_c() const { return c_struct; }

void TypeRemotePoint::reset_aspn_c(Aspn23TypeRemotePoint* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_type_remote_point_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

uint8_t TypeRemotePoint::get_included_terms() const {
	nullptr_check();
	return c_struct->included_terms;
}

void TypeRemotePoint::set_included_terms(uint8_t included_terms) {
	nullptr_check();
	c_struct->included_terms = included_terms;
}

uint32_t TypeRemotePoint::get_id() const {
	nullptr_check();
	return c_struct->id;
}

void TypeRemotePoint::set_id(uint32_t id) {
	nullptr_check();
	c_struct->id = id;
}

Aspn23TypeRemotePointPositionReferenceFrame TypeRemotePoint::get_position_reference_frame() const {
	nullptr_check();
	return c_struct->position_reference_frame;
}

void TypeRemotePoint::set_position_reference_frame(
    Aspn23TypeRemotePointPositionReferenceFrame position_reference_frame) {
	nullptr_check();
	c_struct->position_reference_frame = position_reference_frame;
}

double TypeRemotePoint::get_position1() const {
	nullptr_check();
	return c_struct->position1;
}

void TypeRemotePoint::set_position1(double position1) {
	nullptr_check();
	c_struct->position1 = position1;
}

double TypeRemotePoint::get_position2() const {
	nullptr_check();
	return c_struct->position2;
}

void TypeRemotePoint::set_position2(double position2) {
	nullptr_check();
	c_struct->position2 = position2;
}

double TypeRemotePoint::get_position3() const {
	nullptr_check();
	return c_struct->position3;
}

void TypeRemotePoint::set_position3(double position3) {
	nullptr_check();
	c_struct->position3 = position3;
}

uint8_t TypeRemotePoint::get_num_position_components() const {
	nullptr_check();
	return c_struct->num_position_components;
}

xt::xtensor<double, 2> TypeRemotePoint::get_position_covariance() const {
	nullptr_check();
	if (c_struct->position_covariance == nullptr) return {};
	std::vector<std::size_t> shape = {c_struct->num_position_components,
	                                  c_struct->num_position_components};
	return xt::adapt(c_struct->position_covariance,
	                 c_struct->num_position_components * c_struct->num_position_components,
	                 xt::no_ownership(),
	                 shape);
}

void TypeRemotePoint::set_position_covariance(xt::xtensor<double, 2> position_covariance) {
	nullptr_check();
	memcpy(c_struct->position_covariance,
	       position_covariance.data(),
	       c_struct->num_position_components * c_struct->num_position_components * sizeof(double));

	c_struct->num_position_components =
	    position_covariance.dimension() == 2 ? position_covariance.shape()[1] : 0;
}

void TypeRemotePoint::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("TypeRemotePoint is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
