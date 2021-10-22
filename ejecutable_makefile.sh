CC = gcc.exe
DD = gcc.exe
Practica_01.exe:main.o
gcc.exe -Wall -g -c main.c -o main.o
$(DD) -o Practica_01.exe main.o