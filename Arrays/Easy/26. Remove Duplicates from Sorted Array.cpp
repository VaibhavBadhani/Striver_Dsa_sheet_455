class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j =0;
        map<int,int>mp;
        for(int i =0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
                nums[j++]=nums[i];
            }
            mp[nums[i]]=1;
        }
        return mp.size();
    }
};