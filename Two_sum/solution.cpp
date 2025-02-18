class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]=i;
        }
        for(int i=0;i<nums.size;i++){
            int left=target-nums[i];
        if(hash.find(left)!=hash.end() && hash[left]!=i){
            return {i,hash[left]};
        }

        }
        return {};
    }
};
