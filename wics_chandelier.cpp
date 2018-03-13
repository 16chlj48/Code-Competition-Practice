#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cout << "input: ";
	cin >> num;

	if (num >= 3 && num < 4294967295) {

		int count = 0;

		for (int i = num; i > 0; i--) {

			for (int j = 0; j < i; j++) {
				count++;
			}
		}
		int price;
		price = 100 * count;
		cout << "Price: $" << price << endl;

		for (int i = num; i > 0; i--) {

			for (int s = 0; s < num-i; s++) {
				cout << " ";
			}
				for (int j = 0; j < i-1; j++) {

					cout << "$";

				if (i % 2 == 0) {
					cout << "!";
				}
				else if (i%2 !=0 && i>1){
					cout << "-";
				}
			}
			cout << "$";
			cout << endl;	
		}
	}
	return 0;
}
