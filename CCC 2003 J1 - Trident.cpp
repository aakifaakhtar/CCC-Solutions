#include <iostream>
#include <cmath>
using namespace std;

void print_tine (int t, int s);
void print_middle(int s);
void print_handle(int s, int h);

int main()
{
  int t, s, h;

  cin >> t;
  cin >> s;
  cin >> h;

  print_tine(t, s);
  print_middle(s);
  print_handle(s, h);

  return 0;

}

void print_tine (int t, int s)
{
    for (int i = 0; i < t; i++) {
        cout << '*';

        for (int j = 0; j < s; j++) {
            cout << ' ';
        }
        cout << '*';

        for (int j = 0; j < s; j++) {
            cout << ' ';
        }
        cout << '*';
        cout << endl;
    }
}

void print_middle(int s)
{
    for (int i = 0; i < 3 + (s * 2); i++) {
        cout << "*";
    }
    cout << endl;
}

void print_handle(int s, int h)
{
    for(int i = 0; i < h; i++) {
      
        for(int j = 0; j < 1 + s; j++) {
            cout <<" ";
        }
        cout << '*' << endl;
    }
}
