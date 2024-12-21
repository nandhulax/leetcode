class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         vector<int>crr;
for(int i=0;i<nums1.size();i++){
    for(int j=0;j<nums2.size();j++){
        if(nums1[i]==nums2[j]){
            crr.push_back(nums1[i]);
            nums2[j]=INT_MIN;
           break;
        }
    }
}  
sort(crr.begin(), crr.end());
        crr.erase(unique(crr.begin(), crr.end()), crr.end());
return crr; 
    }
};