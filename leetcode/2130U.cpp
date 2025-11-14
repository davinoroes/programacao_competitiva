#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int pairSum(ListNode* head){
    ListNode *slow = head , *fast = head;
    int max_val = 0;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next; //paro o slow exatamente no meio da lista, já que ela tem um número par de elementos.
    }
    ListNode *NextNode, *prev = NULL;
    while(slow){
        NextNode = slow->next;
        slow->next = prev;
        prev = slow;
        slow = NextNode;
    }
    while(prev){
        max_val = max(max_val, prev->val + head->val);
        head = head->next, prev = prev->next;
    }
    return max_val;

}