//****************************************************************************************************************************
//Program name: "Arrays of floating point numbers". This program takes in values from the user and stores it in an array.    *
//The program than takes those array values and computes the variance, returning the variance value to the user.             *                                                          *
//                                                                                                                           *
//This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License  *
//version 3 as published by the Free Software Foundation.  This program is distributed in the hope that it will be useful,   *
//but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See   *
//the GNU General Public License for more details A copy of the GNU General Public License v3 is available here:             *
//<https://www.gnu.org/licenses/>.                                                                                           *
//****************************************************************************************************************************

//Author: Adam Kaci
//Author email: adamkaci3@csu.fullerton.edu
//Program name: Arrays of floating point numbers
//Programming languages: Two modules in C, two in X86, one in C++, and one in bash.
//Date program began: 2024-March-1
//Date of last update: 2024-March-17
//Files in this program: input_array.asm, main.c, manager.asm, output_array.c, compute_variance.cpp
//Testing: Alpha testing completed.  All functions are correct.
//Status: Ready for release to the customers

//Purpose of this program:
//  This program is the main frontend that communicates with all of the backend functions

//This file
//  File name: main.c
//  Language: C language.
//  Max page width: 124 columns
//  Compile: gcc  -m64 -Wall -no-pie -o main.o -std=c2x -c main.c
//  Link: g++ -m64 -no-pie -o learn.out isfloat.o manager.o input_array.o main.o output_array.o compute_variance.o -std=c++2a -Wall -z noexecstack -lm

#include <stdio.h>

extern double managerOutputs();
int main() {
    printf("Welcome to Arrays of floating point numbers.\n");
    printf("Brought to you by Adam Kaci\n\n");
    
    double variance = managerOutputs(); // Capture the returned variance

    printf("\nMain received %f, and will keep it for future use.", variance);
    printf("\nMain will return 0 to the operating system. Bye.\n");

    return 0;
}