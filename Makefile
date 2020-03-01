CC=g++
CCFLAGS=-std=c++11

volimage: VolImageDriver.cpp VolImage.cpp VolImage.h
	$(CC) $(CCFLAGS) -g -o volimage VolImageDriver.cpp VolImage.cpp

.cpp.o:
	$(CC) $(CCFLAGS) -c $<

clean:
	rm -f *.o
