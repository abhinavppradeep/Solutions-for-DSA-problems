class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>sup(nums.size());
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                sup[j]=nums[i];
                j=j+2;
            }
        }
        j=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                sup[j]=nums[i];
                j=j+2;
            }
        }
        return sup;
    }
};