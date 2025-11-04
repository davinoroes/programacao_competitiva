#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int odd(vector<int> L) {
    int odd_qtd = 0;
    for (int i = 0; i < int(L.size()); i++) {
        if (L[i] % 2 != 0) {
            odd_qtd++;
        }
    }
    return odd_qtd;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); 

    for (int j = 0; j < t; j++) {
        vector<int> numbers;
        string linha;
        int n, x, num;

        cin >> n >> x;
        cin.ignore(); 

        getline(cin, linha);
        stringstream ss(linha);

        while (ss >> num) {
            numbers.push_back(num);
        }

        int impar = odd(numbers);
        int par = int(numbers.size()) - impar;

        if (impar % 2 != 0 && (impar + par) >= x) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
