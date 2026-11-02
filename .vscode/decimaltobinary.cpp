#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a , i=0, num=0;
    cin>>a;
    while(a>0){
        int bit = a % 2;
        num=num+bit* pow(10 , i);
        
        a=a/2;
        i++;
        
 }
    cout<< num<<' ';
return 0;
}