#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int nodes_number(ListNode *head){
    int number = 0;
    ListNode *q = head;
    while(q != NULL){
        number++;
        q = q->next;
    }
    return number+1;
}

ListNode* swapNodes(ListNode* head, int k) {
    if(head->next == NULL) return head;
    int num = nodes_number(head) - k;
    ListNode *p = head, *f = head;
    int rep = k;
    while(--rep){
        p = p->next;
    }
    while(--num){
        f = f->next;
    }
    int aux = p->val;
    p->val = f->val;
    f->val = aux;
    return head;
}

int main(){
    return 0;
}