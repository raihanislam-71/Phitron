/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    //Write your code here
public:
    Stack()
    {
        //Write your code here
    }
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        return sz == 0;
    }

    void push(int data)
    {
        
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        sz++;
    }

    void pop()
    {
        
        if(head == NULL) return;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        sz--;

    }

    int getTop()
    {
        if(head == NULL) return -1;
        return head->data;
    }
};