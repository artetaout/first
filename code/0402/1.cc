#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

void printList(ListNode *head) {
    if (head == nullptr)
        return;
    
    ListNode *node = head;
    while (node) {
        printf("%d ", node->val);
        node = node->next;
    }
    printf("\n");
}

ListNode *createList(vector<int> list) {
    if (list.empty())
        return nullptr;

    ListNode *head = new ListNode(list[0]);

    ListNode *pre = head;
    for (int i = 1; i < list.size(); i++) {
        pre->next = new ListNode(list[i]);
        pre = pre->next;
    }
    return head;
}

int main() {
    vector<int> list;
    printList(createList(list));
    return 0;
}