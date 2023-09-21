cmake_minimum_required (VERSION 2.6...3.10.2)
project (CGenerator)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(OpenSSL)

if (OPENSSL_FOUND)
    message (STATUS "OPENSSL found")

    set(CMAKE_C_FLAGS "-DOPENSSL")
    if(CMAKE_VERSION VERSION_LESS 3.4)
        include_directories(${OPENSSL_INCLUDE_DIR})
        include_directories(${OPENSSL_INCLUDE_DIRS})
        link_directories(${OPENSSL_LIBRARIES})
    endif()

    message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else()
    message (STATUS "OpenSSL Not found.")
endif()

set(pkgName "quicksilver_web_api")

# this default version can be overridden in PreTarget.cmake
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)

if( (DEFINED CURL_INCLUDE_DIR) AND (DEFINED CURL_LIBRARIES))
    include_directories(${CURL_INCLUDE_DIR})
    set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else()
    find_package(CURL 7.58.0 REQUIRED)
    if(CURL_FOUND)
        include_directories(${CURL_INCLUDE_DIR})
        set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
    else(CURL_FOUND)
        message(FATAL_ERROR "Could not find the CURL library and development files.")
    endif()
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/_device_fw_last_update_result_get_200_response.c
    model/_device_fw_update_post_200_response.c
    model/_device_ird_fw_slot__slot__get_200_response.c
    model/_session_refresh_post_200_response.c
    model/_sessions_post_201_response.c
    model/_socket_get_200_response.c
    model/_socket_get_200_response_one_of.c
    model/_socket_get_200_response_one_of_1.c
    model/_socket_get_200_response_one_of_2.c
    model/_socket_get_200_response_one_of_3.c
    model/_user_change_password_post_request.c
    model/certificate.c
    model/cfg_type.c
    model/client.c
    model/configuration_request.c
    model/configuration_request_gps.c
    model/configuration_request_ird.c
    model/configuration_request_outgoing_firewall.c
    model/configuration_request_port_fwd.c
    model/configuration_response.c
    model/configuration_response_gps.c
    model/configuration_response_ird.c
    model/configuration_response_outgoing_firewall.c
    model/configuration_response_port_fwd.c
    model/data_usage_entry.c
    model/device_info.c
    model/dhcp_range.c
    model/dns_settings_request.c
    model/dns_settings_response.c
    model/eth_settings_request.c
    model/eth_settings_request_dhcp.c
    model/eth_settings_response.c
    model/event_name.c
    model/get_user.c
    model/gps_dyn_platform_model.c
    model/gps_fix.c
    model/ird_boot_info.c
    model/ird_constellation.c
    model/ird_hw.c
    model/ird_hw_test_report.c
    model/ird_mode.c
    model/ird_settings.c
    model/ird_sim.c
    model/ird_state.c
    model/notification.c
    model/outgoing_firewall_rule.c
    model/patch_outgoing_firewall_rule.c
    model/patch_port_fwd_entry.c
    model/patch_user.c
    model/port_fwd_entry.c
    model/post_user.c
    model/time_info.c
    model/wi_fi_settings_request.c
    model/wi_fi_settings_response.c
    api/ConfigurationAPI.c
    api/DeviceAPI.c
    api/EventsAPI.c
    api/NotificationsAPI.c
    api/SessionAPI.c
    api/StartupConfigurationAPI.c
    api/UserAPI.c
    api/UsersAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/_device_fw_last_update_result_get_200_response.h
    model/_device_fw_update_post_200_response.h
    model/_device_ird_fw_slot__slot__get_200_response.h
    model/_session_refresh_post_200_response.h
    model/_sessions_post_201_response.h
    model/_socket_get_200_response.h
    model/_socket_get_200_response_one_of.h
    model/_socket_get_200_response_one_of_1.h
    model/_socket_get_200_response_one_of_2.h
    model/_socket_get_200_response_one_of_3.h
    model/_user_change_password_post_request.h
    model/certificate.h
    model/cfg_type.h
    model/client.h
    model/configuration_request.h
    model/configuration_request_gps.h
    model/configuration_request_ird.h
    model/configuration_request_outgoing_firewall.h
    model/configuration_request_port_fwd.h
    model/configuration_response.h
    model/configuration_response_gps.h
    model/configuration_response_ird.h
    model/configuration_response_outgoing_firewall.h
    model/configuration_response_port_fwd.h
    model/data_usage_entry.h
    model/device_info.h
    model/dhcp_range.h
    model/dns_settings_request.h
    model/dns_settings_response.h
    model/eth_settings_request.h
    model/eth_settings_request_dhcp.h
    model/eth_settings_response.h
    model/event_name.h
    model/get_user.h
    model/gps_dyn_platform_model.h
    model/gps_fix.h
    model/ird_boot_info.h
    model/ird_constellation.h
    model/ird_hw.h
    model/ird_hw_test_report.h
    model/ird_mode.h
    model/ird_settings.h
    model/ird_sim.h
    model/ird_state.h
    model/notification.h
    model/outgoing_firewall_rule.h
    model/patch_outgoing_firewall_rule.h
    model/patch_port_fwd_entry.h
    model/patch_user.h
    model/port_fwd_entry.h
    model/post_user.h
    model/time_info.h
    model/wi_fi_settings_request.h
    model/wi_fi_settings_response.h
    api/ConfigurationAPI.h
    api/DeviceAPI.h
    api/EventsAPI.h
    api/NotificationsAPI.h
    api/SessionAPI.h
    api/StartupConfigurationAPI.h
    api/UserAPI.h
    api/UsersAPI.h

)

include(PreTarget.cmake OPTIONAL)

set(PROJECT_VERSION_STRING "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

# Add library with project file with project name as library name
add_library(${pkgName} ${SRCS} ${HDRS})
# Link dependent libraries
if(NOT CMAKE_VERSION VERSION_LESS 3.4)
    target_link_libraries(${pkgName} PRIVATE OpenSSL::SSL OpenSSL::Crypto)
endif()
target_link_libraries(${pkgName} PUBLIC ${CURL_LIBRARIES} )
target_include_directories(
    ${pkgName} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

include(PostTarget.cmake OPTIONAL)

# installation of libraries, headers, and config files
if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in)
    install(TARGETS ${pkgName} DESTINATION lib)
else()
    include(GNUInstallDirs)
    install(TARGETS ${pkgName} DESTINATION lib EXPORT ${pkgName}Targets)

    foreach(HDR_FILE ${HDRS})
        get_filename_component(HDR_DIRECTORY ${HDR_FILE} DIRECTORY)
        get_filename_component(ABSOLUTE_HDR_DIRECTORY ${HDR_DIRECTORY} ABSOLUTE)
        file(RELATIVE_PATH RELATIVE_HDR_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${ABSOLUTE_HDR_DIRECTORY})
        install(FILES ${HDR_FILE} DESTINATION include/${pkgName}/${RELATIVE_HDR_PATH})
    endforeach()

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            VERSION "${PROJECT_VERSION_STRING}"
            COMPATIBILITY AnyNewerVersion
    )

    export(EXPORT ${pkgName}Targets
            FILE "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Targets.cmake"
            NAMESPACE ${pkgName}::
            )

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            @ONLY
            )

    set(ConfigPackageLocation lib/cmake/${pkgName})
    install(EXPORT ${pkgName}Targets
            FILE
            ${pkgName}Targets.cmake
            NAMESPACE
            ${pkgName}::
            DESTINATION
            ${ConfigPackageLocation}
            )
    install(
            FILES
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            DESTINATION
            ${ConfigPackageLocation}
    )
endif()

# make installation packages
include(Packing.cmake OPTIONAL)

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled library to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-ConfigurationAPI.c
#    unit-tests/manual-DeviceAPI.c
#    unit-tests/manual-EventsAPI.c
#    unit-tests/manual-NotificationsAPI.c
#    unit-tests/manual-SessionAPI.c
#    unit-tests/manual-StartupConfigurationAPI.c
#    unit-tests/manual-UserAPI.c
#    unit-tests/manual-UsersAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable does not support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created library to executable and dependent library curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
