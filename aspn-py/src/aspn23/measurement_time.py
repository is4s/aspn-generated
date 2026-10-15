"""
This code is generated via firehose.
DO NOT hand edit code.  Make any changes required using the firehose repo instead.
"""

from dataclasses import dataclass
from enum import Enum
from typing import List, Optional

import numpy as np
from numpy.typing import NDArray

from .aspn_base import AspnBase
from .type_header import TypeHeader
from .type_integrity import TypeIntegrity
from .type_timestamp import TypeTimestamp


class MeasurementTimeErrorModel(Enum):
    """
    Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    """

    """
    No additional error model provided (num_error_model_params = 0).
    """
    NONE = 0


@dataclass
class MeasurementTime(AspnBase):
    """
    Expresses time measurements from one or more clocks/timing sources.

    ### Attributes

    header - TypeHeader:
            Standard ASPN measurement header.

    time_of_validity - TypeTimestamp:
            Time at which the measurement is considered to be valid.

    time_of_validity_attosec - int:
            Whole number of attoseconds used to provide additional timestamp fidelity describing
            the time at which the measurement is considered to be valid. This is only needed if the
            time of validity is known to more precision than 1ns; otherwise, set
            time_of_validity_attosec = 0. Be sure to report the timestamp's digits of precision in
            the `type_metadataheader` as part of the metadata. The full timestamp in nanoseconds is
            calculated as time_of_validity + ( time_of_validity_attosec * 1E-9 ) and if needed, a
            timestamp in seconds is calculated as time_of_validity * 1E-9 + time_of_validity_attosec
            * 1E-18 (Recall time_of_validity is in nanoseconds and time_of_validity_attosec is in
            attoseconds.) Furthermore, both time_of_validity and time_of_validity_attosec are signed
            integers and may be positive or negative. It is recommended to make time_of_validity and
            time_of_validity_attosec the same sign. Care should be taken when constructing the
            timestamp components to be sure the summation produces the desired result.

    clock_id - NDArray[np.uint8]:
            Identifier for clock/timing source for each measurement. See clock_identifiers.md
            for a full description, but the summary is as follows: 0 = ASPN System Time 1 =
            International Atomic Time (TAI) 2 = Universal Coordinated Time (UTC) 3 = GPS System Time
            4 = Galileo System Time 5 = GLONASS System Time 6 = BeiDou System Time 7-50: Reserved
            for future additional time scale representations.

    elapsed_nsec - NDArray[np.int64]:
            Whole number nanoseconds elapsed since each clock's zero epoch. If negative, whole
            number nanoseconds until each clock's zero epoch. Additionally, the timestamp's digits
            of precision are included as `digits_of_precision`.

    elapsed_attosec - NDArray[np.int32]:
            Whole number of attoseconds used to provide additional observation fidelity. This is
            only needed if the observation is known to more precision than 1ns; otherwise, set
            time_of_validity_attosec = 0. Be sure to report the timestamp's digits of precision. The
            full observation in nanoseconds is calculated as elapsed_nsec + ( elapsed_attosec * 1E-9
            ) and the observation in seconds is calculated as elapsed_nsec * 1E-9 + elapsed_attosec
            * 1E-18 Furthermore, both elapsed_nsec and elapsed_attosec are signed integers and may
            be positive or negative. It is recommended to make elapsed_nsec and elapsed_attosec the
            same sign. Care should be taken when constructing the observation components to be sure
            the summation produces the desired result.

    digits_of_precision - int:
            Defines how many decimal digits of precision are represented in the observation
            after the decimal point. The precision of the observation is 10E-N, where N is
            digits_of_precision. A value of 3 would mean that the observation has precision at the
            10E-3 (millisecond) level, a value of 6 would mean the observation has precision at the
            10E-6 (microsecond) level, etc.

    covariance - NDArray[np.float64]:
            Measurement error variance or covariance depending on measurement dimension in the
            absolute clock/timing signal measurements. Note: These measurements are assuming that
            there is no error in the ASPN system clock. Errors in the ASPN system clock time tag for
            the time measurements should be included in the overall errors for the respective time
            measurements as expressed in the covariance matrix. Dimensions of covariance must be
            num_obs²

    error_model - MeasurementTimeErrorModel:
            Defines an optional error model for other than zero-mean, additive, white Gaussian
            noise (AWGN).

    error_model_params - NDArray[np.float64]:
            Error model parameters that characterize the optional error model.

    integrity - List[TypeIntegrity]:
            Measurement integrity. Includes the integrity method used and an integrity value
            (which is to be interpreted based upon the integrity method). The intent of allowing
            num_integrity > 1 is to report multiple integrity values based on multiple integrity
            methods.
    """

    header: TypeHeader
    time_of_validity: TypeTimestamp
    time_of_validity_attosec: int
    clock_id: NDArray[np.uint8]
    elapsed_nsec: NDArray[np.int64]
    elapsed_attosec: NDArray[np.int32]
    digits_of_precision: int
    covariance: NDArray[np.float64]
    error_model: MeasurementTimeErrorModel
    error_model_params: NDArray[np.float64]
    integrity: List[TypeIntegrity]
