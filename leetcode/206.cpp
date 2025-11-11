#include<iostream>
#include<vector>
using namespace std;
//leetcode automatically runs node´s creations;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
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


int main(){
    return 0;
}