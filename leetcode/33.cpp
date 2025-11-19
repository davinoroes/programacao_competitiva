#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int start = 0, end = int(nums.size())-1;
    while(start <= end){
        int middle = (start + end)/2;
        if(nums[middle] == target) return middle;
        if(nums[middle] >= nums[start]){ //quer dizer que o left side ta sem gap(sem o pulo da rotação)
            if(target >= nums[start] && target <= nums[middle]){ 
                end = middle - 1;
            }
            //se não, quer dizer que ou o número não está, ou que o número está no right;
            else start = middle + 1; 
        }
        else{ //right side está sem o gap
            if(target <= nums[end] && target >= nums[middle]){
                start = middle + 1;
            }
            else end = middle -1;
        }
    }
    return -1;
}

int main(){

    return 0;
}