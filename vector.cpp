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

void printVector(double vx3, double vy3)
{
	cout << "New vector is (" << vx3 << ';' << vy3 << ')' << endl;
}

double add(double a, double b)
{
	return a + b;
}

double substract(double a, double b)
{
	return a - b;
}

double multiplyNumVec(double n, double coord)
{
	return n * coord;
}

double vectorLength(vector v)
{
	
	return (sqrt(pow(v.x, 2) + pow(v.y, 2)));
}
