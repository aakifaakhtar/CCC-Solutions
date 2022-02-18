#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    int n = 0;

    cin >> x;

    for(int i = 0; i < x.length(); i++){

        for (int j = 1; i + j <= x.length(); j++){

            string y = x.substr(i, j), rev = "";

            for (int k = y.size()-1; k >= 0; k--){
                rev+= y[k];
            }

            if (y == rev){
                n = max(n, (int)y.size());
            }
        }
    }

    cout << n;

    return 0;
}
