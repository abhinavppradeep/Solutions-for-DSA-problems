class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            vector<int> b;
            for(int i=0;i<nums.size();i++){
                b.push_back(nums[i]);
            }
    
            sort(b.begin(), b.end());
    
            vector<int> c(nums.size(), 0);
            int af=0;
            for(int i=0;i<nums.size();i++){
                if(b[i]==pivot){
                    c[i]=pivot;
                    af=i;
                }
            }
    
            int bf=0;
            af+=1;
    
            for(int i=0;i<nums.size();i++){
                if(nums[i]<pivot){
                    c[bf++]=nums[i];
                }else if(nums[i]>pivot){
                    c[af++]=nums[i];
                }
            }
    
            return c;
        }
    };