#include <iostream>
using namespace std;

bool eh_diagonal(int x,int y,int z,int a){
    bool value = false;
    unsigned int dif1, dif2;
    dif1 = abs(x - z);
    dif2 = abs(y - a);
    if(dif1 == dif2){
        value = true;
    }
    return value;
}
int main(){
    int x1,x2,y1,y2;
    while (true){
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0){
            break;
        }
        if(x1==x2 && y1==y2){
            cout << '0' << endl;
        }
        else if(x1 == x2 || y1 == y2){
            cout << '1' << endl;
        }
        else if(eh_diagonal(x1,y1,x2,y2)){
            cout << '1' << endl;
        }
        else{
            cout << '2' << endl;
        }
    }
    return 0;
}