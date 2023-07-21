#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int new_data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}

void deleteNode(struct Node** head_ref, int key) {
  struct Node *temp = *head_ref, *prev;

  if (temp != NULL && temp->data == key) {
  *head_ref = temp->next;
  free(temp);
  return;
  }
  // Find the key to be deleted
  while (temp != NULL && temp->data != key) {
  prev = temp;
  temp = temp->next;
  }

  // If the key is not present
  if (temp == NULL) return;

  // Remove the node
  prev->next = temp->next;

  free(temp);
}

void printList(struct Node* node) {
  while (node != NULL) {
  printf(" %d ", node->data);
  node = node->next;
  }
}
int main() {
  struct Node* head = NULL;

  insertAtBeginning(&head, 2);
  insertAtBeginning(&head, 3);
   insertAtBeginning(&head, 7);
   insertAtBeginning(&head, 6);
   insertAtBeginning(&head, 9);
  printList(head);
  deleteNode(&head,head->data%2==0 );
  printList(head);


}
