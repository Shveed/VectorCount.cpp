#include "stdafx.h"
#include "vector.h"
using namespace std;

int main()
{
	double num, mult;
	vector v1;
	vector v2;
	vector v3;
	char op;
	printMenu();
	cin >> op;

	switch (op)
	{
	case 'a':
	case 'A':
		cout << "Enter x1 y1 x2 y2 coordinates" << endl;
		cin >> v1.x >> v1.y >> v2.x >> v2.y;
		v3 = add(&v1, &v2);
		printVector(&v3);
		break;

	case 's':
	case 'S':
		cout << "Enter x1 y1 x2 y2 coordinates" << endl;
		cin >> v1.x >> v1.y >> v2.x >> v2.y;
		v3 = substract(&v1, &v2);
		printVector(&v3);
		break;

	case 'v':
	case 'V':
		cout << "Enter x1 y1 x2 y2 coordinates" << endl;
		cin >> v1.x >> v1.y >> v2.x >> v2.y;
		mult = v1.x * v2.x + v1.y * v2.y;
		cout << "Multiplication equals " << mult << endl;
		break;

	case 'n':
	case 'N':
		cout << "Enter x1 y1 coordinates" << endl;
		cin >> v1.x >> v1.y;
		cout << "Enter number" << endl;
		cin >> num;
		v3 = multiplyNumVec(num, &v1);
		printVector(&v3);
		break;

	case 'l':
	case 'L':
		cout << "Enter x1 y1 coordinates" << endl;
		cin >> v1.x >> v1.y;
		cout << "Length of your vector is " << vectorLength(v1) << endl;
		break;
	default:
		cout << "Error" << endl;
	}
	system("pause");
	return 0;
}
