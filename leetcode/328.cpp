#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* oddEvenList(ListNode* head) {
    if(head == NULL || head->next == NULL || head->next->next == NULL) return head;
    ListNode *p = head,*q = head->next,*q_head = head->next;
    while(q != NULL && q->next != NULL){
        p->next = p->next->next;
        q->next = q->next->next;
        p = p->next;
        q = q->next;
    }
    p->next = q_head;
    return head;
    
}

int main(){
    return 0;
}