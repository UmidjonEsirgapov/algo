#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double m, g = 9.8, P;
    cin >> m;
    P = m * g;
    cout << setprecision(2) << fixed << P;
    return 0;
}
