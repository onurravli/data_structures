#include <iostream>

struct node {
    int val;
    node* next;
    node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

node* head = nullptr;
node* tail = nullptr;

void add(int val) {
    node* temp = head;
    if (!temp) {
        head = new node(val);
        tail = head;
    } else {
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = new node(val);
        tail = temp->next;
    }
}

void print() {
    node* temp = head;
    while (temp) {
        std::cout << temp->val << std::endl;
        temp = temp->next;
    }
}