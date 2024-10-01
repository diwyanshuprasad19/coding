    Node* reverse(Node* head)
    {
        Node* curr=head;
        Node* prev=NULL;
        Node* nex;
        while(curr!=NULL)
        {
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {
        Node* temp=reverse(head);
        bool b=true;
        while(head && temp)
        {
            if(head->data!=temp->data)
            {
                b=false;
                break;
                
            }
            head=head->next;
            temp=temp->next;
        }
        return b;
    }
    //time-O(n),space-O(n) as by reverse
    //other can be done by stack like the twi sum one
