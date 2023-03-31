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

        int start = 0, end = n-1;
        while(start<end){
            if(arr[start]==1){
                if(arr[end]==0){
                    int temp;
                    temp = arr[start];
                    arr[start] =  arr[end];
                    arr[end] = temp;
                    start++;
                    end--;
                }
                else{
                end--;
                }
            }
            else{
                start++;
            }
        }

        for(int k=0; k<n; k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}