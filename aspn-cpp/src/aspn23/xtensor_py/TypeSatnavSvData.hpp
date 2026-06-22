
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeSatnavSvData.h>

// xtensor
#include <xtensor-python/pytensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeSatnavSatelliteSystem.hpp"
#include "TypeSatnavTime.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Satellite position, velocity and clock error at a particular time epoch
 */
class TypeSatnavSvData {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeSatnavSvData(Aspn23TypeSatnavSvData* c_struct, bool take_ownership = true);

	TypeSatnavSvData(int16_t prn,
	                 TypeSatnavSatelliteSystem satellite_system,
	                 Aspn23TypeSatnavSvDataEphemerisType ephemeris_type,
	                 TypeSatnavTime sv_data_time,
	                 Aspn23TypeSatnavSvDataCoordinateFrame coordinate_frame,
	                 xt::pytensor<double, 1> sv_pos,
	                 xt::pytensor<double, 1> sv_vel,
	                 double sv_clock_bias,
	                 double sv_clock_drift,
	                 Aspn23TypeSatnavSvDataGroupDelayEnum group_delay_enum,
	                 xt::pytensor<float, 1> group_delay_vector);

	~TypeSatnavSvData();

	TypeSatnavSvData(const TypeSatnavSvData& other);
	TypeSatnavSvData& operator=(const TypeSatnavSvData& rhs);

	TypeSatnavSvData(TypeSatnavSvData&& other);
	TypeSatnavSvData& operator=(TypeSatnavSvData&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeSatnavSvData* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeSatnavSvData* replacement_struct, bool take_ownership = true);

	/**
	 * PRN code which identifies satellite (or slot number, in the case of GLONASS) of this
	 * ephemeris.
	 */
	int16_t get_prn() const;

	/**
	 * PRN code which identifies satellite (or slot number, in the case of GLONASS) of this
	 * ephemeris.
	 */
	void set_prn(int16_t);

	/**
	 * Describes the Satellite System which was used to generate the satellite information provided
	 * in this message.
	 */
	TypeSatnavSatelliteSystem get_satellite_system() const;

	/**
	 * Describes the Satellite System which was used to generate the satellite information provided
	 * in this message.
	 */
	void set_satellite_system(TypeSatnavSatelliteSystem);

	/**
	 * Provides further clarification of which ephemeris was used to generate the satellite
	 * information provided in this message for systems which have more than one ephemeris
	 * representation.
	 */
	Aspn23TypeSatnavSvDataEphemerisType get_ephemeris_type() const;

	/**
	 * Provides further clarification of which ephemeris was used to generate the satellite
	 * information provided in this message for systems which have more than one ephemeris
	 * representation.
	 */
	void set_ephemeris_type(Aspn23TypeSatnavSvDataEphemerisType);

	/**
	 * Receiver time at which the data provided in this message is valid.
	 */
	TypeSatnavTime get_sv_data_time() const;

	/**
	 * Receiver time at which the data provided in this message is valid.
	 */
	void set_sv_data_time(TypeSatnavTime);

	/**
	 * Coordinate frame system used to describe satellite position and velocity.
	 */
	Aspn23TypeSatnavSvDataCoordinateFrame get_coordinate_frame() const;

	/**
	 * Coordinate frame system used to describe satellite position and velocity.
	 */
	void set_coordinate_frame(Aspn23TypeSatnavSvDataCoordinateFrame);

	/**
	 * Satellite position in frame specified by coordinate_frame at time specified by
	 * sv_data_time_week_number and sv_data_time_seconds_of_week.
	 */
	xt::pytensor<double, 1> get_sv_pos() const;

	/**
	 * Satellite position in frame specified by coordinate_frame at time specified by
	 * sv_data_time_week_number and sv_data_time_seconds_of_week.
	 */
	void set_sv_pos(xt::pytensor<double, 1>);

	/**
	 * Satellite velocity in frame specified by coordinate_frame at time specified by
	 * sv_data_time_week_number and sv_data_time_seconds_of_week.
	 */
	xt::pytensor<double, 1> get_sv_vel() const;

	/**
	 * Satellite velocity in frame specified by coordinate_frame at time specified by
	 * sv_data_time_week_number and sv_data_time_seconds_of_week.
	 */
	void set_sv_vel(xt::pytensor<double, 1>);

	/**
	 * Satellite clock bias at the sv_data_time, used to correct the satellite time like delta_t_sv
	 * in equation (1) of ICD-GPS-200L, Section 20.3.3.3.3.1.
	 */
	double get_sv_clock_bias() const;

	/**
	 * Satellite clock bias at the sv_data_time, used to correct the satellite time like delta_t_sv
	 * in equation (1) of ICD-GPS-200L, Section 20.3.3.3.3.1.
	 */
	void set_sv_clock_bias(double);

	/**
	 * Satellite clock drift rate at the sv_data_time. By way of example, for GPS this would be af1
	 * in equation (2) of ICD-GPS-200L, Section 20.3.3.3.3.1.
	 */
	double get_sv_clock_drift() const;

	/**
	 * Satellite clock drift rate at the sv_data_time. By way of example, for GPS this would be af1
	 * in equation (2) of ICD-GPS-200L, Section 20.3.3.3.3.1.
	 */
	void set_sv_clock_drift(double);

	/**
	 * Describes how to interpret group delay terms, because they vary by ephemeris type.
	 * Descriptions assume zero-indexing.
	 */
	Aspn23TypeSatnavSvDataGroupDelayEnum get_group_delay_enum() const;

	/**
	 * Describes how to interpret group delay terms, because they vary by ephemeris type.
	 * Descriptions assume zero-indexing.
	 */
	void set_group_delay_enum(Aspn23TypeSatnavSvDataGroupDelayEnum);

	/**
	 * Group delay terms, with interpretation provided by group_delay_enum. (Need to verify that
	 * four is sufficient for all ephemeris.)
	 */
	xt::pytensor<float, 1> get_group_delay_vector() const;

	/**
	 * Group delay terms, with interpretation provided by group_delay_enum. (Need to verify that
	 * four is sufficient for all ephemeris.)
	 */
	void set_group_delay_vector(xt::pytensor<float, 1>);

private:
	Aspn23TypeSatnavSvData* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
