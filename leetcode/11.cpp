#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0 , right = int(height.size()) - 1;
    int dist_max = 0;
    int dist;
    while(left < right){
        dist = min(height[left],height[right]) * (right-left);
        dist_max = max(dist_max, dist);
        if(height[left] < height[right]) left++;
        else{
            right--;
        }
    }
    return dist_max;
}


int main(){
    vector<int> test = {1,8,6,2,5,4,8,3,7};
    int resp = maxArea(test);
    cout << resp;
    
    return 0;
}

