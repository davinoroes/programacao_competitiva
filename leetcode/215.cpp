#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int> q;
    for(int i = 0; i < int(nums.size());i++){
        q.push(nums[i]);
    }    
    for(int p = 0; p < k;p++){
        if(k-p==1) return q.top();
        else{
            q.pop();
        }
    }
    return -1;
}

int main(){
    return 0;
}