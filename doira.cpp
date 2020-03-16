#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int r1, r2, r3;
    double s1, s2, s3;
    cin » r1 » r2 » r3;
    s1 = 3.1415926536 * r1 * r1;
    s2 = 3.1415926536 * r2 * r2;
    s3 = 3.1415926536 * r3 * r3;
    printf("%.2f %.2f %.2f", s1, s2, s3);
    return 0;
}