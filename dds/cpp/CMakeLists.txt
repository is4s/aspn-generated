cmake_minimum_required(VERSION 3.8)

project(aspn23_dds VERSION 23)
message(STATUS "${PROJECT_NAME} version ${PROJECT_VERSION}")

find_package(fastcdr 2.2 REQUIRED)
find_package(fastrtps 2.14 REQUIRED)

set(aspn23_dds_SOURCES
    aspn23_dds/TypeSatnavSignalDescriptor.cxx
    aspn23_dds/MeasurementImu.cxx
    aspn23_dds/TypeMountingPubSubTypes.cxx
    aspn23_dds/MeasurementMagneticFieldMagnitudePubSubTypes.cxx
    aspn23_dds/MetadataGlonassEphemeris.cxx
    aspn23_dds/MeasurementDeltaRangeToPointPubSubTypes.cxx
    aspn23_dds/MetadataSatnavObs.cxx
    aspn23_dds/MetadataGpsCnavEphemeris.cxx
    aspn23_dds/MetadataBeidouEphemerisPubSubTypes.cxx
    aspn23_dds/MeasurementMagneticFieldPubSubTypes.cxx
    aspn23_dds/MeasurementPositionVelocityAttitudePubSubTypes.cxx
    aspn23_dds/MeasurementRangeRateToPointPubSubTypes.cxx
    aspn23_dds/MeasurementDeltaPosition.cxx
    aspn23_dds/MeasurementFrequencyDifferencePubSubTypes.cxx
    aspn23_dds/MeasurementAltitude.cxx
    aspn23_dds/MeasurementSatnavPubSubTypes.cxx
    aspn23_dds/TypeHeaderPubSubTypes.cxx
    aspn23_dds/MeasurementSatnavWithSvData.cxx
    aspn23_dds/MeasurementAttitude3DPubSubTypes.cxx
    aspn23_dds/MetadataBeidouEphemeris.cxx
    aspn23_dds/MeasurementSatnavSubframePubSubTypes.cxx
    aspn23_dds/MetadataMagneticFieldPubSubTypes.cxx
    aspn23_dds/TypeSatnavClockPubSubTypes.cxx
    aspn23_dds/MetadataImageFeaturesPubSubTypes.cxx
    aspn23_dds/MeasurementFrequencyDifference.cxx
    aspn23_dds/TypeMetadataheader.cxx
    aspn23_dds/TypeSatnavObs.cxx
    aspn23_dds/MetadataGalileoEphemerisPubSubTypes.cxx
    aspn23_dds/MeasurementDirection2DToPointsPubSubTypes.cxx
    aspn23_dds/MeasurementSatnav.cxx
    aspn23_dds/MeasurementAngularVelocity.cxx
    aspn23_dds/MeasurementTemperaturePubSubTypes.cxx
    aspn23_dds/MeasurementAccumulatedDistanceTraveledPubSubTypes.cxx
    aspn23_dds/TypeMounting.cxx
    aspn23_dds/MetadataGpsLnavEphemeris.cxx
    aspn23_dds/MeasurementTime.cxx
    aspn23_dds/MeasurementMagneticFieldMagnitude.cxx
    aspn23_dds/MetadataMagneticField.cxx
    aspn23_dds/MeasurementPositionAttitude.cxx
    aspn23_dds/MeasurementSatnavSubframe.cxx
    aspn23_dds/MeasurementMagneticField.cxx
    aspn23_dds/TypeSatnavSatelliteSystemPubSubTypes.cxx
    aspn23_dds/MeasurementDeltaRangePubSubTypes.cxx
    aspn23_dds/TypeSatnavTime.cxx
    aspn23_dds/MeasurementRangeRateToPoint.cxx
    aspn23_dds/TypeDirection3DToPointPubSubTypes.cxx
    aspn23_dds/TypeDirection3DToPoint.cxx
    aspn23_dds/TypeImageFeaturePubSubTypes.cxx
    aspn23_dds/TypeSatnavObsPubSubTypes.cxx
    aspn23_dds/TypeRemotePoint.cxx
    aspn23_dds/MetadataGpsMnavEphemeris.cxx
    aspn23_dds/MeasurementTimeDifference.cxx
    aspn23_dds/MeasurementDirectionOfMotion2D.cxx
    aspn23_dds/MeasurementRangeToPoint.cxx
    aspn23_dds/MeasurementSpeed.cxx
    aspn23_dds/MeasurementDirection3DToPointsPubSubTypes.cxx
    aspn23_dds/MetadataImu.cxx
    aspn23_dds/MeasurementSpecificForce1DPubSubTypes.cxx
    aspn23_dds/MeasurementDirectionOfMotion3DPubSubTypes.cxx
    aspn23_dds/TypeIntegrityPubSubTypes.cxx
    aspn23_dds/MetadataGpsLnavEphemerisPubSubTypes.cxx
    aspn23_dds/TypeSatnavSvData.cxx
    aspn23_dds/MeasurementVelocity.cxx
    aspn23_dds/MeasurementSpecificForce1D.cxx
    aspn23_dds/TypeMetadataheaderPubSubTypes.cxx
    aspn23_dds/MetadataGeneric.cxx
    aspn23_dds/MetadataSatnavObsPubSubTypes.cxx
    aspn23_dds/MeasurementTimePubSubTypes.cxx
    aspn23_dds/MetadataImuPubSubTypes.cxx
    aspn23_dds/TypeImageFeature.cxx
    aspn23_dds/MetadataGpsMnavEphemerisPubSubTypes.cxx
    aspn23_dds/MeasurementPositionPubSubTypes.cxx
    aspn23_dds/MetadataGpsCnavEphemerisPubSubTypes.cxx
    aspn23_dds/TypeKeplerOrbitPubSubTypes.cxx
    aspn23_dds/MeasurementAttitude3D.cxx
    aspn23_dds/TypeSatnavClock.cxx
    aspn23_dds/MeasurementVelocityPubSubTypes.cxx
    aspn23_dds/MeasurementAccumulatedDistanceTraveled.cxx
    aspn23_dds/MeasurementImuPubSubTypes.cxx
    aspn23_dds/MeasurementTimeFrequencyDifference.cxx
    aspn23_dds/MeasurementSpeedPubSubTypes.cxx
    aspn23_dds/TypeTimestampPubSubTypes.cxx
    aspn23_dds/MetadataGpsIonoUtcParameters.cxx
    aspn23_dds/MeasurementAltitudePubSubTypes.cxx
    aspn23_dds/MeasurementDeltaPositionPubSubTypes.cxx
    aspn23_dds/MeasurementPositionVelocityAttitude.cxx
    aspn23_dds/MetadataGlonassEphemerisPubSubTypes.cxx
    aspn23_dds/MeasurementBarometer.cxx
    aspn23_dds/TypeIntegrity.cxx
    aspn23_dds/MeasurementTdoa2Tx1Rx.cxx
    aspn23_dds/MeasurementAngularVelocity1DPubSubTypes.cxx
    aspn23_dds/MeasurementSatnavWithSvDataPubSubTypes.cxx
    aspn23_dds/TypeSatnavSignalDescriptorPubSubTypes.cxx
    aspn23_dds/MetadataGalileoEphemeris.cxx
    aspn23_dds/MeasurementRangeToPointPubSubTypes.cxx
    aspn23_dds/MeasurementDirection2DToPoints.cxx
    aspn23_dds/MeasurementAttitude2D.cxx
    aspn23_dds/MeasurementAttitude2DPubSubTypes.cxx
    aspn23_dds/MeasurementPosition.cxx
    aspn23_dds/TypeDirection2DToPoint.cxx
    aspn23_dds/MeasurementTdoa1Tx2RxPubSubTypes.cxx
    aspn23_dds/TypeHeader.cxx
    aspn23_dds/MeasurementDirectionOfMotion2DPubSubTypes.cxx
    aspn23_dds/MeasurementTdoa2Tx1RxPubSubTypes.cxx
    aspn23_dds/MeasurementDirection3DToPoints.cxx
    aspn23_dds/MeasurementTemperature.cxx
    aspn23_dds/MeasurementImage.cxx
    aspn23_dds/MeasurementTimeFrequencyDifferencePubSubTypes.cxx
    aspn23_dds/MeasurementHeading.cxx
    aspn23_dds/TypeSatnavTimePubSubTypes.cxx
    aspn23_dds/MeasurementDirectionOfMotion3D.cxx
    aspn23_dds/MetadataGenericPubSubTypes.cxx
    aspn23_dds/TypeTimestamp.cxx
    aspn23_dds/MeasurementBarometerPubSubTypes.cxx
    aspn23_dds/MeasurementPositionAttitudePubSubTypes.cxx
    aspn23_dds/TypeKeplerOrbit.cxx
    aspn23_dds/TypeSatnavSvDataPubSubTypes.cxx
    aspn23_dds/MeasurementAngularVelocityPubSubTypes.cxx
    aspn23_dds/MeasurementDeltaRangeToPoint.cxx
    aspn23_dds/MeasurementTimeDifferencePubSubTypes.cxx
    aspn23_dds/TypeRemotePointPubSubTypes.cxx
    aspn23_dds/MetadataImageFeatures.cxx
    aspn23_dds/TypeSatnavSatelliteSystem.cxx
    aspn23_dds/MeasurementAngularVelocity1D.cxx
    aspn23_dds/MeasurementTdoa1Tx2Rx.cxx
    aspn23_dds/MeasurementHeadingPubSubTypes.cxx
    aspn23_dds/MeasurementDeltaRange.cxx
    aspn23_dds/MetadataGpsIonoUtcParametersPubSubTypes.cxx
    aspn23_dds/TypeDirection2DToPointPubSubTypes.cxx
    aspn23_dds/MeasurementImagePubSubTypes.cxx
)

add_library(${PROJECT_NAME}
  ${aspn23_dds_SOURCES}
)

target_link_libraries(${PROJECT_NAME}
  PUBLIC
  fastrtps fastcdr
)

# Also set NOMINMAX so the min and max functions are not overwritten with macros.
IF(MSVC)
  add_definitions(-DNOMINMAX -DNOGDI)
ENDIF()

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_14)

set_property(TARGET ${PROJECT_NAME} PROPERTY POSITION_INDEPENDENT_CODE ON)

if(NOT MSVC)
  target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
endif()

target_include_directories(${PROJECT_NAME}
  PUBLIC
  $<INSTALL_INTERFACE:include/>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/>
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/
)

# ##############################################################################
# # Install artifacts                                                         ##
# ##############################################################################
install(
  DIRECTORY aspn23_dds/
  INCLUDES DESTINATION include/aspn23_dds
  FILES_MATCHING PATTERN "*.h"
)

install(
  TARGETS ${PROJECT_NAME}
  EXPORT ${PROJECT_NAME}Targets
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
  ${PROJECT_NAME}ConfigVersion.cmake
  COMPATIBILITY AnyNewerVersion
)

export(TARGETS ${PROJECT_NAME} FILE ${PROJECT_NAME}Targets.cmake)

install(EXPORT ${PROJECT_NAME}Targets
  FILE ${PROJECT_NAME}Targets.cmake
  DESTINATION lib/cmake/${PROJECT_NAME}
)

set(PKG_NAME ${PROJECT_NAME})
configure_package_config_file("cmake/${PROJECT_NAME}Config.cmake.in" "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
  INSTALL_DESTINATION lib/cmake/${PROJECT_NAME}
  PATH_VARS PKG_NAME
  NO_SET_AND_CHECK_MACRO
  NO_CHECK_REQUIRED_COMPONENTS_MACRO)

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
  "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
  DESTINATION lib/cmake/${PROJECT_NAME}
)
