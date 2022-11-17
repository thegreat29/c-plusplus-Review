#include <iostream>
using namespace std;

int main()
{
	

	/*for (int j = 1; j <= 10; j++) {

		
		if (j % 2) {
			cout << "odd ";
		}
		else {
			cout << "even ";
		}
		cout << j << "\n";

	}*/

	/*int b = 0;
	while (b < 10) {

		cout << b;
		b++;
	}*/

	// 
	int total = 0;
	
	for (int d = 1; d <= 10; d++) {
		if (d % 2 == 0) {
			total++;
		}

		if (d == 5) {
			total += 5;
		}
	}

	cout << total;

	return 0;
}
