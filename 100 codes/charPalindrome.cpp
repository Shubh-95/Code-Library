#include<iostream>
#include<cstring>

using namespace std;

void revArr(char arr[]){
    int n = strlen(arr);
    int s = 0, e = n-1;
    while(s<e){
        char temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

bool palindrome(char arr[]){


    char temp[100];

    strcpy(temp,arr);

    revArr(arr);


    if(strcmp(arr,temp)==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char arr[100];
    cin>>arr;

    bool val = palindrome(arr);

    if(val == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
}