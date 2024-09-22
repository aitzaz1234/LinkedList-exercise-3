#include "List.h"
#include <iostream>

using namespace std;

int main() {
    Node* head = nullptr;

    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 5);
    insertNode(head, 6);

    cout << "Max value: " << findMax(head) << endl;
    cout << "Total nodes: " << countNodes(head) << endl;
    cout << "Even-numbered nodes: ";
    printEvenNumberedNodes(head);

    splitAndSwap(head);
    cout << "List after split and swap: ";
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}