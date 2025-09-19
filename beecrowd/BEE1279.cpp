#include <iostream>
#include <string>
using namespace std;

// Função para verificar se o número representado pela string é divisível por d
bool isDivisible(const string& year, int d) {
    int rem = 0;
    for (char c : year) {
        rem = (rem * 10 + (c - '0')) % d;
    }
    return rem == 0;
}

int main() {
    string year;
    bool first = true;
    while (cin >> year) {
        bool leap = false, huluculu = false, bulukulu = false;

        // Ano bissexto
        if ((isDivisible(year, 4) && !isDivisible(year, 100)) || isDivisible(year, 400))
            leap = true;
        // Huluculu
        if (isDivisible(year, 15))
            huluculu = true;
        // Bulukulu
        if (leap && isDivisible(year, 55))
            bulukulu = true;

        if (!first) cout << endl;
        first = false;

        if (leap) cout << "This is leap year." << endl;
        if (huluculu) cout << "This is huluculu festival year." << endl;
        if (bulukulu) cout << "This is bulukulu festival year." << endl;
        if (!leap && !huluculu && !bulukulu)
            cout << "This is an ordinary year." << endl;
    }
    return 0;
}