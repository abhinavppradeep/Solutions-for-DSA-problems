class Solution {
    public:
        int maxCount(vector<int>& banned, int n, int maxSum) {
            unordered_set <int> ban  (banned.begin(), banned.end());
            int sum=0;
            int count=0;
    
            for(int i=1;i<=n ; i++){
                if(ban.find(i) == ban.end(i) && sum+i<=maxSum){
                    sum+=i;
                    count++;
                }
            }
            return count;
        }
    };