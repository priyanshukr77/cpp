#include<iostream>
using namespace std;
int odddigits(int x){
    int i=0;
    while(x>0){
        int n=x%10;
        if(n%2!=0){
            i++;
        }
        x=x/10;
    }
    return i;
}
int main(){
    int N;
    cin>>N;
 int x= odddigits(N);
 cout<<x;
 return 0;
}