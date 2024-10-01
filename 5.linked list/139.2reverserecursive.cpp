#include<bits/stdc++.h>
using namespace std;
 
 //link for complexity->https://favtutor.com/blogs/reverse-a-linked-list-cpp
struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
 
struct LinkedList {
    Node* head;
    LinkedList()
    {
        head = NULL;
    }
 
    Node* reverse(Node* head)
    {
        if (head == NULL || head->next == NULL)
            return head;
       struct Node* newHead=reverse(head->next);  //sending head same every time
       struct Node* headNext=head->next;
       headNext->next=head;
       head->next=NULL;
       
       return newHead;
    }
 
    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
 
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
 
int main()
{
    LinkedList ll;
    ll.push(320);
    ll.push(34);
    ll.push(315);
    ll.push(385);
 
    cout << "Linked List Before Reversing\n";
    ll.print();
 
    ll.head = ll.reverse(ll.head);
 
    cout << "\nLinked List After Reversing \n";
    ll.print();
    return 0;
}
