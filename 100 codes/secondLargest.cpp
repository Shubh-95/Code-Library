#include<iostream>
#include<climits>

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
        int l = INT_MIN;
        int sl = INT_MIN;

        for(int j=0; j<n; j++){
            if(l<arr[j]){
                sl = l;
                l = arr[j];
            }
            else{
                if(sl<arr[j] && arr[j]!=l){
                    sl = arr[j];
                }
            }
        }
        
        cout<<sl<<endl;

    }
}
