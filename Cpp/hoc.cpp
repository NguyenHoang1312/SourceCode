#include<bits/stdc++.h>
using namespace std;
//linked list
struct Node {
    int data;
    Node* next;
};
typedef Node* node;

node createNode(int data) {
    node temp = new Node();
    temp->data = data;
    temp->next = nullptr;
    return temp;
}

void pushNode(node &a, int data) {
    node temp = createNode(data);
    node p = a;
    while (p->next != nullptr) 
        p = p->next;
    p->next = temp;
}

void popNode(node &a) {
    node p = a;
    while (p->next != nullptr)
        p = p->next;
    p = nullptr;
}

void printNode(node a) {
    node p = a;
    while (p != nullptr) {
        cout << a->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    node a = createNode(1);
    pushNode(a, 2);
    pushNode(a, 3);
    pushNode(a, 4);
    printNode(a);
    popNode(a);
    printNode(a);
}