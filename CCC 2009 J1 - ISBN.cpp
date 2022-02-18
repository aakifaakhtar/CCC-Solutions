#include <iostream>
using namespace std;
int main()
{
    int digit13, digit12, digit11, sumoflast3;
	
	//cout << " Enter the last digit of your number: ";
	cin >> digit13;

	//cout << " Enter the second last digit of your number: ";
	cin >> digit12;

	//cout << " Enter the third last digit of your number: ";
	cin >> digit11;

	//cout << " Your number is 9780921418"<< digit11 << digit12 << digit13 << endl;

	sumoflast3 = 9*1 + 7*3 + 8*1 + 0*3 + 9*1 + 2*3 + 1*1 + 4*3 + 1*1 + 8*3 + digit11*1 + digit12*3 + digit13*1;

	cout << "The 1-3-sum is "<< sumoflast3 << endl;
    
	return 0;
}
