
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeSatnavSatelliteSystem.h"
#include "TypeSatnavTime.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Provides further clarification of which ephemeris was used to generate the satellite information
 * provided in this message for systems which have more than one ephemeris representation.
 */

enum Aspn23TypeSatnavSvDataEphemerisType {

	/**
	 * To be used when a system only uses one ephemeris representation, so knowing the
	 * satellite_system fully defines what ephemeris is being used.
	 */

	ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM,

	/**
	 * Calculated using legacy GPS (LNAV) messages
	 */

	ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV,

	/**
	 * Calculated using GPS CNAV messages
	 */

	ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV,

	/**
	 * Calculated using GPS MNAV messages
	 */

	ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV
};

/**
 * Coordinate frame system used to describe satellite position and velocity.
 */

enum Aspn23TypeSatnavSvDataCoordinateFrame {

	/**
	 * International Terrestrial Reference Frame
	 */

	ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF,

	/**
	 * Earth-centered earth-fixed frame as defined by WGS-84 (nearly identical with ITRF)
	 */

	ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF,

	/**
	 * Galileo Terrestrial Reference Frame (nearly identical with ITRF)
	 */

	ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF,

	/**
	 * Parametri Zemli 1990 (PZ-90) reference frame
	 */

	ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90
};

/**
 * Describes how to interpret group delay terms, because they vary by ephemeris type. Descriptions
 * assume zero-indexing.
 */

enum Aspn23TypeSatnavSvDataGroupDelayEnum {

	/**
	 * group_delay_vector[0] is legacy Tgd as defined in ICD-GPS-200L Section 20.3.3.3.3.2. All
	 * other terms not used.
	 */

	ASPN23_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV
};

/**
 * Satellite position, velocity and clock error at a particular time epoch
 */

typedef struct Aspn23TypeSatnavSvData {

	/**
	 * PRN code which identifies satellite (or slot number, in the case of GLONASS) of this
	 * ephemeris.
	 */

	int16_t prn;

	/**
	 * Describes the Satellite System which was used to generate the satellite information provided
	 * in this message.
	 */

	Aspn23TypeSatnavSatelliteSystem satellite_system;

	/**
	 * Provides further clarification of which ephemeris was used to generate the satellite
	 * information provided in this message for systems which have more than one ephemeris
	 * representation.
	 */

	enum Aspn23TypeSatnavSvDataEphemerisType ephemeris_type;

	/**
	 * Receiver time at which the data provided in this message is valid.
	 */

	Aspn23TypeSatnavTime sv_data_time;

	/**
	 * Coordinate frame system used to describe satellite position and velocity.
	 */

	enum Aspn23TypeSatnavSvDataCoordinateFrame coordinate_frame;

	/**
	 * Satellite position in frame specified by coordinate_frame at time specified by
	 * sv_data_time_week_number and sv_data_time_seconds_of_week.
	 */

	double sv_pos[3];

	/**
	 * Satellite velocity in frame specified by coordinate_frame at time specified by
	 * sv_data_time_week_number and sv_data_time_seconds_of_week.
	 */

	double sv_vel[3];

	/**
	 * Satellite clock bias at the sv_data_time, used to correct the satellite time like delta_t_sv
	 * in equation (1) of ICD-GPS-200L, Section 20.3.3.3.3.1.
	 */

	double sv_clock_bias;

	/**
	 * Satellite clock drift rate at the sv_data_time. By way of example, for GPS this would be af1
	 * in equation (2) of ICD-GPS-200L, Section 20.3.3.3.3.1.
	 */

	double sv_clock_drift;

	/**
	 * Describes how to interpret group delay terms, because they vary by ephemeris type.
	 * Descriptions assume zero-indexing.
	 */

	enum Aspn23TypeSatnavSvDataGroupDelayEnum group_delay_enum;

	/**
	 * Group delay terms, with interpretation provided by group_delay_enum. (Need to verify that
	 * four is sufficient for all ephemeris.)
	 */

	float group_delay_vector[4];

} Aspn23TypeSatnavSvData;

Aspn23TypeSatnavSvData* ASPN_NULLABLE
aspn23_type_satnav_sv_data_new(int16_t prn,
                               Aspn23TypeSatnavSatelliteSystem* satellite_system,
                               enum Aspn23TypeSatnavSvDataEphemerisType ephemeris_type,
                               Aspn23TypeSatnavTime* sv_data_time,
                               enum Aspn23TypeSatnavSvDataCoordinateFrame coordinate_frame,
                               double sv_pos[3],
                               double sv_vel[3],
                               double sv_clock_bias,
                               double sv_clock_drift,
                               enum Aspn23TypeSatnavSvDataGroupDelayEnum group_delay_enum,
                               float group_delay_vector[4]);

Aspn23TypeSatnavSvData* ASPN_NULLABLE aspn23_type_satnav_sv_data_copy(Aspn23TypeSatnavSvData*);

/**
 * free() all memory held by the given Aspn23TypeSatnavSvData,
 * including the struct itself.
 */

void aspn23_type_satnav_sv_data_free(void* pointer);
void aspn23_type_satnav_sv_data_free_members(Aspn23TypeSatnavSvData* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
