#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert(Node *&head,Node *&tail,string val)
{
    Node *newNode = new Node(val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string val;
    while(cin >> val && val !="end")
    {
        insert(head,tail,val);
    }
    int q;
    cin >> q;
    cin.ignore();
    Node* cnt = head;
    while(q--)
    {
        string s;
        getline(cin , s);
        stringstream ss(s);
        string a , b;
        ss >> a;

        if(a == "visit")
        {
            ss >> b;
            Node * tmp = head;
            bool flag = false;
            while(tmp != NULL)
            {
                if(tmp->val == b)
                {
                    cnt = tmp;
                    cout << tmp->val <<endl;
                    flag = true;
                    break;
                }
                tmp = tmp->next;
            }
            if(!flag)
            {
                cout << "Not Available" << endl;
            }
        }
        else if(a == "next")
        {
            if(cnt != NULL && cnt->next != NULL)
            {
                cnt = cnt->next;
                cout << cnt->val <<endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if(a =="prev")
        {
            if(cnt != NULL && cnt->prev != NULL)
            {
                cnt = cnt->prev;
                cout << cnt->val <<endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }     
    }
    return 0;
}


