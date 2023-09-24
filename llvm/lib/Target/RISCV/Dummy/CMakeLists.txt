
cmake_minimum_required(VERSION 3.26)

project(Dummy)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_COMPILER "clang++-17")
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")

add_llvm_component_library(LLVMRISCVDummy
  dummy.cpp

  ADD_TO_COMPONENT
  RISCV
)

# TODO(uzleo): effort towards making this lib shared-linkable 
# to improve link times for llc 

#add_library(Dummy
#  dummy.cpp
#)
