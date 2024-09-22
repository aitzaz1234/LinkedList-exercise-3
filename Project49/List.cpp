#include "List.h"
#include <iostream>
#include <vector>

using namespace std;

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

void insertNode(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (!head) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int findMax(Node* head) {
    int maxVal = INT_MIN;
    while (head) {
        if (head->data > maxVal) {
            maxVal = head->data;
        }
        head = head->next;
    }
    return maxVal;
}

int countNodes(Node* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    return count;
}

void printEvenNumberedNodes(Node* head) {
    int index = 1;
    while (head) {
        if (index % 2 == 0) {
            cout << head->data << " ";
        }
        head = head->next;
        index++;
    }
    cout << endl;
}

void splitAndSwap(Node*& head) {
    if (!head || !head->next) return;

    vector<int> values;
    Node* temp = head;
    while (temp) {
        values.push_back(temp->data);
        temp = temp->next;
    }

    int n = values.size();
    int mid = n / 2;
    for (int i = 0; i < mid; ++i) {
        swap(values[i], values[mid + i]);
    }

    temp = head;
    for (int val : values) {
        temp->data = val;
        temp = temp->next;
    }
}