class Solution {
public:
    bool isPowerOfTwo(int n) {
       int i = 0;
       int ans = 0;
       while(i<=30){
        ans = pow(2,i);
        i++;
        if(ans==n){
            return true;
        }
       }
       return  false;
      }
};