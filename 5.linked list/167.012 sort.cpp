1.change data:
	Node* segregate(Node *head) {
        
      if(head==NULL || head->next==NULL)
      return head;
      Node* temp=head;
      int zero=0,one=0,two=0;
      while(temp!=NULL)
      {
          if(temp->data==0)
          zero++;
          else if(temp->data==1)
          one++;
          else
          two++;
          temp=temp->next;
      }
      temp=head;
      while(temp!=NULL)
      {
          if(zero>0)
          {
              temp->data=0;
              zero--;
          }
          else if(one>0)
          {
              temp->data=1;
              one--;
          }
          else if(two>0)
          {
              temp->data=2;
              two--;
          }
          temp=temp->next;
      }
      return head;
        
    }
    change link:
    	class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
    Node* zero1=new Node(0);
    Node* one1=new Node(0);
    Node* two1=new Node(0);
    Node* one=one1;
    Node* zero=zero1;
    Node* two=two1;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            zero->next=temp;
            zero=zero->next;
        
        }
        else if(temp->data==1)
        {
            one->next=temp;
            one=one->next;
            
        }
        else
        {
            two->next=temp;
            two=two->next;
           
        }
        temp=temp->next;
    }
     zero->next=one1->next?one1->next:two1->next;
     one->next=two1->next;
     two->next=NULL;
     head=zero1->next;
     delete zero1;
     delete one1;
     delete two1;
     return head;
    }
};
