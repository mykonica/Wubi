# This file is generated by auto-build.py, DON'T modify manually!

#APP_ABI := armeabi x86
APP_ABI := armeabi

APP_PROJECT_PATH := $(call my-dir)

APP_BUILD_SCRIPT := $(APP_PROJECT_PATH)/Android.mk

APP_STL := gnustl_static

APP_CFLAGS += -DOS_ANDROID \
              -DANDROID \
              -DNVALGRIND \
              -DDEBUG

APP_CPPFLAGS += -std=gnu++11

APP_CPPFLAGS += -fexceptions \
                -frtti \
                -fPIC

NDK_TOOLCHAIN_VERSION := 4.9

APP_PLATFORM := android-9

