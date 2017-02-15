install:
	g++ Rectangle.cpp -c -std=c++11
	g++ Rectangle.o rectangle_main.cpp -o rectangle_main -std=c++11
clean:
	rm -rf *.o rectangle_main

run:
	./rectangle_main