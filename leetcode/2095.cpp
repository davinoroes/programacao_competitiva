#include<iostream>
#include<vector>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int qtd(ListNode *head){
    if (head == NULL || head->next == NULL) return NULL;
    ListNode *q = head;
    int qtde = 0;
    while(q->next != NULL){
        qtde++;
        q = q->next;
    }
    return qtde;
}

ListNode* deleteMiddle(ListNode* head) {
    if (head == NULL || head->next == NULL) return NULL;
    ListNode *q = head, *mid = head, *mid_ant = NULL;
    int qtd = 0;
    while(q != NULL){
        qtd++;
        q = q->next;
    }
    for(int i = 0; i < qtd/2; i++){
        mid_ant = mid;
        mid = mid->next; //agora eu tenho o ponteiro para o elemento do meio e o anterior a ele (vou precisar já que a lista é simplesmente encadeada)
    }
    mid_ant->next = mid->next;
    



    
}

int main(){
    
    return 0;
}