bool isPalindrome(Node *head)
    {
        Node* slow=head;
        Node* fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
        }
        Node* prev=NULL;
        Node* nex;
        Node* curr=slow;
        while(curr!=NULL)
        {
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        slow=head;
        bool b=true;
        while(slow && prev)
        {
            if(slow->data!=prev->data)
            {
                b=false;
                break;
            }
            slow=slow->next;
            prev=prev->next;
        }
        return b;
    }
