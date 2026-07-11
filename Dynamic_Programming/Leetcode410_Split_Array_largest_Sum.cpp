class Solution {
public:
    bool cansplit(vector<int>& nums , int m , long long mid){
        long long current = 0;
        int count = 1;
        for(int x : nums){

         if(x > mid){
          return false;
       }
            if(current + x > mid){
                count++;
                current = x ;
            
            if(count > m )
                return false;
            }
            else{
                current += x ;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums , int m){
        long long start = 0 ;
        long long end =0 ;
        for(int x : nums){
            end += x;
        }
        long long ans = end ;
        while(start<=end){
            long long mid = start + (end - start)/2;
            if (cansplit(nums , m , mid)){
                ans = mid;
                end = mid -1;
            }
            else{
                start = mid +1;
            }
        }
    return ans;
    }
};