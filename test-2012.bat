mkdir 2012d
cd 2012d
cmake -G "Visual Studio 11 2012 Win64" -DBUILD_SHARED_LIBS=ON ..
cmake --build . --config Debug
Debug\testa
Debug\testb
Debug\testc
Debug\testd
cmake --build . --config Release
Release\testa
Release\testb
Release\testc
Release\testd
cd ..

mkdir 2012s
cd 2012s
cmake -G "Visual Studio 11 2012 Win64" -DBUILD_SHARED_LIBS=OFF ..
cmake --build . --config Debug
Debug\testa
Debug\testb
Debug\testc
Debug\testd
cmake --build . --config Release
Release\testa
Release\testb
Release\testc
Release\testd
cd ..
