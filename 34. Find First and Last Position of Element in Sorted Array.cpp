class Solution {
public:
    int low(vector<int>& nums, int target){
        int end=nums.size()-1;
        int start= 0;
        int res = -1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]==target){
                res=mid;
                end = mid-1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{ //a
                end=mid-1;
            }
        }
        return res;
    }
    int high(vector<int>& nums, int target){
        int end=nums.size()-1;
        int start= 0;
        int res = -1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]==target){
                res=mid;
                start=mid+1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        result[0] = low(nums, target);
        result[1] = high(nums, target);
        return result;
    }
};