#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode *rotate(ListNode *head){
    if (head == NULL || head->next == NULL) return head;
    ListNode *now, *ant;
    now = head, ant = NULL;
    while(now->next != NULL){
        ant = now;
        now = now->next;
    }
    now->next = head;
    ant->next = NULL;
    head = now;
    return head;
}

ListNode* rotateRight(ListNode* head, int k) {
    ListNode *resp;
    while(k--){
        resp = rotate(head);
        head = resp;
    }
    return resp;
}

int main(){
    return 0;
}