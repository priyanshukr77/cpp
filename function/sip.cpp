#include<iostream>
#include<cmath>
using namespace std;
float sip(int p,int r,int n){
    float amount= (p*((pow((1+r),n))-1)*(1+r))/r;
    return amount;
}
int main()
{
   float interest = sip(120,2,4);
   cout<<interest;
return 0.0;
}
