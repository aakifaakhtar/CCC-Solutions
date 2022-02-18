#include <iostream>
using namespace std;
int main()
 {
	int threepointsA, threepointsB, twopointsA, twopointsB, onepointsA, onepointsB, totalpointsapples, totalpointsbananas;

	//cout << " Enter the number of 3-point shots, 2-point field goals and 1-point free throws for the Apples: ";
	cin >> threepointsA >> twopointsA >> onepointsA;


	//cout << " Enter the number of 3-point shots, 2-point field goals and 1-point free throws for the Bananas: ";
	cin >> threepointsB >> twopointsB >> onepointsB;

	
	totalpointsapples = (threepointsA*3) + (twopointsA*2) + onepointsA;

	totalpointsbananas = (threepointsB*3) + (twopointsB*2) + onepointsB;

	if (totalpointsapples > totalpointsbananas)

		cout <<"A"<<endl;

	else 
		
		if (totalpointsbananas > totalpointsapples)

			cout <<"B"<<endl;

		else

			cout <<"T"<<endl;

return 0; 
 
 }
