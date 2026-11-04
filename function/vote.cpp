#include<iostream>
using namespace std;
void voter(int x){
    if(x>=18){
        cout<<"can vote"<<endl;
    }
    else
    {
        cout<<"can not vote"<<endl;
    }
    
}
int main()
{
    int p;
    cin>>p;
    voter(p);
    return 0;
}