int longestSubarrayWithSumK(vector<int> a, long long k) {
    int left=0 , right=0;
    long long sum=0;
    int maxlen=0;
    int n=a.size();
    while(right<n){
        sum+=a[right];
        while(left<=right&&sum>k){
            sum-=a[left];
            left++;
        }
        if(sum==k){
            maxlen = max(maxlen,right-left+1);
        }
        right++;
    }
    return maxlen;
}