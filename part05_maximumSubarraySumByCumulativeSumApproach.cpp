//Method 2
// maximum subarray sum by cumulative sum approch
// time complexity O(n^2)

#include <iostream>
#include <climits>

using namespace std;
// 
int main(){
     int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int csum[n];
csum[0]=a[0];
for(int i=1;i<n;i++){
    csum[i]=csum[i-1]+a[i];
}

int maxsum=INT_MIN;
for(int i=0;i<n;i++){
    int currsum=0;
    for(int j=i;j<n;j++){
        currsum=csum[j]-(i>0?csum[i-1]:0);    // whenever the value of i is greater than 0 then we calculate the currsum
        maxsum=max(currsum,maxsum);
    }
}
cout<<maxsum;
return 0;

}