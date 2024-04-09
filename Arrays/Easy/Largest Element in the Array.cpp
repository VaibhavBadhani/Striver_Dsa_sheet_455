#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int mini = INT_MIN;
    for(auto a:arr){
        mini = max(mini,a);
    }
    return mini;
}
