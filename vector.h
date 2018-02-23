typedef struct vector {
	int x;
	int y;
}vector;

#ifndef VECTOR_H
#define VECTOR_H
#include <cmath>
#include <string.h>
#include <iostream>

void printMenu();
void printVector(double vx3, double vy3);
double add(double a, double b);
double substract(double a, double b);
double multiplyNumVec(double n, double coord);
double vectorLength(vector v);

#endif VECTOR_H
