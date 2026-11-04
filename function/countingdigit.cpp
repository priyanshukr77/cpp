#include<iostream>
using namespace std;
int digitcount(int x){
    int i=0;
    while(x>0)
    {
        x=x/10;
        i++;
    }
     

    return i;
}
int main(){
    int no;
    cin>>no;
    int ans= digitcount(no);
    cout<< ans;
    return 0;
}