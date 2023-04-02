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

// insert in tail
ListNode *createList(vector<int> list) {
    ListNode *dummyNode = new ListNode(-1);
    ListNode *pre = dummyNode;
    for (int i = 0; i < list.size(); i++) {
        pre->next = new ListNode(list[i]);
        pre = pre->next;
    }
    return dummyNode->next;
}

ListNode *createListInHead(vector<int> list) {
    ListNode *dummyNode = new ListNode(-1);
    for (int i = 0; i < list.size(); i++) {
        ListNode *nextNode = dummyNode->next;
        dummyNode->next = new ListNode(list[i]);
        dummyNode->next->next = nextNode;
    }
    return dummyNode->next;
}

int getLength(ListNode *head) {
    int ret = 0;
    while (head) {
        head = head->next;
        ret++;
    }
    return ret;
}

ListNode *getElement(ListNode *head, int index) {
    int length = getLength(head);
    if (index < 0 || index >= length)
        return nullptr;
    ListNode *node = head;
    while (index-- > 0) {
        node = node->next;
    }
    return node;
}

ListNode *findElement(ListNode *head, int val) {
    ListNode *node = head;
    while (node) {
        if (node->val == val)
            return node;
        node = node->next;
    }
    return nullptr;
}

ListNode *insertList(ListNode *head, int index, int e) {
    int length = getLength(head);
    if (index < 0 || index > length)
        return head;
    ListNode *dummyNode = new ListNode(-1);
    dummyNode->next = head;
    ListNode *pre = dummyNode;
    while (index-- > 0) {
        pre = pre->next;
    }
    ListNode *newNode = new ListNode(e);
    newNode->next = pre->next;
    pre->next = newNode;
    return dummyNode->next;
}


ListNode *deleteList(ListNode *head, int index) {
    int length = getLength(head);
    if (index < 0 || index >= length)
        return head;
    
    ListNode *dummyNode = new ListNode(-1);
    dummyNode->next = head;
    ListNode *pre = dummyNode;

    while (index-- > 0) {
        pre = pre->next;
    }
    pre->next = pre->next->next;
    return dummyNode->next;
}

int main() {
    vector<int> list = {1,1234,124312,55,3466,763,73};
    ListNode *linkList = createListInHead(list);
    printList(linkList);
    printf("\n");

    printf("%d\n", getElement(linkList, 4)->val);

    printf("%x\n", findElement(linkList, 1));
    printf("%x\n", findElement(linkList, 1234));

    printList(linkList);
    printList(insertList(linkList, 4, 53));

    printList(deleteList(linkList, 0));
    return 0;
}