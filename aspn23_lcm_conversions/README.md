# ASPN23-LCM Conversions

This Python module contains a set of functions for converting between ASPN-LCM and ASPN-Python.

# Release Versioning

This project implements a versioning scheme similar to semantic versioning
[SemVer](https://semver.org/), but much lighter. **This project does not define an API and therefore
has no concrete definition of what constitutes a breaking change.**

Nonetheless, if a new release would require significant changes downstream we will attempt to
communicate that by incrementing the major version. If there are new features or newly deprecated
features, we will attempt to communicate that by incrementing the minor version. If the changes are
primarily bug fixes, we will attempt to communicate that by incrementing the patch version.

However, we make no concrete promises about whether or not a given release will be compatible with
your project downstream. You may experience breaking changes on minor or patch releases. If this is
an issue for your project, we recommend you pin to a specific version of this project rather than a
range.

# Release Notes

## 2.0.0

This module now provides conversions for ASPN-LCM 2.0.0.

## 1.0.1

Fixed marshalling of null, fixed-length arrays (such as the quaternion field). ASPN-Python and
ASPN-LCM (Python) represent null, fixed-length arrays differently. In ASPN-Python, these arrays are
`None`. In ASPN-LCM (Python), these arrays are filled with  `NaN`s. Previously this difference was
not taken into account.

## 1.0.0

Initial release.
