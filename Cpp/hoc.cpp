#include<bits/stdc++.h>
using namespace std;
#define node Node*

struct Node {
    int data;
    Node* next;
};


void init(node &List) {
    List = NULL;
}

void isEmpty(node List) {
    return List == NULL;
}

void travel(node List) {
    node Q = new Node;
    Q = List;
    while (Q != NULL) {
        cout << Q->data << " ";
        Q = Q->next;
    }
}

void add(node &List, int x) {
    node q, temp = new Node;
    temp->data = x;
    temp->next = NULL;
    if (isEmpty(List))
        List = temp;
    else {
        while (q->next != NULL)
            q = q->next;
        q->next = temp;
    }

}

int main() {

}
