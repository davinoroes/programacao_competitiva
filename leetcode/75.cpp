#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    vector<int> occurrence = {0,0,0};
    for(int number : nums){ //usei o counting sort pq o intervalo é conhecido e pequeno, senod mais eficiente que o merge.
        occurrence[number]++;
    }
    int idx = 0;
    for(int i = 0; i < occurrence[0];i++) nums[idx++] = 0;
    for(int i = 0; i < occurrence[1];i++) nums[idx++] = 1;
    for(int i = 0; i < occurrence[2];i++) nums[idx++] = 2;

}

int main(){
    return 0;
}