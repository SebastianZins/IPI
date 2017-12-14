cmake_minimum_required(VERSION 3.0)

project(ipk-uebung6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

include(CheckCXXCompilerFlag)

function(enable_cxx_compiler_flag_if_supported flag)
    string(FIND "${CMAKE_CXX_FLAGS}" "${flag}" flag_already_set)
    if(flag_already_set EQUAL -1)
        check_cxx_compiler_flag("${flag}" flag_supported)
        if(flag_supported)
            set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${flag}" PARENT_SCOPE)
        endif()
        unset(flag_supported CACHE)
    endif()
endfunction()

add_executable(myvector main_myvector.cc myvector.cc)
add_executable(errorvalue main_errorvalue.cc errorvalue.cc)

