#include<bits/stdc++.h>
using namespace std;

int largestAltitude(vector<int>& gain) {
    int n = gain.size();
    int total_sum = 0, max_altitude = 0;
    for(int i = 0 ; i < n;i++){
        total_sum += gain[i];
        max_altitude = max(max_altitude, total_sum);
    }
    return max_altitude;
}

int main(){
    vector<int> test = {-4,-3,-2,-1,4,3,2};
    int resp = largestAltitude(test);
    cout << resp;
    return 0;
}