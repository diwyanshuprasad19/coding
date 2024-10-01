Node* findIntersection(Node* head1, Node* head2)
{
    Node* ptr=head1;
    Node* ptr1=head2;
    Node* curr=NULL;
    Node* head=NULL;
    Node* temp;
    while(ptr!=NULL && ptr!=NULL)
    {
        if(ptr->data==ptr1->data)
        {
            if(head==NULL)
            {
              temp=new Node(ptr->data);
                head=temp;
                curr=temp;
               
            }
            else
            {
                temp=new Node(ptr->data);
                curr->next=temp;
                curr=temp;;
            }
              ptr=ptr->next;
              ptr1=ptr1->next;
            
        }
        else
        {
            if(ptr->data<ptr1->data)
          {
            ptr=ptr->next;
           }
        else
             {
            ptr1=ptr1->next;
           }
        }
        
    }
    return head;
}
