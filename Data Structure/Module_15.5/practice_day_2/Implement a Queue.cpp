#include <bits/stdc++.h> 
class Node {
public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
class Queue {
public:
    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    int size()
    {
        return sz;
    }
    bool isEmpty() {
        // Implement the isEmpty() function
        return sz == 0;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        Node *newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        sz++;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(head == NULL) return -1;
        int x = head->data;
        Node *deleteNode = head;
        head = head->next;
        if(head == NULL)
        {
            tail = NULL;
        }
        delete deleteNode;
        sz--;
        return x;
    }

    int front() {
        // Implement the front() function
        if (head == NULL) return -1;
        return head->data;
    }
};