/*
 * Cross platform macros.
 *
 */
#ifndef URDF_SENSOR__DECL_H_
#define URDF_SENSOR__DECL_H_

#include <ros/macros.h>

#ifdef ROS_BUILD_SHARED_LIBS  // ros is being built around shared libraries
  #ifdef urdf_sensor_EXPORTS  // we are building a shared lib/dll
    #define URDF_SENSOR_DECL ROS_HELPER_EXPORT
  #else  // we are using shared lib/dll
    #define URDF_SENSOR_DECL ROS_HELPER_IMPORT
  #endif
#else  // ros is being built around static libraries
  #define URDF_SENSOR_DECL
#endif

#endif