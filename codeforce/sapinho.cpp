#include <iostream>
using namespace std;


//Questão que fiz na cadeira de programação. Originalmente fiz o problema em c, depois apenas adaptei pro C++.

int P = 200;
int E = 10;
int resp;

int escapa(int S) {
    int h = 0;
    int forca = S;
    while (true) {
        h += forca;
        if (h >= P) return 1;

        h -= E;
        forca -= 10;
        if (forca <= 0) return -1;

        if (h < 0) return -1;
    }
}

int busca_binaria() {
    int low = E;
    int high = P;
    int ans = P;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (escapa(mid) == 1) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    resp = busca_binaria();
    cout << resp;
    return 0;
}
