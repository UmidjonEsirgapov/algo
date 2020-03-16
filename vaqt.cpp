#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int s, v;
    float t;
    cin >> v >> s;
    t = (float)s / (float)v;
    cout << setprecision(2) << fixed << t;
    return 0;
}