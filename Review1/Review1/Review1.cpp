#include<iostream>
using namespace std;


int main()
{
	int numone, numtwo;
	char op;

	cout << "Enter a number:";
	cin >> numone;
	cout << "Enter a second number:";
	cin >> numtwo;
	cout << "Enter a Operator(/, + , * , -):";
	cin >> op;

	switch (op) {
	case '+':
		cout << numone << "+" << numtwo << "=" << numone + numtwo;
		break;
	case '*':
		cout << numone << "*" << numtwo << "=" << numone * numtwo;
		break;
	case '/':
		cout << numone << "/" << numtwo << "=" << numone / numtwo;
		break;
	case '-':
		cout << numone << "-" << numtwo << "=" << numone - numtwo;
		break;
	default:
		cout << "Invalid input";
		break;
	}



	return 0;
}