#include<stdio.h>
int main()
{
    Node* leftShift(Node* head, int k)
    {
    if (!head || !head->next || k == 0) return head;
    int len = 1;
    Node* tail = head;
    while (tail->next) {
        tail = tail->next;
        len++;
    }
    k %= len;
    if (k == 0) return head;
    Node* newTail = head;
    for (int i = 0; i < len - k - 1; i++) {
        newTail = newTail->next;
    }
    Node* newHead = newTail->next;
    newTail->next = NULL;
    tail->next = head;
    return newHead;
}
}
