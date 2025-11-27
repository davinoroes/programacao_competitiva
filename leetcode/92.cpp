#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* reverseBetween(ListNode* head, int left, int right) {
    if(!head || left == right) return head;
    ListNode dummy(0);
    dummy.next = head;
    ListNode *prev = &dummy;
    for(int i = 1; i < left;i++) prev = prev->next;
    ListNode *current = prev->next;
    for(int j = 0; j < right - left; j++){
        ListNode *temp = current->next;      
        current->next = temp->next;         
        temp->next = prev->next;             
        prev->next = temp;
    }
    return dummy.next;
}

int main(){
    return 0;

}