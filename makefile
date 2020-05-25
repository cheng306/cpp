

exe: sources/source1.o
	g++ sources/source1.o -o exe


sources/source1.o: sources/source1.cpp headers/header.hpp
	g++ -c sources/source1.cpp -o sources/source1.o


sources/source1.cpp:
	#ls

non_exist:
	#ls