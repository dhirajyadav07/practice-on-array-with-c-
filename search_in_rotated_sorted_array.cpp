class Solution {
public:
    int search(vector<int>& arr, int target) {
        int start=0,end=arr.size()-1,mid=0;
        while(start<=end){
            mid=start+(end-start)/2;
           if(arr[mid]==target)
              return mid;
            // first check which side array is sorted 
            if(arr[0]>arr[mid])   // right side sorted 
              {
                // check , target is lies between the range of right sorted array 
                if(arr[mid]<=target && arr[end]>=target)
                    start=mid+1;
                else
                   end=mid-1;
                
              }
              // left side sorted
              else{
                 // check , target is lies between the range of left sorted array 
                if(arr[start]<=target && arr[mid]>=target)
                    end=mid-1;
                else
                   start=mid+1;
                
              }
        }
        return -1;
    }
};