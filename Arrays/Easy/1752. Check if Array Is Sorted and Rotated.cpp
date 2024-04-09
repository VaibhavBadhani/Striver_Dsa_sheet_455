class Solution {
public:
    bool check(vector<int>& nums) {
        int x=-1;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                x=i;
                break;
            }
        }
        vector<int>f;
        for(int i =x+1;i<nums.size();i++){
            f.push_back(nums[i]);
        }
        for(int i =0;i<=x;i++){
            f.push_back(nums[i]);
        }
        f.push_back(1e5);
        for(int i =0;i<f.size()-1;i++){
            if(f[i]>f[i+1])return false;
        }
        cout<<x<<endl;
        for(int a:f){
            cout<<a<<" ";
        }
        return true;
    }
};