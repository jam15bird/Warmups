#include <iostream>
using namespace std;
int main() {
	int input1;
	int input2;
	cout << "How much does your gasoline cost?" << endl;
	cin >> input1;
	cout << "What is the approximate size of your gas tank?" << endl;
	cin >> input2;
	cout << "The total cost for your gas would be" << (input1*input2) << "!!!" << endl;
}