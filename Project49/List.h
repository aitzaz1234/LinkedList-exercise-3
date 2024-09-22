#pragma once

#include <iostream>

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data);
void insertNode(Node*& head, int data);
int findMax(Node* head);
int countNodes(Node* head);
void printEvenNumberedNodes(Node* head);
void splitAndSwap(Node*& head);