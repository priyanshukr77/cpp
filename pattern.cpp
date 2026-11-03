#include<iostream>
using namespace std;
int main(){
    int n,k=1;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        {
           for(int j=0;j<i;j++)
           {
             cout<<" ";
           }
           
            for(int j=0;j<(2*n-k);j++)
          {
           cout<<"*";
          }
          k=k+2;
           for(int j=0;j<(n-i-1);j++)
           {
             cout<<" ";
           }
        }
               cout<<endl;
    }
}