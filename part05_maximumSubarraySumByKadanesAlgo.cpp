//Method 3
// maximum subarray sum by Kadanes Algo
// time complexity O(n)

#include <iostream>
#include <climits>

using namespace std;
int kadanes_algo(int a[],int size){
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<size;i++){
        currsum+=a[i];
    if(currsum<0){
        currsum=0;
    }
    maxsum=max(maxsum,currsum);
    }
    return maxsum;

}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<kadanes_algo(a,n);

    return 0;
}
