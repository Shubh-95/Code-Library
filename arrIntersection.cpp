#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int arr1[100];
        for(int k=0; k<n; k++){
            cin>>arr1[k];
        }
        int m;
        cin>>m;
        int arr2[100];
        for(int k=0; k<m; k++){
            cin>>arr2[k];
        }
        int dupval;
        for(int j=0; j<n; j++){
            for(int l=0; l<m; l++){
                if(arr1[j]==arr2[l]){
                   if(dupval!=arr1[j]){
                    cout<<arr1[j]<<" ";
                    dupval = arr1[j];
                   }
                }
            }
        }
    cout<<endl;
    }
    return 0;
}