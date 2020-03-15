#include <cmath>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  float a, b, h; cin>>a>>b>>h;
    double s1, s2, s3, s, l;
    l=sqrt(h*h+(a/2.-b/2.)*(a/2.-b/2.));
    s1=M_PI*l*(a+b)/2.;
    s2=M_PI*a*a/4.;
    s3=M_PI*b*b/4.;
    s=s1+s2+s3;
    printf("%.2f",s);
    return 0;
}
