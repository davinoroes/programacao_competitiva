#include<bits\stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode *head = new ListNode(-1);
    ListNode *curr = head;
    while(list1 != NULL && list2 != NULL){
        if(list1->val <= list2->val){
            curr->next = new ListNode(list1->val);
            curr = curr->next;
            list1 = list1->next;
        }
        else{
            curr->next = new ListNode(list2->val);
            curr = curr->next;
            list2 = list2->next;            
        }
    }
    if(list1 != NULL){
        while(list1 != NULL){
            curr->next = new ListNode(list1->val);
            curr = curr->next;
            list1 = list1->next;
        }
    }
    else if(list2 != NULL){
        while(list2 != NULL){
            curr->next = new ListNode(list2->val);
            curr = curr->next;
            list2 = list2->next;
        }
    }
    return head->next;
}

int main(){
    return 0;
}