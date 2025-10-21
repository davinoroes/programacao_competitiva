#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    vector<int> v1;
    vector<int> v2;
    int n, h1, a1;
    int cont = 0;
    cin  >> n;
    for (int i = 0; i < n; i++){
        cin >> h1 >> a1;
        v1.push_back(h1);
        v2.push_back(a1);
    }
    for(int a = 0; a < n; a++){
    for(int y = 0; y < n; y++){
        if (v1[a] == v2[y]){
            cont++;
            }
        }
    }
    
    cout << cont;
    return 0;
}