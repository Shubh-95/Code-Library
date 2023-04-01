#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int arr[100];
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        int x;
        cin>>x;
        int count =0;
        for(int k=0; k<n; k++){
            for(int l=k+1; l<n; l++){
                for(int m=l+1; m<n; m++){
                if(arr[k]+arr[l]+arr[m]==x){
                    count++;
                }
                }
            }
        }
        cout<<count;
        cout<<endl;
    }
    return 0;
}
