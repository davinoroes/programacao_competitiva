#include<bits/stdc++.h>
using namespace std;

const int T = 2;

//minha implementacao de Arvore b
struct BTreeNode{
    int n; //nmr de chave do nó
    int keys[2*T-1]; //vetor com as chaves respeitand a propiedade do grau
    bool is_leaf; //se o nó é folha (vou utilizar nos algortimos de busca, inclusao e remocao)
    BTreeNode *children[2*T-1]; //ponteiros pros seus filos

    BTreeNode(bool leaf){
        is_leaf = leaf;
        n = 0;
        for(int i = 0; i < 2*T;i++){
            children[i] = nullptr;
        }
    }
};