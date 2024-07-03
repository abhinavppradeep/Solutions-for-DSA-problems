class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int votecount=0;
        int cantd;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(votecount==0){
                votecount=1;
                cantd=nums[i];
            }else if(cantd==nums[i]){
                votecount++;
            }else{
                votecount--;
            }
        }
        int majchk=0;
        for(int i=0;i<n;i++){
            if(nums[i]==cantd){
                majchk++;
            }
        }
        if(majchk>(n/2)){
            return cantd;
        }
        return -1; //nota won :)

    }
};