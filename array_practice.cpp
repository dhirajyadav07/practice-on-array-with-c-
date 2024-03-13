#include<iostream>
using namespace std;

// print max element up to i'th index
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    int max=-99999;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        {    
            if(arr[i]>max){
                max=arr[i];
               
            }
            cout<<max<<" ";
        }
    }
    return 0;

}
