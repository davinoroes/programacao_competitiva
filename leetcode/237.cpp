#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void deleteNode(ListNode* node) {
        ListNode *prox = node->next;
        node->val = prox->val;
        node->next = prox->next;
    }

int main(){

    return 0;
}