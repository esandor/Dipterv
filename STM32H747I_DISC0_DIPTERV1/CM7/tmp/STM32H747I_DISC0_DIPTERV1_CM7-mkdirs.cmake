# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/esandor/STM32Cube/STM32H747I/STM32H747I_DISC0_DIPTERV1/CM7"
  "/home/esandor/STM32Cube/STM32H747I/STM32H747I_DISC0_DIPTERV1/CM7/build"
  "/home/esandor/STM32Cube/STM32H747I/STM32H747I_DISC0_DIPTERV1/CM7"
  "/home/esandor/STM32Cube/STM32H747I/STM32H747I_DISC0_DIPTERV1/CM7/tmp"
  "/home/esandor/STM32Cube/STM32H747I/STM32H747I_DISC0_DIPTERV1/CM7/src/STM32H747I_DISC0_DIPTERV1_CM7-stamp"
  "/home/esandor/STM32Cube/STM32H747I/STM32H747I_DISC0_DIPTERV1/CM7/src"
  "/home/esandor/STM32Cube/STM32H747I/STM32H747I_DISC0_DIPTERV1/CM7/src/STM32H747I_DISC0_DIPTERV1_CM7-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/esandor/STM32Cube/STM32H747I/STM32H747I_DISC0_DIPTERV1/CM7/src/STM32H747I_DISC0_DIPTERV1_CM7-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/esandor/STM32Cube/STM32H747I/STM32H747I_DISC0_DIPTERV1/CM7/src/STM32H747I_DISC0_DIPTERV1_CM7-stamp${cfgdir}") # cfgdir has leading slash
endif()
