#include<iostream>
using namespace std;
void Prime(){  
    for(int i=1;i<=100;i++){
    int count=0;
      for(int j=1;j<=i;j++){
      if(i%j==0){
        count++;
      }
        
    }
    if(count==2){
        cout<<i<< " is a prime number."<<endl;
    }
    } 
}
int main(){
 
    Prime();
    return 0;
}
