class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum =0;
        int n=nums.size();
        for(int i =0;i<n;i++){
            int fd=i-k;
            int bd=i+k;
            int temp=0;

            if(fd>=0 && bd<n){
                if(nums[i]>nums[fd] && nums[i]>nums[bd]){
                    sum+=nums[i];
                }
            }
            else if(fd<0 && bd<n){
                if(nums[i]>nums[bd]){
                    sum+=nums[i];
                }
            }
            else if(fd>=0 && bd>=n){
                if(nums[i]>nums[fd]){
                    sum+=nums[i];
                }
            }
            else{
                sum+=nums[i];
            }
        }
        return sum;
    }
};