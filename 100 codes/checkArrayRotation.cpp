#include<iostream>
#include<climits>


using namespace std;

int rotatedIndex(int arr[], int n){
    int min = INT_MAX;
    int minIndex;
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
            minIndex = i;
        }
    }

    return minIndex;
}

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

        int rotIndex = rotatedIndex(arr,n);
        cout<<rotIndex<<endl;

    }
}