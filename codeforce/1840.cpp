#include<bits/stdc++.h>
using namespace std;
//quero adicionar a um vetor, a quantidade de elementos em blocos validos. Bloco validos são os elementos consecutivos menores iguais a temp. (quero adicionar somente o tamanho de cada bloco no vetor)
vector<int> creation_vector(vector<int> test, int temp){
    vector<int> resp;
    int size_block = 0;
    for(int i = 0; i < int(test.size());i++){
        if(test[i] <= temp) size_block++;
        else if(size_block != 0){
            resp.push_back(size_block);
            size_block = 0;
        }
    }
    if (size_block != 0) resp.push_back(size_block);
    return resp;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,q,k;
        long long answer = 0;
        cin >> n >> k >> q;
        vector<int> caso(n);
        for(int i = 0; i < n;i++) cin >> caso[i];
        vector<int> resp = creation_vector(caso,q);
        for(long long block : resp){
            if (block >= k) answer += (block - k + 1) *(block - k +2)/2;
        }
        cout << answer << endl;
    }
    return 0;
}