
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Enumerated field which describes the Satellite System.
 */

enum Aspn23TypeSatnavSatelliteSystemSatelliteSystem {

	/**
	 * GPS.
	 */

	ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GPS,

	/**
	 * Galileo.
	 */

	ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GALILEO,

	/**
	 * GLONASS.
	 */

	ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GLONASS,

	/**
	 * BeiDou.
	 */

	ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_BEIDOU,

	/**
	 * SBAS.
	 */

	ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_SBAS,

	/**
	 * QZSS.
	 */

	ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_QZSS,

	/**
	 * IRNSS.
	 */

	ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_IRNSS
};

/**
 * Satellite system name
 */

typedef struct Aspn23TypeSatnavSatelliteSystem {

	/**
	 * Enumerated field which describes the Satellite System.
	 */

	enum Aspn23TypeSatnavSatelliteSystemSatelliteSystem satellite_system;

} Aspn23TypeSatnavSatelliteSystem;

Aspn23TypeSatnavSatelliteSystem* ASPN_NULLABLE aspn23_type_satnav_satellite_system_new(
    enum Aspn23TypeSatnavSatelliteSystemSatelliteSystem satellite_system);

Aspn23TypeSatnavSatelliteSystem* ASPN_NULLABLE
aspn23_type_satnav_satellite_system_copy(Aspn23TypeSatnavSatelliteSystem*);

/**
 * free() all memory held by the given Aspn23TypeSatnavSatelliteSystem,
 * including the struct itself.
 */

void aspn23_type_satnav_satellite_system_free(void* pointer);
void aspn23_type_satnav_satellite_system_free_members(Aspn23TypeSatnavSatelliteSystem* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
