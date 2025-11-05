#include<iostream>
#include<vector>
using namespace std;

int maximum(vector<int> x){
    int max = x[0];
    for(int i = 1; i < int(x.size()); i++){
        if(x[i] > max) max = x[i];
    }
    return max;
}

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result;
    int max = maximum(candies);
    for(int i = 0; i < int(candies.size()); i++){
        if(candies[i] + extraCandies >= max) result.push_back(true);
        else{
            result.push_back(false);
        }
    }
    return result;
}

int main(){
    return 0;
}
