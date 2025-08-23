
class Node {
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val) {
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    MyLinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if(index < 0 || index >= size) return -1;
        Node* node = head;
        for(int i=0; i<index; i++) node = node->next;
        return node->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if(!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if(!tail) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0 || index > size) return;
        if(index == 0) return addAtHead(val);
        if(index == size) return addAtTail(val);

        Node* tmp = head;
        for(int i=0; i<index-1; i++) tmp = tmp->next;

        Node* newNode = new Node(val);
        newNode->next = tmp->next;
        tmp->next->prev = newNode;
        tmp->next = newNode;
        newNode->prev = tmp;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= size) return;
        
        if(index == 0) {
            Node* del = head;
            head = head->next;
            if(head) head->prev = nullptr;
            else tail = nullptr;
            delete del;
        }
        else if(index == size-1) {
            Node* del = tail;
            tail = tail->prev;
            if(tail) tail->next = nullptr;
            else head = nullptr;
            delete del;
        }
        else {
            Node* tmp = head;
            for(int i=0; i<index; i++) tmp = tmp->next;
            tmp->prev->next = tmp->next;
            tmp->next->prev = tmp->prev;
            delete tmp;
        }
        size--;
    }
};


/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */