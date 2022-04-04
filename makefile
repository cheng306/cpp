# exe: objects/source1.o objects/Derived.o objects/Base.o 
# 	g++ -std=c++17  objects/source1.o objects/Derived.o objects/Base.o -o exe

exe: objects/source1.o 
	g++ -std=c++17  objects/source1.o -o exe

objects/source1.o: sources/source1.cpp headers/header.hpp
	g++ -std=c++17 -c sources/source1.cpp -o objects/source1.o

# objects/source2.o: sources/source2.cpp headers/header2.hpp
# 	g++ -std=c++17  -c sources/source2.cpp -o objects/source2.o

# objects/Derived.o: sources/Derived.cpp sources/Derived.hpp sources/Base.hpp sources/Base.cpp
# 	g++ -std=c++17  -c sources/Derived.cpp -o objects/Derived.o

# objects/Base.o: sources/Base.hpp sources/Base.cpp
# 	g++ -std=c++17 -c sources/Base.cpp -o objects/Base.o

# objects/SampleClass: sources/SampleClass.hpp
# 	g++ -std=c++17  -c sources/SampleClass.cpp objects/SampleClass.o