        #include<iostream>

        using namespace std;

        void revArr(int arr[], int n){
            int s=0, e = n-1;
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
                int arr1[100];
                for(int j=0; j<n; j++){
                    cin>>arr1[j];
                }
                int m;
                cin>>m;
                int arr2[100];
                for(int j=0; j<m; j++){
                    cin>>arr2[j];
                }
                int x;
                if(n>m){
                    x = n;
                }
                else{
                    x = m;
                }
                int arr3[x+1];
                int c = 0;
                int j=n-1,k=m-1,l=0,sum=0;
                while(j>=0 && k>=0){
                    
                    sum = arr1[j] + arr2[k] + c;
                    arr3[l] = sum % 10;
                    c = sum/10;
                    l++;
                    j--;
                    k--;
                }

                while(k>=0){
                    sum = arr2[k] + c;
                    arr3[l] = sum%10;
                    c = sum/10;
                    l++;
                    k--;
                }
                while(j>=0){
                        sum = arr1[j] + c;
                        arr3[l] = sum%10;
                        c = sum/10;
                        l++;
                        j--;
                }
                int flag=0;
                while(c!=0){
                    sum = c;
                    arr3[l] = sum%10;
                    c = sum/10;
                    flag = 1;
                }

                if(flag==1){
                    revArr(arr3,x+1);
                    for(int z=0; z<x+1; z++){
                        cout<<arr3[z]<<" ";
                    }
                }
                else if(flag==0){
                    revArr(arr3,x);
                    for(int z=0; z<x; z++){
                        cout<<arr3[z]<<" ";
                    }
                }
                cout<<endl;
            }

            

            return 0;
        }