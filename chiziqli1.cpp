#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double c1, x, y;
    cin >> x >> y;
    c1 = (x + y) / (y * y + fabs((y * y + 2.0) / (x + (x * x * x) / 5.0))) + exp(y + 2.0);
    printf("%.2f", c1);
    return 0;
}
