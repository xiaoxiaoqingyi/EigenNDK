LOCAL_PATH:=$(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := NDKUtils
LOCAL_SRC_FILES := com_magicing_eigenndk_NDKUtils.cpp
LOCAL_C_INCLUDES += $(LOCAL_PATH)/Eigen
include $(BUILD_SHARED_LIBRARY)
