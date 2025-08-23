//// use linked list

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void Insert_node(Node *&head , int v)
// {
//     Node *newNode = new Node(v);
//     if(head == NULL)
//     {
//         head = newNode;
//         return;
//     }
//     Node *tmp = head;
//     while(tmp->next != NULL)
//     {
//         tmp = tmp->next;
//     }
//     tmp->next = newNode;
// }
// void duplicate_node(Node *head)
// {
//     Node *first = head;
//     while(first != NULL)
//     {
//         Node *last = first->next;
//         Node *ptr = first;
//         while(last != NULL)
//         {
//             if(first->val == last->val) 
//             {
//                 Node *deleteNode = ptr->next;
//                 ptr->next = ptr->next->next;
//                 delete deleteNode;
//                 ptr = ptr;
//                 last = ptr->next;
                
//             }
//             else
//             {
//                 ptr = ptr->next;
//                 last = last->next;
//             }
//         }
//         first = first->next;
//     }
// }

// void print_list(Node *head)
// {
//     Node *tmp = head;
//     while(tmp != NULL)
//     {
//         cout <<tmp->val<<" ";
//         tmp = tmp->next;
//     }
//     cout <<endl;
// }
// int main()
// {
//     Node *head = NULL;
//     int val;
//     while(true)
//     {
//         cin >> val;
//         if(val == -1) break;
//         Insert_node(head,val);
//     }
//     duplicate_node(head);
//         for(Node *i=head; i->next != NULL; i=i->next)
//     {
//         for(Node *j=i->next; j != NULL; j=j->next)
//         {
//             if(i->val > j->val)
//             {
//                 swap(i->val,j->val);
//             }
//         }
//     }
//     print_list(head);
//     return 0;
// }


//// use STL lsit
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist;
    int val;
    while(cin >> val && val != -1)
    {
        mylist.push_back(val);
    }

    mylist.sort();
    mylist.unique();

    for(int val : mylist)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
