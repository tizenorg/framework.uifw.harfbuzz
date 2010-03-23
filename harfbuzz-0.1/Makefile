## Process this file with automake to produce Makefile.in
CC=gcc
INCLUDE=-I ./include -I /usr/include/freetype2/ -I /usr/include/freetype2/freetype/ -I /usr/include/freetype2/freetype/config/

OPTIONS=-g -FPIC 

MAINSOURCES =  \
	src/harfbuzz-dump.c \
	src/harfbuzz-shaper-all.c \
	src/harfbuzz-external.c \
	src/harfbuzz.c
	
	OBJECTS =  \
	harfbuzz-dump.o \
	harfbuzz-shaper-all.o \
	harfbuzz-external.o \
	harfbuzz.o


TARGET=libharfbuzz.so
library :
	cc -Wall $(INCLUDE) $(OPTIONS) -c $(MAINSOURCES)	

all: library
	cc -shared -Wl,-soname,$(TARGET) -o $(TARGET) $(OBJECTS)
install:
	mkdir -p debian/tmp/usr/lib
	mv $(TARGET) debian/tmp/usr/lib
	mkdir -p debian/tmp/usr/include/harfbuzz
	cp include/* debian/tmp/usr/include/harfbuzz

clean:
	rm -rf *.o *.so
