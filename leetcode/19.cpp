#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};



//algoritmo iterativo
ListNode* removeNthFromEnd(ListNode* head, int n) {
    if(head->next == NULL) return NULL;
    ListNode *current = head, *now = head; 
    int count = 0;
    while(current != NULL){ //saber o tamnho da lista
        count++;
        current = current->next;
    }
    int num = count - n;
    if(n == count) return head->next;
    while(--num){
        now = now->next;
    }
    now->next = now->next->next;
    return head;
}

int main(){
    return 0;
}