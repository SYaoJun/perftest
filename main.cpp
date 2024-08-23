#include <iostream>
#include "gperftools/profiler.h"

void heavy_computation() {
    for (volatile int i = 0; i < 100000000; ++i);
}

int main() {
    ProfilerStart("cpu_profile.prof");

    heavy_computation();

    ProfilerStop();
    std::cout << "Performance profiling completed." << std::endl;
    return 0;
}

