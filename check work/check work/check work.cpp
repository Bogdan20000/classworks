#include <iostream>

using namespace std;

double product(double a, double b) {
	return a * b;
}

int main()
{
	int num1 = 3; int num2 = 8;
	int result = product(num1, num2);
    cout << result << endl; 
	return 0;
}