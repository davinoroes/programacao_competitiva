#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    if(nums.empty()) return {-1,-1};
    int left = 0, right = nums.size() -1, first = -1,second = -1;
    while(left <= right){
        int mid = (right+left)/2;
        if(nums[mid] == target){
            first = mid;
            right = mid-1;
        }
        else if(nums[mid] > target) right = mid-1;
        else left = mid+1;
    }
    left = 0, right = nums.size() - 1;
    while(left <= right){
        int mid = (right+left)/2;
        if(nums[mid] == target){
            second = mid;
            left = mid+1;
        }
        else if(nums[mid] > target ) right = mid-1;
        else left = mid+1;
    }
    vector<int> resp = {first,second};
    return resp;
}

int main(){
    vector<int> test = {};
    vector<int> resp = searchRange(test, 6);
    for(int num : resp){
        cout << " " << num;
    }
    
    
    return 0;
}