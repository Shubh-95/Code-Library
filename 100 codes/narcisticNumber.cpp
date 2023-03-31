#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int digitcount(int n){
  int digit=0;
   while(n>0){
      digit++;
      n=n/10;
    }
    return digit;
}

int main()
{
  //write your code here
  int T;
  cin>>T;
  for(int i=0; i<T; i++){
    int n,sum=0,temp,p,c;
    cin>>n;
    temp = n;
    p = n;
    c = digitcount(p);
    while(n>0){
      int rem;
      rem = n%10;
      sum = sum + pow(rem,c);
      n = n/10;
    }
    if(temp==sum){
      cout<<"Yes"<<endl;
    }else{
      cout<<"No"<<endl;
    }
  }
  return 0;
}