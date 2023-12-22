#pragma once
#include<bits/stdc++.h>
#define node Node*
using namespace std;
struct Node {
    int data;
    Node* next;
};
//create a new node
node createNode(int x) {
    node temp = new Node();
    temp->data = x;
    temp->next = NULL;
    return temp;
}
//Check a list is empty or not
bool emptyNode(node a) {
    return a == NULL;
}
//The number of elements in list
int sizeNode(node a) {
    int count = 0;
    while (a != NULL) {
        a = a->next;
        ++count;
    }
    return count;
}
//Print a list 
void printNode(node a) {
    while (a != NULL) {
        cout << a->data << " ";
        a = a->next;
    }
}
//Insert a new node to first position of a list
void insertFirstNode(node &a, int x) {
    node temp = createNode(x);
    if (a == NULL) a = temp;
    else temp->next = a;
}
//Insert a new node to last position of a list
void insertLastNode(node &a, int x) {
    node temp = createNode(x);
    if (a == NULL) a = temp;
    else {
        node p = a;
        while (p->next != NULL) p = p->next;
        p->next = temp;
    }
}
//Insert a new node to a list
void insertNode(node &a, int x, int position) {
    int n = sizeNode(a);
    if (position < 1 || position > n+1) return;
    node temp = createNode(x);
    if (position == 1) insertFirstNode(a, x);
    else if (position == n+1) insertLastNode(a, x);
    else {
        node p = a;
        for (int i = 0; i < position-1; ++i) p = p->next;
        temp->next = p->next;
        p->next = temp;
    }
}
//Delete a first element of a list
void deleteFirstNode(node &a) {
    a = a->next;
}
//Delete a last element of a list
void deleleLastNode(node &a) {
    node before = NULL;
    node after = a;
    while (after->next != NULL) {
        before = after;
        after = after->next;
    }
    before->next = NULL;
}
//Delete a element of a list
void deleteNode(node &a, int position) {
    node before = NULL;
    node after = a;
    for (int i = 0; i < position; ++i) {
        before = after;
        after = after->next;
    }
    if (before->next == NULL) a = a->next;
    before->next = after->next;
}
