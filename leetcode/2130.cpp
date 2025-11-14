#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *cloneList(ListNode *head){
    if (!head) return nullptr;
    ListNode *newHead = new ListNode(head->val);
    ListNode *curNew = newHead;
    ListNode *cur = head->next;
    while(cur){
        curNew->next = new ListNode(cur->val);
        curNew = curNew->next;
        cur = cur->next;
    }
    return newHead;
}

ListNode* reverseList(ListNode* head) {
    if (head == NULL || head->next == NULL) return head;
    ListNode *now, *prox, *ant;
    now = head, ant = NULL, prox = NULL;
    while(now != NULL){
        prox = now->next;
        now->next = ant;
        ant = now;
        now = prox;
    }     
    return ant;
}

int pairSum(ListNode* head) {
    ListNode *left = head;
    ListNode *copy = cloneList(head);
    ListNode *right = reverseList(copy);
    ListNode *q = head;
    int qtd = 0;
    while(q != NULL){
        qtd++;
        q = q->next;
    }
    int maximum = right->val + left ->val;
    for(int i  = 0; i < qtd/2; i++){
        maximum = max(maximum, right->val + left->val);
        right = right->next;
        left = left->next;
    }
    return maximum;
}

int main(){
    return 0;
}