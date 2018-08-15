set(GBENCH_DIR "/opt/benchmark-1.3.0")
include_directories(
  ${GBENCH_DIR}/include
  )
link_directories(
  ${GBENCH_DIR}/lib
  )

# Google benchmark compiled with GCC needs `-pthread`
find_package(Threads)

add_executable(ifm3d-tojson-bench ifm3d-tojson-bench.cpp)
target_link_libraries(
  ifm3d-tojson-bench
  benchmark
  ifm3d_camera_shared
  ${CMAKE_THREAD_LIBS_INIT}
  )
