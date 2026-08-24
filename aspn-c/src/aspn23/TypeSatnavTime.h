
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
 * Reference time system used to express the data in this message. In a multi-GNSS receiver
 * (GPS/GLONASS/Galileo/QZSS/BeiDou) all pseudorange observations must refer to one receiver clock
 * only. The receiver clock time of the measurement is the receiver clock time of the received
 * signals. It is identical for the phase and range measurements and is identical for all satellites
 * observed in a given epoch.
 */

enum Aspn23TypeSatnavTimeTimeReference {

	/**
	 * GPS system time.
	 */

	ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS,

	/**
	 * Galileo system time.
	 */

	ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO,

	/**
	 * BeiDou system time.
	 */

	ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU,

	/**
	 * GLONASS system time.
	 */

	ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS
};

/**
 * Satellite system time
 */

typedef struct Aspn23TypeSatnavTime {

	/**
	 * Full Week number since zero epoch at which the data provided in this message is valid,
	 * expressed in time system defined by time_reference enum (below).
	 */

	uint16_t week_number;

	/**
	 * Seconds since start of current week at which the data provided in this message is valid,
	 * expressed in time system defined by time_reference enum (below).
	 */

	double seconds_of_week;

	/**
	 * Reference time system used to express the data in this message. In a multi-GNSS receiver
	 * (GPS/GLONASS/Galileo/QZSS/BeiDou) all pseudorange observations must refer to one receiver
	 * clock only. The receiver clock time of the measurement is the receiver clock time of the
	 * received signals. It is identical for the phase and range measurements and is identical for
	 * all satellites observed in a given epoch.
	 */

	enum Aspn23TypeSatnavTimeTimeReference time_reference;

} Aspn23TypeSatnavTime;

Aspn23TypeSatnavTime* ASPN_NULLABLE
aspn23_type_satnav_time_new(uint16_t week_number,
                            double seconds_of_week,
                            enum Aspn23TypeSatnavTimeTimeReference time_reference);

Aspn23TypeSatnavTime* ASPN_NULLABLE aspn23_type_satnav_time_copy(Aspn23TypeSatnavTime*);

/**
 * free() all memory held by the given Aspn23TypeSatnavTime,
 * including the struct itself.
 */

void aspn23_type_satnav_time_free(void* pointer);
void aspn23_type_satnav_time_free_members(Aspn23TypeSatnavTime* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
