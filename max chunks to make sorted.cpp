class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int>sorted;
        for(int i=0;i<arr.size();i++){
            sorted.push_back(arr[i]);
        }
        sort(sorted.begin(),sorted.end());

        int maxi=INT_MIN;
        int cut=0;

        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
            if(maxi==sorted[i]){
                cut++;
            }
        }
        return cut;
    }
};