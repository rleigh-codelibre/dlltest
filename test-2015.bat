mkdir 2015d
cd 2015d
cmake -G "Visual Studio 14 2015 Win64" -DBUILD_SHARED_LIBS=ON ..
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
Release\testall
cd ..

mkdir 2015s
cd 2015s
cmake -G "Visual Studio 14 2015 Win64" -DBUILD_SHARED_LIBS=OFF ..
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
Release\testall
cd ..
