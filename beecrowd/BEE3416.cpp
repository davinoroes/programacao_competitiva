#include <iostream>
using namespace std;

int main(){
    int n, l, d;
    cin >> n >> l >> d;
    
    int r = l;
    float mls = (n*d)/1000.0;
    while (true) {
        if(mls <=l){
            cout << l << endl;
            break;
            }
        else{
            l += r;
        }
        }
    return 0;
}