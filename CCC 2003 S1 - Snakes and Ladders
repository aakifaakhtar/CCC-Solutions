#include <iostream>
using namespace std;

int space = 1, num = 2;
int snake[6][2] = {{54, 19},{90, 48},{99, 77},{9, 34},{40, 64},{67, 86}};

int main()
{
    while (space != 100 && num != 0){
        cin >> num;

        if (space + num <= 100) space += num;
        
		for (int i = 0; i < 6; i++){
            if (space == snake[i][0]) space = snake[i][1];}

        if (num != 0) cout << "You are now on square " << space << endl;
    }

    if (space == 100) cout << "You Win!";
		else cout << "You Quit!";

    return 0;
}
