#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int toInt(const char value) {
	return value - '0';
}

int calculateNumber(const string number, const int numSystem) {
	int result = 0;
	int length = number.length() - 1;
	for (int i = 0; i < number.size(); i++) {
		result += toInt(number[i]) * pow(numSystem, length--);
	}
	return result;
}

int main() {
	string number;
	int numSystem;
	cout << "Enter a number : ";
	cin >> number;
	cout << "Enter a number system : ";
	cin >> numSystem;
	int result = calculateNumber(number, numSystem);
	cout << "Result : " << result << endl;
}