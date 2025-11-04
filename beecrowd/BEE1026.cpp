#include <iostream>
#include <vector>
using namespace std;

vector<int> conversor(int a) {
    vector<int> binary_digits;
    if (a == 0) {
        binary_digits.push_back(0);
    } else {
        while (a > 0) {
            binary_digits.insert(binary_digits.begin(), a % 2);
            a /= 2;
        }
    }
    return binary_digits;
}

int conversor_bin(vector<int> z) {
    int result = 0;
    for (int i = 0; i < int(z.size()); i++) {
        if (z[int(z.size()) - 1 - i] == 1) {
            result += (1 << i); 
        }
    }
    return result;
}

vector<int> wrong_sum(vector<int> x, vector<int> y) {
    vector<int> wrong_result;
    int max = (x.size() > y.size()) ? x.size() : y.size();

    while (int(x.size()) < max) x.insert(x.begin(), 0);
    while (int(y.size()) < max) y.insert(y.begin(), 0);

    for (int i = max - 1; i >= 0; i--) {
        wrong_result.insert(wrong_result.begin(), x[i] ^ y[i]); 
    }
    return wrong_result;
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        vector<int> first = conversor(a);
        vector<int> second = conversor(b);
        vector<int> final = wrong_sum(first, second);
        int result_final = conversor_bin(final);
        cout << result_final << endl;
    }
}
