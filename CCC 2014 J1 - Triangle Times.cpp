#include <iostream>
using namespace std;
int main()
 {
    int angle1, angle2, angle3;
	int totalsum;

	//cout << " Enter the first angle of your triangle: ";
	cin >> angle1;

	//cout << " Enter the second angle of your triangle: ";
    cin >> angle2;

	//cout << " Enter the third angle of your triangle: ";
    cin >> angle3;

    totalsum = angle1 + angle2 + angle3;
    
	if (totalsum != 180) {
        cout << "Error";

        return 0;
    }

    else 
		if (angle1 == 60 && angle2 == 60){
        cout << "Equilateral";
    }

    else 
		if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
        cout << "Isosceles";
    }

    else {
        cout << "Scalene";
    }

    return 0;
}
