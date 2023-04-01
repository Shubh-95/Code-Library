#include<iostream>
#include<cstring>

using namespace std;

void removeSpaces(char *str)
{
    /* har index pe check krenge ki wo space hai ya nhi agar space nhi hua to usko n index me daal denge
        aur n ko increase kr denge aur jb space rahega tb kewal i increase hoga aur nth index pe kuch nhi jaayega
        aur n increase bhi nhi hoga isiliye n us index pe point kr rha hoga jaha space hai to agli baar 
        jb i index pe space nhi milega tb wo nth index pe daal diya jaayega jaha space tha.*/
    int n=0;
    for(int i=0; i<strlen(str); i++){
        if(str[i] != ' '){
            str[n] = str[i];
            n++;
        }
    }
    str[n] = '\0';

}

int main(){
    char arr[100];
    cin.getline(arr,100);
    int n = strlen(arr);
    removeSpaces(arr);
    cout<<arr;
    return 0;
}
