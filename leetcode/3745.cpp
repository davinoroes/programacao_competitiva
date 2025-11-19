#include<bits/stdc++.h>
using namespace std;

int maximizeExpressionOfThree(vector<int>& nums) {
    int smaller = nums[0],max = nums[0], smax = INT_MIN;
    for(int i = 1; i < int(nums.size());i++){
        if(nums[i] < smaller) smaller = nums[i];
        if(nums[i] > max){
            smax = max;
            max = nums[i];
        }
        else if(nums[i] > smax) smax = nums[i];
    }
    int resp = max+smax-smaller;
    return resp;
}

int main(){
    vector<int> first = {-2,0,5,-2,4};
    int ans = maximizeExpressionOfThree(first);
    cout << ans;

    return 0;
}