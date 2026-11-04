#include<iostream>
using namespace std;
float SimpleInterest(int P,int R,int T){
    float Interest=(P*R*T)/100;
     return Interest;
}
int main()
{
  int Q,R,W;
  cin>>Q>>R>>W;
  float ans= SimpleInterest(Q,W,R);
  cout<< ans;
  return 0;
}