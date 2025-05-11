class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int>result(2,-1);
        int st =0;
        int end = arr.size()-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(arr[mid]>=target){
                end = mid-1;
            }
            else{
                st =mid+1;
            }
            if(arr[mid]==target) {
                result[0]=mid;
            }
        }

            st =0;
            end = arr.size()-1;
            while(st<=end){
                int mid = st+(end-st)/2;
                if(arr[mid]<=target){
                    st=mid+1;
                }
                else{
                    end = mid-1;
                }
                if(arr[mid]==target){
                    result[1]=mid;
                }
            }
        return result;

    };
    
    
};