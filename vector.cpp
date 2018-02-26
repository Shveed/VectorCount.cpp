#include "stdafx.h"
#include "vector.h"
#include "iostream"
using namespace std;

void printMenu()
{
	cout << "-------------------------------" << endl;
	cout << "Choose the operation:" << endl;
	cout << "S - Substract vectors" << endl;
	cout << "A - Add vectors " << endl;
	cout << "V - Multiply vector and vector" << endl;
	cout << "N - Multiply number and vector" << endl;
	cout << "L - Lengths of vector" << endl;
	cout << "-------------------------------" << endl;
}

void printVector (vector *v)
{
	cout << "New vector is (" << v->x << ';' << v->y << ')' << endl;
}

vector add(vector *v1, vector *v2)
{
	vector v;
	v.x = v1->x + v2->x;
	v.y = v1->y + v2->y;
	return v;
}

vector substract(vector *v1, vector *v2)
{
	vector v;
	v.x = v1->x - v2->x;
	v.y = v1->y - v2->y;
	return v;
}

vector multiplyNumVec(double n, vector *v1)
{
	vector v;
	v.x = v1->x * n;
	v.y = v1->y * n;
	return v;
}

double vectorLength(vector v)
{
	
	return (sqrt(pow(v.x, 2) + pow(v.y, 2)));
}
