all: mergeSort.o bubbleSort.o linearSearch.o binarySearch.o tests.o
	g++ -Wall -O0  mergeSort.o bubbleSort.o linearSearch.o binarySearch.o tests.o -o Test_Now

fast: mergeSort.o bubbleSort.o linearSearch.o binarySearch.o tests.o
	g++ -Wall -O3  mergeSort.o bubbleSort.o linearSearch.o binarySearch.o tests.o -o Test_Now
	i
bubbleSort.o: bubbleSort.cpp sort.h 
	g++ -c bubbleSort.cpp

mergeSort.o: mergeSort.cpp sort.h
	g++ -c mergeSort.cpp

binarySearch.o: binarySearch.cpp search.h
	g++ -c binarySearch.cpp

linearSeach.o: linearSearch.cpp search.h
	g++ -c linearSearch.cpp

tests.o: tests.cpp Timer.h search.h sort.h
	g++ -c tests.cpp
clean:
	rm *.o
	rm Test_Now
