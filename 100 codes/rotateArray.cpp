#include<iostream>

using  namespace std;

void reverseArr(int arr[], int s, int e){

    while(s<e){
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
    s++;
    e--;
    }
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
        int s=0, e=n-1;
        reverseArr(arr,s,e);

        int d;
        cin>>d;
        reverseArr(arr,s,n-d-1);
        

        reverseArr(arr,n-d,e);

        for(int j=0; j<n; j++){
            cout<<arr[j]<<" ";
        }

        cout<<endl;

    }

    return 0;

}