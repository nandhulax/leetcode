class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int validSplit=0,n=nums.size();
        long long sumRight=0,sumLeft=0;
        for(int i=0;i<n;i++){
            sumRight+=nums[i];
        }
       for(int i=0;i<n-1;i++){
            sumLeft+=nums[i];
            sumRight-=nums[i];
            if(sumLeft>=sumRight){
             validSplit++;
        }
       }
       return validSplit;
    }
};