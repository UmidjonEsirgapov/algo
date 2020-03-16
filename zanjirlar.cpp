#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float r1, r2, r3, r, ru;
    cin >> r1;
    cin >> r2;
    cin >> r3;
    r = pow(r1, -1) + pow(r2, -1) + pow(r3, -1);
    ru = pow(r, -1);
    cout.precision(2);
    cout << fixed << ru;
}
