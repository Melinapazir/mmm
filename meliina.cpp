#include <iostream>
#include <string>
using namespace std;

int main() {
	int num1, num2;

	cout << "3: ";
	cin >> num1;
	cout << "5: ";
	cin >> num2;

	string concatenated = to_string(num1) + to_string(num2);

	int sum = num1 + num2;

	cout << concatenated << endl;
	cout << sum << endl;

	return 0;
}