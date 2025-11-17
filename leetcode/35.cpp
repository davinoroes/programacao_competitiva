#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = int(nums.size()) - 1;
    int mid;
    while(left <= right){
        mid = (left + right)/2;
        if(nums[mid] == target) return mid;
        else if(target < nums[mid]) right = mid - 1;
        else left = mid + 1;
    }
    if (nums[mid] < target) mid++;
    return mid;
}


int main(){
    vector<int> numbers = {1,3,5,6};
    int num  = 7;
    int resp = searchInsert(numbers, num);
    cout << resp;

    return 0;
}