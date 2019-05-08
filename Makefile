
all: app

clean:
	rm -rf app app.o geom.o mygeom.o

app: app.o geom.o mygeom.o
	g++ -o app app.o geom.o mygeom.o

app.o: app.cpp geom.h
	g++ -c -o app.o app.cpp

geom.o: geom.cpp geom.h
	g++ -c -o geom.o geom.cpp

mygeom.o: mygeom.cpp mygeom.h geom.h
	g++ -c -o mygeom.o mygeom.cpp

