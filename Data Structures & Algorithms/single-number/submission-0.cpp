class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int n:nums)mp[n]++;
        for(int n:nums){
            if(mp[n]==1)return n;
        }
        return -1;
    }
};
