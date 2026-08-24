
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
 * satnav broadcast parameters required to calculate sv clock corrections
 */

typedef struct Aspn23TypeSatnavClock {

	/**
	 * Clock reference time.
	 */

	double t_oc;

	/**
	 * Satellite clock bias.
	 */

	double af_0;

	/**
	 * Satellite clock drift.
	 */

	double af_1;

	/**
	 * Satellite clock drift rate.
	 */

	double af_2;

} Aspn23TypeSatnavClock;

Aspn23TypeSatnavClock* ASPN_NULLABLE aspn23_type_satnav_clock_new(double t_oc,
                                                                  double af_0,
                                                                  double af_1,
                                                                  double af_2);

Aspn23TypeSatnavClock* ASPN_NULLABLE aspn23_type_satnav_clock_copy(Aspn23TypeSatnavClock*);

/**
 * free() all memory held by the given Aspn23TypeSatnavClock,
 * including the struct itself.
 */

void aspn23_type_satnav_clock_free(void* pointer);
void aspn23_type_satnav_clock_free_members(Aspn23TypeSatnavClock* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
