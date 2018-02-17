#include "vector.h"
#include "iostream"
using namespace std;

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
