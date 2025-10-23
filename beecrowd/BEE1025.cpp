#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int inside(vector<int> x,int n, int size){
    for (int z = 0; z < size;z++){
        if(x[z] == n){
            return z;
        }
    }
    return -1;
}

int main(){
    int n,q,num,num2,resp;
    int caso = 0;
    vector<int> numbers;
    vector<int> request;
    while(true){
        caso++;
        cin >> n >> q;
        if (n == 0 && q == 0){
            break;
        }
        for(int i = 0;i < n;i++){
            cin >> num;
            numbers.push_back(num);
        }
        sort(numbers.begin(),numbers.end());
        for (int a = 0; a < q;a++){
            cin >> num2;
            request.push_back(num2);
        }
        cout << "CASE# " << caso << ":" << endl;
        for (int b = 0; b < q; b++){
            resp = inside(numbers, request[b], n);
            if (resp == -1){
                cout << request[b] << " not found" << endl;
                }
            else{
                cout << request[b] << " found at " << resp + 1 << endl;
            }
        }
        numbers.clear();
        request.clear();
    }
    return 0;
}