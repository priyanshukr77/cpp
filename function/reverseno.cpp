#include<iostream>
using namespace std;
int reverseno(int x){
    int num=0, sum=0;
    while(x>0){
      num=x%10;
      x=x/10;
      sum=sum*10+num;
   }

return sum;
}
int main(){
    int m= reverseno(1234);
    cout<<m;
return 0;
}