#include <iostream>
#include <vector>
using namespace std;

struct BigInt {
    int digito[100];
    int tamanho;
};

BigInt a = { {4,9,4,5,5,0,1,7,5,7,8}, 11 };
BigInt b = { {2,5,1,8,9,3,0,0,4,3,1}, 11 };
BigInt resp;

int main() {
    int carry = 0;
    int max = (a.tamanho > b.tamanho) ? a.tamanho : b.tamanho;

    for (int i = 0; i < max; i++) {
        int da = (i < a.tamanho) ? a.digito[i] : 0;
        int db = (i < b.tamanho) ? b.digito[i] : 0;
        int soma = da + db + carry;
        resp.digito[i] = soma % 10;
        carry = soma / 10;
    }

    resp.tamanho = max;
    if (carry > 0) {
        resp.digito[resp.tamanho] = carry;
        resp.tamanho++;
    }

    for (int j = 0; j < resp.tamanho; j++) {
        cout << " " << resp.digito[j];
    }

    cout << endl;
    return 0;
}
