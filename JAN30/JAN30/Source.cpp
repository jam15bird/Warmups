#include <iostream>
using namespace std;
int main() {
	double input1;
	double input2;
	cout << "How much do you have in your bank account?" << endl;
	cin >> input1;
	cout << "We are going to have to take away some of your money!!!" << endl;
	cin >> input2;
	cout << "you have " << (input1 - input2) << "!!!" << endl;
}