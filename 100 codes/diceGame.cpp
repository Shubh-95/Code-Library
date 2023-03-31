#include <bits/stdc++.h>
using namespace std;

int main()
{
 int N,P,Q,sumP=0,sumQ=0;
 cin>>N;
 for(int i = 0; i<N; i++){
   cin>>P;
   cin>>Q;
   
   if(P>Q){
     sumP++;
   }else if(Q>P){
     sumQ++;
   }
   
 }

 
 if(sumP>sumQ){
   cout<<"Pragya";
 }
 else if(sumQ>sumP){
   cout<<"Tina";
 }
 else{
   cout<<"Draw";
 }
  return 0;
}