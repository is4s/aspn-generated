
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead.
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <aspn23/TypeTimestamp.h>
#include <aspn23/TypeHeader.h>

/*
 * An alias for cases where the object has been up-casted and should be
 * down-casted before using it.
 */
typedef Aspn23TypeHeader AspnBase;

ASPN_ASSUME_NONNULL_BEGIN

bool aspn23_is_core_message(AspnBase* base);

Aspn23TypeTimestamp aspn23_get_time(const AspnBase* base);
void aspn23_set_time(AspnBase* base, Aspn23TypeTimestamp time);

AspnBase* ASPN_NULLABLE aspn23_copy_message(AspnBase* base);

ASPN_ASSUME_NONNULL_END

#ifdef __cplusplus
}  // extern "C"
#endif
