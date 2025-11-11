#include<iostream>
#include<vector>
using namespace std;

vector<int> prefix_creation(vector<int> &nums){
    vector<int> prefix;
    prefix.push_back(1);
    int mult = 1;
    for(int i = 0; i < int(nums.size()) - 1; i++){
        mult *= nums[i];
        prefix.push_back(mult);
    }
    return prefix;
}

vector<int> sufix_creation(vector<int> &nums){
    vector<int> sufix;
    sufix.push_back(1);
    int mult2 = 1;
    for(int j = int(nums.size()) - 1; j > 0; j--){
        mult2 *= nums[j];
        sufix.push_back(mult2);
    }
    return sufix;
}

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> answer;
    vector<int> prefixo = prefix_creation(nums);
    vector<int> sufixo = sufix_creation(nums);
    int j = int(nums.size()) - 1;
    for(int i = 0; i < int(nums.size()); i++){
        answer.push_back(prefixo[i] * sufixo[j]);
        j--;
    }
    return answer;
}


int main(){
    
    return 0;
}