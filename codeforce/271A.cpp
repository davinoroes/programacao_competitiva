#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    int y;
    cin >> y;
    int year = y+1;
    while(true){
        string year_string = to_string(year);
        
        set<char> digits(year_string.begin(), year_string.end());
        if(year_string.size() == digits.size()){
            cout << year;
            break;
        }
        year++;
    }
    return 0;
}