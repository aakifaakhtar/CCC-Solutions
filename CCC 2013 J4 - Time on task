#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int c, t;
	int counter;

    cin >> t >> c;

    int chores[c];

    for (int x = 0; x < c; x++){
        cin >> chores[x];}

    sort (chores, chores + c);

    for (int x = 0; x < c; x++){

        if (chores[x] <= t){
            t-= chores[x];

            counter++;}

        else{
            break;}
    }

    cout << counter;

    return 0;
}
