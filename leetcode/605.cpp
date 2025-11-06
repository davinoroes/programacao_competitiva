#include<iostream>
#include<vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int result = 0;
        for(int i = 0; i < int(flowerbed.size()); i++){
            if(flowerbed[i] == 0){
                bool emptyleft = (i == 0) || (flowerbed[i-1] == 0);
                bool emptyright = (i == int(flowerbed.size()) - 1) || (flowerbed[i+1] == 0);
                if(emptyleft && emptyright) {
                    flowerbed[i] = 1;
                    result++;
                }
                  
            }
        }
        if (n <= result) return true;
        else return false;
}
int main(){
    cout << "oi";
    return 0;

}