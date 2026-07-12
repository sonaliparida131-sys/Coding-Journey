class Solution {
public:
    bool ispossibleship(vector<int>&weights , int days , long long mid){
        int ship = 1;
        long long packages = 0;
        for(int w : weights){
            if(w > mid ) {
             return false;
            }
            if(ship > days){
                 return false;
                 }
            if(packages + w > mid ){
                ship++;
                packages = w;
            
            if(ship > days) return false;
            } else{
                packages +=  w ; 
            }
        }
        return true ;
    }


    int shipWithinDays(vector<int>& weights, int days) {
        long long start = 0 ;
        long long end = 0 ;
        for(int w : weights){
            end += w;
        }
        long long ans = end ;
      
      while(start <= end){
        long long mid = start + (end - start)/2;
        if(ispossibleship(weights , days , mid)){
            ans = mid ;
            end = mid -1 ;
        }
        else{
            start = mid +1 ;
        }
      }
      return ans ;
    }
};