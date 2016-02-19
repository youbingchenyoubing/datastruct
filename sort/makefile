mergegort:main_mergesort.o mergesort.o sort.o
	g++ -o mergesort  main_mergesort.o mergesort.o sort.o -g -std=c++11
main_mergesort.o:main_mergesort.cpp  mergesort.h
	g++ -c main_mergesort.cpp -g  -std=c++11
mergesort.o:mergesort.cpp mergesort.h
	g++ -c mergesort.cpp -g  -std=c++11
sort.o:sort.h sort.cpp
	g++ -c sort.cpp -g   -std=c++11
clean:
	rm *.o
