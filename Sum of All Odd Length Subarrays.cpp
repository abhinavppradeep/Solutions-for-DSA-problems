class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                if((j-i+1)%2==1){
                    for(int k=i;k<=j;k++){
                        sum=sum+arr[k];
                    }
                }
            }
        }
        return sum;
        
    }
};