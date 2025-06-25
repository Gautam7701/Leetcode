class Solution {
public:
    int search(vector<int>& arr, int target) {
        int st =0;
        int end = arr.size()-1;

        while(st<=end){
            int mid = st+(end-st)/2;
            if(arr[mid]==target){
                return mid;
            }

            else if(arr[st]<=arr[mid]){
                if(arr[st]<=target && target<=arr[mid]){
                    end=mid-1;
                }
                else{
                    st = mid+1;
                }
            }

            else if(arr[mid]<=arr[end]){
                if(arr[mid]<=target && target<=arr[end]){
                    st = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
        return -1;

    }
};