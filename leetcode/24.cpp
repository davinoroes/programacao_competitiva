#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* swapPairs(ListNode* head) {
    if(head == NULL || head->next == NULL) return head;
    ListNode *first_ant = NULL, *first = head, *second = head->next;
    while(second != NULL){
        ListNode *next_first = second->next;
        if(first == head){
            first->next = second->next;
            second->next = first;
            head = second;
        }
        else{
            first_ant->next = second;
            first->next = second->next;
            second->next = first;
        }
        first_ant = first;
        if(first->next != NULL && first->next->next != NULL){
            first = next_first;
            second = first->next;
        }
        else break;
        }
    return head;
}

int main(){

    return 0;
}