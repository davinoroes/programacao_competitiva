#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, t, i, moves;
    moves = 0;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> a >> b;
        if(a%b!=0){
            moves = b - (a % b);
        }
        cout << moves << endl;
        moves = 0;
    }
    return 0;
}