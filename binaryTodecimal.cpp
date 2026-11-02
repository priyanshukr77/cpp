#include<iostream>
#include<cmath>
using namespace std;
int main (){
int a , num=0,i=0;
cin>>a;
while(a>0){
    int bit=a%10;
    a=a/10;
    num=num+bit*pow( 2,i );
    i++;
}
cout<<num;
}