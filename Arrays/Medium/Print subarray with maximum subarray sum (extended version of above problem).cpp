class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ps =0;
        map<int,int>mp;
        mp[0]=1;
        int cnt=0;
        for(int i =0;i<nums.size();i++){
            ps += nums[i];
            if(mp.find(ps-k)!=mp.end()){
                cnt+=mp[ps-k];
            }
        
                mp[ps]++;
        
        }
        for(auto it:mp){
            cout<<it.first<<"  "<<it.second<<endl;
        }
        return cnt;
    }
};