class Solution
{
    public:
    Node* reverse(Node* curr)
    {
        Node* prev=NULL;
        Node* nex;
        while(curr!=NULL)
        {
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
            
        }
        curr=prev;
        return curr;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first=reverse(first);
        second=reverse(second);
        int c=0;
        int s=0;
        Node* temp;
        Node* res=NULL;
        Node* curr=NULL;
        while(first!=NULL || second!=NULL)
        {
            s=c+(first?first->data:0)+(second?second->data:0);
            c=(s>9)?1:0;
            s=s%10;
             temp=new Node(s);
            if(res==NULL)res=temp;
            else curr->next=temp;
            curr=temp;
            
            
            if(first)first=first->next;
            if(second)second=second->next;
            
            
        }
        if(c>0)
        {
            temp=new Node(c);
            curr->next=temp;
            curr=temp;
        }
        res=reverse(res);
        return res;
    }
};
