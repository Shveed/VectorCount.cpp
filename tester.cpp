#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
	double vx1, vy1, vx2, vy2, vx3, vy3, num, mult, l;
	char op;
	cout << "-------------------------------" << endl;
	cout << "Choose the operation:"			  << endl;
	cout << "S - Substract vectors"			  << endl;
	cout << "A - Add vectors "				  << endl;
	cout << "V - Multiply vector and vector"  << endl;
	cout << "N - Multiply number and vector"  << endl;
	cout << "L - Lengths of vector"			  << endl;
	cout << "-------------------------------" << endl;
	cin >> op;
	
	switch (op)
	{
		case 'a':
		case 'A':
			cout << "Enter x1 y1 x2 y2 coordinates" << endl;
			cin >> vx1 >> vy1 >> vx2 >> vy2;
			vx3 = add(vx1, vx2);
			vy3 = add(vy1, vy2);
			printVector(vx3, vy3);
			break;

		case 's':
		case 'S':
			cout << "Enter x1 y1 x2 y2 coordinates" << endl;
			cin >> vx1 >> vy1 >> vx2 >> vy2;
			vx3 = substract(vx1, vx2);
			vy3 = substract(vy1, vy2);
			printVector(vx3, vy3);
			break;

		case 'v':
		case 'V':
			cout << "Enter x1 y1 x2 y2 coordinates" << endl;
			cin >> vx1 >> vy1 >> vx2 >> vy2;
			mult = vx1 * vx2 + vy1 * vy2;
			cout << "Multiplication equals " << mult << endl;
			break;

		case 'n':
		case 'N':
			cout << "Enter x1 y1 coordinates" << endl;
			cin >> vx1 >> vy1;
			cout << "Enter number" << endl;
			cin >> num;
			vx3 = multiplyNumVec(num, vx1);
			vy3 = multiplyNumVec(num, vy1);
			printVector(vx3, vy3);
			break;

		case 'l':
		case 'L':
			cout << "Enter x1 y1 coordinates" << endl;
			cin >> vx1 >> vy1;
			l = sqrt(pow(vx1, 2) + pow(vy1, 2));
			cout << "Length of your vector is " << l << endl;
			break;
		default:
			cout << "Error" << endl;
	}
	system("pause");
	return 0;
}
