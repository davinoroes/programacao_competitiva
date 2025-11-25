#include<bits/stdc++.h>
using namespace std;




int pivotIndex(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    vector<int> sums;
    for(int i = 0; i < n;i++){
        sum += nums[i];
        sums.push_back(sum);
    }
    for(int j = 0; j < n; j++){
        if(sums[j] - nums[j] == sums[n-1] - sums[j]) return j;
    }
    return -1;
}

int main(){
    
    return 0;
}