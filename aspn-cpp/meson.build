
# This code is generated via firehose.
# DO NOT hand edit code. Make any changes required using the firehose repo instead.

required = get_option('aspn-cpp').enabled()

xtensor_dep = disabler()
if not get_option('aspn-cpp-xtensor').disabled() or not get_option('aspn-cpp-xtensor-py').disabled()
    xtensor_dep = dependency('xtensor',
        version: ['>=0.21.4', '<1.0.0'],
        fallback: ['xtensor', 'xtensor_dep'],
        include_type: 'system',
        method: 'pkg-config',
        required: get_option('aspn-cpp-xtensor').enabled(),
        disabler: true)
endif

xtensor_python_dep = disabler()
pybind11_dep = disabler()
libpython3_dep = disabler()
if not get_option('aspn-cpp-xtensor-py').disabled()
    xtensor_python_dep = dependency('xtensor-python',
        version: ['>=0.24.1', '<1.0.0'],
        required: false,
        allow_fallback: true,
        disabler: true)

    pybind11 = subproject('pybind11', required: false)
    if pybind11.found()
        pybind11_dep = pybind11.get_variable('pybind11_dep')
    else
        pybind11_dep = disabler()
    endif

    python = import('python').find_installation('python3')
    libpython3_dep = python.dependency(embed: true, required: false)
endif

eigen_dep = disabler()
if not get_option('aspn-cpp-eigen').disabled()
    eigen_dep = dependency('eigen3',
        version: ['>=3.3.5'],
        include_type: 'system',
        required: get_option('aspn-cpp-eigen').enabled(),
        allow_fallback: true,
        disabler: true)
endif

aspn_stl_deps = [aspn_c_dep]
aspn_xtensor_deps = [aspn_c_dep, xtensor_dep]
aspn_xtensor_py_deps = [xtensor_dep, xtensor_python_dep, pybind11_dep]
aspn_eigen_deps = [aspn_c_dep, eigen_dep]

aspn_xtensor_sources = [
    'src/aspn23/xtensor/TypeDirection2DToPoint.cpp',
    'src/aspn23/xtensor/TypeDirection3DToPoint.cpp',
    'src/aspn23/xtensor/TypeHeader.cpp',
    'src/aspn23/xtensor/TypeImageFeature.cpp',
    'src/aspn23/xtensor/TypeIntegrity.cpp',
    'src/aspn23/xtensor/TypeKeplerOrbit.cpp',
    'src/aspn23/xtensor/TypeMetadataheader.cpp',
    'src/aspn23/xtensor/TypeMounting.cpp',
    'src/aspn23/xtensor/TypeRemotePoint.cpp',
    'src/aspn23/xtensor/TypeSatnavClock.cpp',
    'src/aspn23/xtensor/TypeSatnavObs.cpp',
    'src/aspn23/xtensor/TypeSatnavSatelliteSystem.cpp',
    'src/aspn23/xtensor/TypeSatnavSignalDescriptor.cpp',
    'src/aspn23/xtensor/TypeSatnavSvData.cpp',
    'src/aspn23/xtensor/TypeSatnavTime.cpp',
    'src/aspn23/xtensor/TypeTimestamp.cpp',
    'src/aspn23/xtensor/MetadataBeidouEphemeris.cpp',
    'src/aspn23/xtensor/MetadataGlonassEphemeris.cpp',
    'src/aspn23/xtensor/MetadataGpsCnavEphemeris.cpp',
    'src/aspn23/xtensor/MetadataGpsLnavEphemeris.cpp',
    'src/aspn23/xtensor/MetadataGpsMnavEphemeris.cpp',
    'src/aspn23/xtensor/MetadataGpsIonoUtcParameters.cpp',
    'src/aspn23/xtensor/MetadataGalileoEphemeris.cpp',
    'src/aspn23/xtensor/MetadataImu.cpp',
    'src/aspn23/xtensor/MetadataGeneric.cpp',
    'src/aspn23/xtensor/MetadataImageFeatures.cpp',
    'src/aspn23/xtensor/MetadataMagneticField.cpp',
    'src/aspn23/xtensor/MetadataSatnavObs.cpp',
    'src/aspn23/xtensor/MeasurementImu.cpp',
    'src/aspn23/xtensor/MeasurementTdoa1Tx2Rx.cpp',
    'src/aspn23/xtensor/MeasurementTdoa2Tx1Rx.cpp',
    'src/aspn23/xtensor/MeasurementAccumulatedDistanceTraveled.cpp',
    'src/aspn23/xtensor/MeasurementAltitude.cpp',
    'src/aspn23/xtensor/MeasurementAngularVelocity.cpp',
    'src/aspn23/xtensor/MeasurementAngularVelocity1D.cpp',
    'src/aspn23/xtensor/MeasurementAttitude2D.cpp',
    'src/aspn23/xtensor/MeasurementAttitude3D.cpp',
    'src/aspn23/xtensor/MeasurementBarometer.cpp',
    'src/aspn23/xtensor/MeasurementDeltaPosition.cpp',
    'src/aspn23/xtensor/MeasurementDeltaRange.cpp',
    'src/aspn23/xtensor/MeasurementDeltaRangeToPoint.cpp',
    'src/aspn23/xtensor/MeasurementDirection2DToPoints.cpp',
    'src/aspn23/xtensor/MeasurementDirection3DToPoints.cpp',
    'src/aspn23/xtensor/MeasurementDirectionOfMotion2D.cpp',
    'src/aspn23/xtensor/MeasurementDirectionOfMotion3D.cpp',
    'src/aspn23/xtensor/MeasurementFrequencyDifference.cpp',
    'src/aspn23/xtensor/MeasurementHeading.cpp',
    'src/aspn23/xtensor/MeasurementImage.cpp',
    'src/aspn23/xtensor/MeasurementMagneticField.cpp',
    'src/aspn23/xtensor/MeasurementMagneticFieldMagnitude.cpp',
    'src/aspn23/xtensor/MeasurementPosition.cpp',
    'src/aspn23/xtensor/MeasurementPositionAttitude.cpp',
    'src/aspn23/xtensor/MeasurementPositionVelocityAttitude.cpp',
    'src/aspn23/xtensor/MeasurementRangeRateToPoint.cpp',
    'src/aspn23/xtensor/MeasurementRangeToPoint.cpp',
    'src/aspn23/xtensor/MeasurementSatnav.cpp',
    'src/aspn23/xtensor/MeasurementSatnavSubframe.cpp',
    'src/aspn23/xtensor/MeasurementSatnavWithSvData.cpp',
    'src/aspn23/xtensor/MeasurementSpecificForce1D.cpp',
    'src/aspn23/xtensor/MeasurementSpeed.cpp',
    'src/aspn23/xtensor/MeasurementTemperature.cpp',
    'src/aspn23/xtensor/MeasurementTime.cpp',
    'src/aspn23/xtensor/MeasurementTimeDifference.cpp',
    'src/aspn23/xtensor/MeasurementTimeFrequencyDifference.cpp',
    'src/aspn23/xtensor/MeasurementVelocity.cpp',
    'src/aspn23/xtensor/aspn_xtensor.cpp',
]

aspn_xtensor_dep = disabler()

if not get_option('aspn-cpp-xtensor').disabled()

    aspn_xtensor_include = include_directories('src')

    aspn_xtensor_libs = both_libraries('aspn-xtensor',
        sources: aspn_xtensor_sources,
        include_directories: aspn_xtensor_include,
        dependencies: aspn_xtensor_deps,
        soversion: meson.project_version(),
        install: true)

    aspn_xtensor_dep = declare_dependency(
        link_with: aspn_xtensor_libs.get_shared_lib(),
        include_directories: aspn_xtensor_include ,
        dependencies: aspn_xtensor_deps)

    foreach source : aspn_xtensor_sources
        header = source.replace('.cpp', '.hpp')
        install_headers(header, install_dir: get_option('includedir') + '/aspn23/xtensor')
    endforeach

    pkg = import('pkgconfig')
    pkg.generate(aspn_xtensor_libs,
        name: 'aspn23-xtensor',
        description: 'ASPN cpp with xtensor matrices',
        version: meson.project_version())

    meson.override_dependency('aspn23-xtensor', aspn_xtensor_dep)

endif

aspn_xtensor_py_sources = [
    'src/aspn23/xtensor_py/TypeDirection2DToPoint.cpp',
    'src/aspn23/xtensor_py/TypeDirection3DToPoint.cpp',
    'src/aspn23/xtensor_py/TypeHeader.cpp',
    'src/aspn23/xtensor_py/TypeImageFeature.cpp',
    'src/aspn23/xtensor_py/TypeIntegrity.cpp',
    'src/aspn23/xtensor_py/TypeKeplerOrbit.cpp',
    'src/aspn23/xtensor_py/TypeMetadataheader.cpp',
    'src/aspn23/xtensor_py/TypeMounting.cpp',
    'src/aspn23/xtensor_py/TypeRemotePoint.cpp',
    'src/aspn23/xtensor_py/TypeSatnavClock.cpp',
    'src/aspn23/xtensor_py/TypeSatnavObs.cpp',
    'src/aspn23/xtensor_py/TypeSatnavSatelliteSystem.cpp',
    'src/aspn23/xtensor_py/TypeSatnavSignalDescriptor.cpp',
    'src/aspn23/xtensor_py/TypeSatnavSvData.cpp',
    'src/aspn23/xtensor_py/TypeSatnavTime.cpp',
    'src/aspn23/xtensor_py/TypeTimestamp.cpp',
    'src/aspn23/xtensor_py/MetadataBeidouEphemeris.cpp',
    'src/aspn23/xtensor_py/MetadataGlonassEphemeris.cpp',
    'src/aspn23/xtensor_py/MetadataGpsCnavEphemeris.cpp',
    'src/aspn23/xtensor_py/MetadataGpsLnavEphemeris.cpp',
    'src/aspn23/xtensor_py/MetadataGpsMnavEphemeris.cpp',
    'src/aspn23/xtensor_py/MetadataGpsIonoUtcParameters.cpp',
    'src/aspn23/xtensor_py/MetadataGalileoEphemeris.cpp',
    'src/aspn23/xtensor_py/MetadataImu.cpp',
    'src/aspn23/xtensor_py/MetadataGeneric.cpp',
    'src/aspn23/xtensor_py/MetadataImageFeatures.cpp',
    'src/aspn23/xtensor_py/MetadataMagneticField.cpp',
    'src/aspn23/xtensor_py/MetadataSatnavObs.cpp',
    'src/aspn23/xtensor_py/MeasurementImu.cpp',
    'src/aspn23/xtensor_py/MeasurementTdoa1Tx2Rx.cpp',
    'src/aspn23/xtensor_py/MeasurementTdoa2Tx1Rx.cpp',
    'src/aspn23/xtensor_py/MeasurementAccumulatedDistanceTraveled.cpp',
    'src/aspn23/xtensor_py/MeasurementAltitude.cpp',
    'src/aspn23/xtensor_py/MeasurementAngularVelocity.cpp',
    'src/aspn23/xtensor_py/MeasurementAngularVelocity1D.cpp',
    'src/aspn23/xtensor_py/MeasurementAttitude2D.cpp',
    'src/aspn23/xtensor_py/MeasurementAttitude3D.cpp',
    'src/aspn23/xtensor_py/MeasurementBarometer.cpp',
    'src/aspn23/xtensor_py/MeasurementDeltaPosition.cpp',
    'src/aspn23/xtensor_py/MeasurementDeltaRange.cpp',
    'src/aspn23/xtensor_py/MeasurementDeltaRangeToPoint.cpp',
    'src/aspn23/xtensor_py/MeasurementDirection2DToPoints.cpp',
    'src/aspn23/xtensor_py/MeasurementDirection3DToPoints.cpp',
    'src/aspn23/xtensor_py/MeasurementDirectionOfMotion2D.cpp',
    'src/aspn23/xtensor_py/MeasurementDirectionOfMotion3D.cpp',
    'src/aspn23/xtensor_py/MeasurementFrequencyDifference.cpp',
    'src/aspn23/xtensor_py/MeasurementHeading.cpp',
    'src/aspn23/xtensor_py/MeasurementImage.cpp',
    'src/aspn23/xtensor_py/MeasurementMagneticField.cpp',
    'src/aspn23/xtensor_py/MeasurementMagneticFieldMagnitude.cpp',
    'src/aspn23/xtensor_py/MeasurementPosition.cpp',
    'src/aspn23/xtensor_py/MeasurementPositionAttitude.cpp',
    'src/aspn23/xtensor_py/MeasurementPositionVelocityAttitude.cpp',
    'src/aspn23/xtensor_py/MeasurementRangeRateToPoint.cpp',
    'src/aspn23/xtensor_py/MeasurementRangeToPoint.cpp',
    'src/aspn23/xtensor_py/MeasurementSatnav.cpp',
    'src/aspn23/xtensor_py/MeasurementSatnavSubframe.cpp',
    'src/aspn23/xtensor_py/MeasurementSatnavWithSvData.cpp',
    'src/aspn23/xtensor_py/MeasurementSpecificForce1D.cpp',
    'src/aspn23/xtensor_py/MeasurementSpeed.cpp',
    'src/aspn23/xtensor_py/MeasurementTemperature.cpp',
    'src/aspn23/xtensor_py/MeasurementTime.cpp',
    'src/aspn23/xtensor_py/MeasurementTimeDifference.cpp',
    'src/aspn23/xtensor_py/MeasurementTimeFrequencyDifference.cpp',
    'src/aspn23/xtensor_py/MeasurementVelocity.cpp',
    'src/aspn23/xtensor_py/aspn_xtensor.cpp',
]

aspn_xtensor_py_headers = [
    'src/aspn23/xtensor_py/TypeDirection2DToPoint.hpp',
    'src/aspn23/xtensor_py/TypeDirection3DToPoint.hpp',
    'src/aspn23/xtensor_py/TypeHeader.hpp',
    'src/aspn23/xtensor_py/TypeImageFeature.hpp',
    'src/aspn23/xtensor_py/TypeIntegrity.hpp',
    'src/aspn23/xtensor_py/TypeKeplerOrbit.hpp',
    'src/aspn23/xtensor_py/TypeMetadataheader.hpp',
    'src/aspn23/xtensor_py/TypeMounting.hpp',
    'src/aspn23/xtensor_py/TypeRemotePoint.hpp',
    'src/aspn23/xtensor_py/TypeSatnavClock.hpp',
    'src/aspn23/xtensor_py/TypeSatnavObs.hpp',
    'src/aspn23/xtensor_py/TypeSatnavSatelliteSystem.hpp',
    'src/aspn23/xtensor_py/TypeSatnavSignalDescriptor.hpp',
    'src/aspn23/xtensor_py/TypeSatnavSvData.hpp',
    'src/aspn23/xtensor_py/TypeSatnavTime.hpp',
    'src/aspn23/xtensor_py/TypeTimestamp.hpp',
    'src/aspn23/xtensor_py/MetadataBeidouEphemeris.hpp',
    'src/aspn23/xtensor_py/MetadataGlonassEphemeris.hpp',
    'src/aspn23/xtensor_py/MetadataGpsCnavEphemeris.hpp',
    'src/aspn23/xtensor_py/MetadataGpsLnavEphemeris.hpp',
    'src/aspn23/xtensor_py/MetadataGpsMnavEphemeris.hpp',
    'src/aspn23/xtensor_py/MetadataGpsIonoUtcParameters.hpp',
    'src/aspn23/xtensor_py/MetadataGalileoEphemeris.hpp',
    'src/aspn23/xtensor_py/MetadataImu.hpp',
    'src/aspn23/xtensor_py/MetadataGeneric.hpp',
    'src/aspn23/xtensor_py/MetadataImageFeatures.hpp',
    'src/aspn23/xtensor_py/MetadataMagneticField.hpp',
    'src/aspn23/xtensor_py/MetadataSatnavObs.hpp',
    'src/aspn23/xtensor_py/MeasurementImu.hpp',
    'src/aspn23/xtensor_py/MeasurementTdoa1Tx2Rx.hpp',
    'src/aspn23/xtensor_py/MeasurementTdoa2Tx1Rx.hpp',
    'src/aspn23/xtensor_py/MeasurementAccumulatedDistanceTraveled.hpp',
    'src/aspn23/xtensor_py/MeasurementAltitude.hpp',
    'src/aspn23/xtensor_py/MeasurementAngularVelocity.hpp',
    'src/aspn23/xtensor_py/MeasurementAngularVelocity1D.hpp',
    'src/aspn23/xtensor_py/MeasurementAttitude2D.hpp',
    'src/aspn23/xtensor_py/MeasurementAttitude3D.hpp',
    'src/aspn23/xtensor_py/MeasurementBarometer.hpp',
    'src/aspn23/xtensor_py/MeasurementDeltaPosition.hpp',
    'src/aspn23/xtensor_py/MeasurementDeltaRange.hpp',
    'src/aspn23/xtensor_py/MeasurementDeltaRangeToPoint.hpp',
    'src/aspn23/xtensor_py/MeasurementDirection2DToPoints.hpp',
    'src/aspn23/xtensor_py/MeasurementDirection3DToPoints.hpp',
    'src/aspn23/xtensor_py/MeasurementDirectionOfMotion2D.hpp',
    'src/aspn23/xtensor_py/MeasurementDirectionOfMotion3D.hpp',
    'src/aspn23/xtensor_py/MeasurementFrequencyDifference.hpp',
    'src/aspn23/xtensor_py/MeasurementHeading.hpp',
    'src/aspn23/xtensor_py/MeasurementImage.hpp',
    'src/aspn23/xtensor_py/MeasurementMagneticField.hpp',
    'src/aspn23/xtensor_py/MeasurementMagneticFieldMagnitude.hpp',
    'src/aspn23/xtensor_py/MeasurementPosition.hpp',
    'src/aspn23/xtensor_py/MeasurementPositionAttitude.hpp',
    'src/aspn23/xtensor_py/MeasurementPositionVelocityAttitude.hpp',
    'src/aspn23/xtensor_py/MeasurementRangeRateToPoint.hpp',
    'src/aspn23/xtensor_py/MeasurementRangeToPoint.hpp',
    'src/aspn23/xtensor_py/MeasurementSatnav.hpp',
    'src/aspn23/xtensor_py/MeasurementSatnavSubframe.hpp',
    'src/aspn23/xtensor_py/MeasurementSatnavWithSvData.hpp',
    'src/aspn23/xtensor_py/MeasurementSpecificForce1D.hpp',
    'src/aspn23/xtensor_py/MeasurementSpeed.hpp',
    'src/aspn23/xtensor_py/MeasurementTemperature.hpp',
    'src/aspn23/xtensor_py/MeasurementTime.hpp',
    'src/aspn23/xtensor_py/MeasurementTimeDifference.hpp',
    'src/aspn23/xtensor_py/MeasurementTimeFrequencyDifference.hpp',
    'src/aspn23/xtensor_py/MeasurementVelocity.hpp',
    'src/aspn23/xtensor_py/aspn_xtensor.hpp',
]

aspn_xtensor_py_dep = disabler()

if not get_option('aspn-cpp-xtensor-py').disabled()
    aspn_xtensor_py_include = include_directories('src')

    aspn_xtensor_py_static_lib = static_library('aspn_xtensor_py',
        sources: [aspn_xtensor_py_sources, 'src/aspn23/xtensor_py/xtensor_bindings.cpp'],
        include_directories: aspn_xtensor_py_include,
        override_options: ['b_coverage=false', 'b_sanitize=none'],
        dependencies: [aspn_xtensor_py_deps, aspn_c_no_asan_dep],
        install_dir: python.get_install_dir() / 'aspn23_xtensor',
        install: true)

    install_headers(aspn_xtensor_py_headers, subdir: 'aspn23/xtensor_py')

    aspn_xtensor_py_dep = declare_dependency(
        link_whole: aspn_xtensor_py_static_lib,
        include_directories: [aspn_xtensor_py_include, aspn_c_inc_dir],
        dependencies: aspn_xtensor_py_deps)

    meson.override_dependency('aspn23-xtensor-py', aspn_xtensor_py_dep)

    python = import('python').find_installation('python3')
    python_bindings_lib = python.extension_module('aspn23_xtensor',
        sources: ['src/aspn23/xtensor_py/xtensor_bindings_module.cpp'],
        include_directories: aspn_xtensor_py_include,
        dependencies: aspn_xtensor_py_deps,
        override_options: ['b_coverage=false', 'b_sanitize=none'],
        link_whole: aspn_xtensor_py_static_lib,
        install: true)

    # The location of the Python extension module will be the current build directory
    # This can be added to PYTHONPATH to be able to import the module
    aspn_xtensor_python_lib_location = meson.current_build_dir()

    ### Stubgen

    pybind11_stubgen = find_program('pybind11-stubgen')

    if (pybind11_stubgen.found())

        generate_stubs = meson.project_source_root() / 'util' / 'generate_stubs.py'

        env = environment()
        env.append('PYTHONPATH', aspn_xtensor_python_lib_location)

        custom_target('stubs',
                      input : python_bindings_lib,
                      output : ['aspn23_xtensor.pyi' ],
                      command : [pybind11_stubgen, '-o' + meson.current_build_dir(), 'aspn23_xtensor'],
                      env: env,
                      build_by_default : true,
                      install: true,
                      install_tag: 'python-runtime',
                      install_dir: python.get_install_dir())
        install_data('py.typed',
                     install_tag: 'python-runtime',
                     install_dir: python.get_install_dir() / 'aspn23_xtensor')
    endif
endif

aspn_eigen_sources = [
    'src/aspn23/eigen/TypeDirection2DToPoint.cpp',
    'src/aspn23/eigen/TypeDirection3DToPoint.cpp',
    'src/aspn23/eigen/TypeHeader.cpp',
    'src/aspn23/eigen/TypeImageFeature.cpp',
    'src/aspn23/eigen/TypeIntegrity.cpp',
    'src/aspn23/eigen/TypeKeplerOrbit.cpp',
    'src/aspn23/eigen/TypeMetadataheader.cpp',
    'src/aspn23/eigen/TypeMounting.cpp',
    'src/aspn23/eigen/TypeRemotePoint.cpp',
    'src/aspn23/eigen/TypeSatnavClock.cpp',
    'src/aspn23/eigen/TypeSatnavObs.cpp',
    'src/aspn23/eigen/TypeSatnavSatelliteSystem.cpp',
    'src/aspn23/eigen/TypeSatnavSignalDescriptor.cpp',
    'src/aspn23/eigen/TypeSatnavSvData.cpp',
    'src/aspn23/eigen/TypeSatnavTime.cpp',
    'src/aspn23/eigen/TypeTimestamp.cpp',
    'src/aspn23/eigen/MetadataBeidouEphemeris.cpp',
    'src/aspn23/eigen/MetadataGlonassEphemeris.cpp',
    'src/aspn23/eigen/MetadataGpsCnavEphemeris.cpp',
    'src/aspn23/eigen/MetadataGpsLnavEphemeris.cpp',
    'src/aspn23/eigen/MetadataGpsMnavEphemeris.cpp',
    'src/aspn23/eigen/MetadataGpsIonoUtcParameters.cpp',
    'src/aspn23/eigen/MetadataGalileoEphemeris.cpp',
    'src/aspn23/eigen/MetadataImu.cpp',
    'src/aspn23/eigen/MetadataGeneric.cpp',
    'src/aspn23/eigen/MetadataImageFeatures.cpp',
    'src/aspn23/eigen/MetadataMagneticField.cpp',
    'src/aspn23/eigen/MetadataSatnavObs.cpp',
    'src/aspn23/eigen/MeasurementImu.cpp',
    'src/aspn23/eigen/MeasurementTdoa1Tx2Rx.cpp',
    'src/aspn23/eigen/MeasurementTdoa2Tx1Rx.cpp',
    'src/aspn23/eigen/MeasurementAccumulatedDistanceTraveled.cpp',
    'src/aspn23/eigen/MeasurementAltitude.cpp',
    'src/aspn23/eigen/MeasurementAngularVelocity.cpp',
    'src/aspn23/eigen/MeasurementAngularVelocity1D.cpp',
    'src/aspn23/eigen/MeasurementAttitude2D.cpp',
    'src/aspn23/eigen/MeasurementAttitude3D.cpp',
    'src/aspn23/eigen/MeasurementBarometer.cpp',
    'src/aspn23/eigen/MeasurementDeltaPosition.cpp',
    'src/aspn23/eigen/MeasurementDeltaRange.cpp',
    'src/aspn23/eigen/MeasurementDeltaRangeToPoint.cpp',
    'src/aspn23/eigen/MeasurementDirection2DToPoints.cpp',
    'src/aspn23/eigen/MeasurementDirection3DToPoints.cpp',
    'src/aspn23/eigen/MeasurementDirectionOfMotion2D.cpp',
    'src/aspn23/eigen/MeasurementDirectionOfMotion3D.cpp',
    'src/aspn23/eigen/MeasurementFrequencyDifference.cpp',
    'src/aspn23/eigen/MeasurementHeading.cpp',
    'src/aspn23/eigen/MeasurementImage.cpp',
    'src/aspn23/eigen/MeasurementMagneticField.cpp',
    'src/aspn23/eigen/MeasurementMagneticFieldMagnitude.cpp',
    'src/aspn23/eigen/MeasurementPosition.cpp',
    'src/aspn23/eigen/MeasurementPositionAttitude.cpp',
    'src/aspn23/eigen/MeasurementPositionVelocityAttitude.cpp',
    'src/aspn23/eigen/MeasurementRangeRateToPoint.cpp',
    'src/aspn23/eigen/MeasurementRangeToPoint.cpp',
    'src/aspn23/eigen/MeasurementSatnav.cpp',
    'src/aspn23/eigen/MeasurementSatnavSubframe.cpp',
    'src/aspn23/eigen/MeasurementSatnavWithSvData.cpp',
    'src/aspn23/eigen/MeasurementSpecificForce1D.cpp',
    'src/aspn23/eigen/MeasurementSpeed.cpp',
    'src/aspn23/eigen/MeasurementTemperature.cpp',
    'src/aspn23/eigen/MeasurementTime.cpp',
    'src/aspn23/eigen/MeasurementTimeDifference.cpp',
    'src/aspn23/eigen/MeasurementTimeFrequencyDifference.cpp',
    'src/aspn23/eigen/MeasurementVelocity.cpp',
    'src/aspn23/eigen/aspn_eigen.cpp',
]

aspn_eigen_dep = disabler()

if not get_option('aspn-cpp-eigen').disabled()

    aspn_eigen_include = include_directories('src')

    aspn_eigen_libs = both_libraries('aspn-eigen',
        sources: aspn_eigen_sources,
        include_directories: aspn_eigen_include,
        dependencies: aspn_eigen_deps,
        soversion: meson.project_version(),
        install: true)

    aspn_eigen_dep = declare_dependency(
        link_with: aspn_eigen_libs.get_shared_lib(),
        include_directories: aspn_eigen_include ,
        dependencies: aspn_eigen_deps)

    foreach source : aspn_eigen_sources
        header = source.replace('.cpp', '.hpp')
        install_headers(header, install_dir: get_option('includedir') + '/aspn23/eigen')
    endforeach

    pkg = import('pkgconfig')
    pkg.generate(aspn_eigen_libs,
        name: 'aspn23-eigen',
        description: 'ASPN cpp with eigen matrices',
        version: meson.project_version())

    meson.override_dependency('aspn23-eigen', aspn_eigen_dep)

endif

aspn_stl_sources = [
    'src/aspn23/stl/TypeDirection2DToPoint.cpp',
    'src/aspn23/stl/TypeDirection3DToPoint.cpp',
    'src/aspn23/stl/TypeHeader.cpp',
    'src/aspn23/stl/TypeImageFeature.cpp',
    'src/aspn23/stl/TypeIntegrity.cpp',
    'src/aspn23/stl/TypeKeplerOrbit.cpp',
    'src/aspn23/stl/TypeMetadataheader.cpp',
    'src/aspn23/stl/TypeMounting.cpp',
    'src/aspn23/stl/TypeRemotePoint.cpp',
    'src/aspn23/stl/TypeSatnavClock.cpp',
    'src/aspn23/stl/TypeSatnavObs.cpp',
    'src/aspn23/stl/TypeSatnavSatelliteSystem.cpp',
    'src/aspn23/stl/TypeSatnavSignalDescriptor.cpp',
    'src/aspn23/stl/TypeSatnavSvData.cpp',
    'src/aspn23/stl/TypeSatnavTime.cpp',
    'src/aspn23/stl/TypeTimestamp.cpp',
    'src/aspn23/stl/MetadataBeidouEphemeris.cpp',
    'src/aspn23/stl/MetadataGlonassEphemeris.cpp',
    'src/aspn23/stl/MetadataGpsCnavEphemeris.cpp',
    'src/aspn23/stl/MetadataGpsLnavEphemeris.cpp',
    'src/aspn23/stl/MetadataGpsMnavEphemeris.cpp',
    'src/aspn23/stl/MetadataGpsIonoUtcParameters.cpp',
    'src/aspn23/stl/MetadataGalileoEphemeris.cpp',
    'src/aspn23/stl/MetadataImu.cpp',
    'src/aspn23/stl/MetadataGeneric.cpp',
    'src/aspn23/stl/MetadataImageFeatures.cpp',
    'src/aspn23/stl/MetadataMagneticField.cpp',
    'src/aspn23/stl/MetadataSatnavObs.cpp',
    'src/aspn23/stl/MeasurementImu.cpp',
    'src/aspn23/stl/MeasurementTdoa1Tx2Rx.cpp',
    'src/aspn23/stl/MeasurementTdoa2Tx1Rx.cpp',
    'src/aspn23/stl/MeasurementAccumulatedDistanceTraveled.cpp',
    'src/aspn23/stl/MeasurementAltitude.cpp',
    'src/aspn23/stl/MeasurementAngularVelocity.cpp',
    'src/aspn23/stl/MeasurementAngularVelocity1D.cpp',
    'src/aspn23/stl/MeasurementAttitude2D.cpp',
    'src/aspn23/stl/MeasurementAttitude3D.cpp',
    'src/aspn23/stl/MeasurementBarometer.cpp',
    'src/aspn23/stl/MeasurementDeltaPosition.cpp',
    'src/aspn23/stl/MeasurementDeltaRange.cpp',
    'src/aspn23/stl/MeasurementDeltaRangeToPoint.cpp',
    'src/aspn23/stl/MeasurementDirection2DToPoints.cpp',
    'src/aspn23/stl/MeasurementDirection3DToPoints.cpp',
    'src/aspn23/stl/MeasurementDirectionOfMotion2D.cpp',
    'src/aspn23/stl/MeasurementDirectionOfMotion3D.cpp',
    'src/aspn23/stl/MeasurementFrequencyDifference.cpp',
    'src/aspn23/stl/MeasurementHeading.cpp',
    'src/aspn23/stl/MeasurementImage.cpp',
    'src/aspn23/stl/MeasurementMagneticField.cpp',
    'src/aspn23/stl/MeasurementMagneticFieldMagnitude.cpp',
    'src/aspn23/stl/MeasurementPosition.cpp',
    'src/aspn23/stl/MeasurementPositionAttitude.cpp',
    'src/aspn23/stl/MeasurementPositionVelocityAttitude.cpp',
    'src/aspn23/stl/MeasurementRangeRateToPoint.cpp',
    'src/aspn23/stl/MeasurementRangeToPoint.cpp',
    'src/aspn23/stl/MeasurementSatnav.cpp',
    'src/aspn23/stl/MeasurementSatnavSubframe.cpp',
    'src/aspn23/stl/MeasurementSatnavWithSvData.cpp',
    'src/aspn23/stl/MeasurementSpecificForce1D.cpp',
    'src/aspn23/stl/MeasurementSpeed.cpp',
    'src/aspn23/stl/MeasurementTemperature.cpp',
    'src/aspn23/stl/MeasurementTime.cpp',
    'src/aspn23/stl/MeasurementTimeDifference.cpp',
    'src/aspn23/stl/MeasurementTimeFrequencyDifference.cpp',
    'src/aspn23/stl/MeasurementVelocity.cpp',
    'src/aspn23/stl/aspn_stl.cpp',
]

aspn_stl_dep = disabler()

if not get_option('aspn-cpp-stl').disabled()

    aspn_stl_include = include_directories('src')

    aspn_stl_libs = both_libraries('aspn-stl',
        sources: aspn_stl_sources,
        include_directories: aspn_stl_include,
        dependencies: aspn_stl_deps,
        soversion: meson.project_version(),
        install: true)

    aspn_stl_dep = declare_dependency(
        link_with: aspn_stl_libs.get_shared_lib(),
        include_directories: aspn_stl_include ,
        dependencies: aspn_stl_deps)

    foreach source : aspn_stl_sources
        header = source.replace('.cpp', '.hpp')
        install_headers(header, install_dir: get_option('includedir') + '/aspn23/stl')
    endforeach

    pkg = import('pkgconfig')
    pkg.generate(aspn_stl_libs,
        name: 'aspn23-stl',
        description: 'ASPN cpp with stl matrices',
        version: meson.project_version())

    meson.override_dependency('aspn23-stl', aspn_stl_dep)

endif
