typedef struct {
	int x;
	int y;
}vector;

#ifndef VECTOR_H
#define VECTOR_H
#include <cmath>
#include <string.h>
#include <iostream>

void printMenu();
void printVector(vector *v);
vector add(vector *v1, vector *v2);
vector substract(vector *v1, vector *v2);
vector multiplyNumVec(double n, vector *v1);
double vectorLength(vector v);

#endif VECTOR_H
