#!/bin/bash

clear

# g++ -o model insertion_sort.cpp -m64 -g -I"include" -L"lib" -Wall -lSDL2main -lSDL2 -lSDL2_image
# g++ -o model selection_sort.cpp -m64 -g -I"include" -L"lib" -Wall -lSDL2main -lSDL2 -lSDL2_image
g++ -o model quick_sort.cpp -m64 -g -I"include" -L"lib" -Wall -lSDL2main -lSDL2 -lSDL2_image

./model
# valgrind --leak-check=full --track-origins=yes --show-reachable=yes -v ./model

rm model
