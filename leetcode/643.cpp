#include<bits/stdc++.h>
using namespace std;


double findMaxAverage(vector<int>& nums, int k){
    int n = nums.size();
    double answer_sum = 0;
    for(int i = 0; i < k;i++) answer_sum += nums[i];
    double max_sum = answer_sum;
    for(int j = k; j < n;j++){
        answer_sum += nums[j] - nums[j-k];
        max_sum = max(max_sum, answer_sum);
    }
    return max_sum/k;
}

int main(){
    vector<int> test = {1,12,-5,-6,50,3};
    double resp = findMaxAverage(test, 4);
    cout << resp;

    return 0;
}