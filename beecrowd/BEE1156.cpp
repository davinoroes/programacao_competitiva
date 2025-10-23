#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int nc,n;
    cin >> nc;
    for(int i = 0; i < nc;i++){
        cin >> n;

        vector<int> numbers(n);
        for(int a = 0; a < n;a++){
            cin >> numbers[a];
        }
        sort(numbers.begin(), numbers.end());
        for (int j = 0; j < n;j++){
            if (j == n-1){
                cout << numbers[j];
            }
            else{
                cout << numbers[j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}