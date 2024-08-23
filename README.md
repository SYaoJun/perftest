# vcpkg & pprof
## single file
```c
g++ -o my_program main.cpp -lprofiler -I /opt/homebrew/Cellar/gperftools/2.15/include -L /opt/homebrew/Cellar/gperftools/2.15/lib
./my_program  
go tool pprof --http=":8080" ./my_program cpu_profile.prof 
```

## CMake
```cmake
vcpkg install
cmake -DCMAKE_TOOLCHAIN_FILE=$VCPKG_ROOT/scripts/buildsystems/vcpkg.cmake ..
```