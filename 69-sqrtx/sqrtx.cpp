class Solution {
public:
    int mySqrt(int x) {
        int st = 0;
        int end = x;
        int ans =0;
        
        while(st<=end){
            long long mid = st+(end-st)/2;
            long long sq = mid*mid;
            if(sq>x){
                end = mid-1;
            }
            else if(sq<x){
                st=mid+1;
                ans = mid;
            }
            else{
                return mid;
            }
        }
        return ans;
    }
};