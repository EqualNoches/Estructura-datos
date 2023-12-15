CC := g++
CFLAGS := -std=c++17 -Wall -Wextra
LIBS := -lsfml-graphics -lsfml-window -lsfml-system
SFML_PATH := /src/include # Replace this with the actual path to your SFML installation

OUTPUT := triangulo

all: $(OUTPUT)

$(OUTPUT): triangulo.o
	$(CC) -o $@ $^ $(LIBS)

triangulo.o: triangulo.cpp
	$(CC) $(CFLAGS) -c -o $@ $< -I$(SFML_PATH)

clean:
	del /Q $(OUTPUT).exe *.o

run: all
	$(OUTPUT).exe
