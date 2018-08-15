#include <benchmark/benchmark.h>
#include <ifm3d/camera.h>

static void BM_cam_to_json(benchmark::State& state)
{
  auto cam = ifm3d::Camera::MakeShared();

  // bechmark frame work times this loop
  for (auto _ : state)
    {
      auto j = cam->ToJSON();
    }
}
BENCHMARK(BM_cam_to_json);

BENCHMARK_MAIN();
