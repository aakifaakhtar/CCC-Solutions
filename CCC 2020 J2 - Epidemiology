#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int p, n, r;
    int notspreading = 0, day = 0;

    cin >> p;
    cin >> n;
    cin >> r;

    while (n + notspreading <= p)
    {
        notspreading = notspreading + n;
        n = n*r;

        day = day + 1;
    }

    cout << day;

    return 0;
}
