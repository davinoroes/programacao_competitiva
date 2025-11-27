#include<bits/stdc++.h>
using namespace std;

//segunda forma de resolver o problema, alterando os valores dos nós
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseBetween(ListNode* head, int left, int right) {
    if(!head || left == right) return head;
    vector<int> nodes_val;
    ListNode* left_node = head; ListNode* curr = head;
    for(int i = 1;i < left;i++){
        curr = curr->next;
        left_node = left_node->next; //posicionamento do pontero left que vai percorrer a subl
    } 
    for(int p = 0;p <  right - left+1; p++){
        nodes_val.push_back(left_node->val);
        left_node = left_node->next;
        //formação do meu vetor info
    }
    for(int k = nodes_val.size() - 1; k >= 0; --k){
        curr->val = nodes_val[k];
        curr = curr->next;
    }
    return head;
}

int main(){
    return 0;
}
