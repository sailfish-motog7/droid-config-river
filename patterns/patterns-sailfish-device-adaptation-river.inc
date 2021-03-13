%package -n patterns-sailfish-device-adaptation-river
Summary: Jolla HW Adaptation river
Requires: droid-hal-river
Requires: droid-hal-river-img-boot
Requires: droid-hal-river-kernel-modules
Requires: droid-config-river-sailfish
Requires: droid-config-river-pulseaudio-settings
Requires: droid-config-river-policy-settings
Requires: droid-config-river-preinit-plugin
Requires: droid-config-river-flashing
Requires: droid-config-river-bluez5
Requires: droid-hal-version-river

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Sensors
Requires: hybris-libsensorfw-qt5

# FP
Requires: droid-biometry-fp
Requires: droid-fake-crypt
Requires: sailfish-fpd-community

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: qt5-feedback-haptics-native-vibrator

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-hidl
Requires: audiosystem-passthrough
# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# Add GStreamer v1.0 as standard
Requires: gstreamer1.0
Requires: gstreamer1.0-plugins-good
Requires: gstreamer1.0-plugins-base
Requires: gstreamer1.0-plugins-bad
Requires: nemo-gstreamer1.0-interfaces
# For devices with droidmedia and gst-droid built, see HADK pdf for more information
Requires: gstreamer1.0-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

# Flashlight
Requires: jolla-settings-system-flashlight

# USB mode controller
Requires: usb-moded

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: sailfish-devicelock-fpd

# Enable home encryption
#Requires: sailfish-device-encryption

# For GPS
Requires: geoclue-provider-hybris

# For FM radio on some QCOM devices
#Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
#Requires: jolla-mediaplayer-radio

# NFC for devices using Android 8 or newer as base
Requires: nfcd-binder-plugin
Requires: jolla-settings-system-nfc

# Telephony
Requires: ofono-ril-binder-plugin

# Required for mobile data
Requires: dummy_netd

# Bluetooth
Requires: bluebinder

# Camera resolutions
Requires: camera-settings-plugin

# Suspend workaround for Wi-Fi on newer Qualcomm devices
#Requires: sailfish-connman-plugin-suspend

# Browser video acceleration
#Requires: gmp-droid

%description -n patterns-sailfish-device-adaptation-river
Pattern with packages for river HW Adaptation

%files -n patterns-sailfish-device-adaptation-river
