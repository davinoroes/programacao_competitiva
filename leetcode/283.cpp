#include <iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int count = 0;
    for(int i = 0; i < int(nums.size()); i++){
        if(nums[i] != 0){
            nums[count++] = nums[i];
        }
    }
    while(count < int(nums.size())){
        nums[count++] = 0;
    }
}


int main(){
    vector<int> x = {1,5,0,3,5,7,9,0,1};
    moveZeroes(x);
    for(int k = 0; k < int(x.size()); k++){
        cout << x[k];
    }
    return 0;
}