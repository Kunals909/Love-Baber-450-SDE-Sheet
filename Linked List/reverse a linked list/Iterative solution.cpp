
struct Node
{
    int data;
    struct Node *next;
};

struct Node* reverseList(struct Node *head)
    {
       if(head==NULL)
         return head;
      Node *curr= head;
      Node * prev=NULL;
      while(curr!=NULL){
          Node* nxt=curr->next;
          curr->next=prev;
          prev=curr;
          curr=nxt;
      }
      
      return prev;
    }
