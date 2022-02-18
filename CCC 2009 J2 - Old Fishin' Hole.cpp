#include <iostream>
using namespace std;

int main() {
    
int t,p,pic,total;

    //cout<< "Please enter the number of Trout points: "<<endl;
    cin>>t;

    //cout<< "Please enter the number of Northern Pike points: " <<endl;
    cin>>p;

    //cout<< "Please enter the number of Yellow Pickerel points: " <<endl;
    cin>>pic;

    //cout<< "Please enter the number of total points allowed: " <<endl;
    cin>>total;

    int combinations=0;

    for (int Trout=0; Trout*t<=total; Trout++){
	    for (int Pike=0; Pike*p<=total; Pike++)
		    for (int Pickerel= 0; Pickerel*pic<=total; Pickerel++)
			    if (Trout*t+Pike*p+Pickerel*pic<=total && Trout*t+Pike*p+Pickerel*pic > 0){
			    	cout<<Trout<<" Brown Trout, "<<Pike<<" Northern Pike, "<<Pickerel<<" Yellow Pickerel"<<endl;
				    combinations=combinations+1;}
	}
	cout<< "Number of ways to catch fish: "<<combinations<<endl;

	return 0;
}
