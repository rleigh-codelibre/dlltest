mkdir 2013d
cd 2013d
cmake -G "Visual Studio 12 2013 Win64" -DBUILD_SHARED_LIBS=ON ..
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

mkdir 2013s
cd 2013s
cmake -G "Visual Studio 12 2013 Win64" -DBUILD_SHARED_LIBS=OFF ..
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
