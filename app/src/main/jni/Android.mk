LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := wubi_service

LOCAL_CFLAGS := \
                -DANDROID \
                -DOS_ANDROID \

LOCAL_SRC_FILES += \
                    main.cpp \
                    wubi.cpp \
                    com_example_wubi_WubiCodeService.cpp


LOCAL_C_INCLUDES += $(LOCAL_PATH) \

LOCAL_LDLIBS += -llog \
                -lz

include $(BUILD_SHARED_LIBRARY)
