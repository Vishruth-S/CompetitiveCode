void insert(Node* head,Node* save)
{
    head->next = head->child;
    head->child->prev = head; 
    head->child=NULL;
    head = head->next;
    
    
    while(head->next!=NULL)
    {
        head = head->next;
    }
    
    head->next = save;
    if(save!=NULL) save->prev = head;
}

class Solution {
public:
    Node* flatten(Node* head) 
    {
        Node* temp = head;
        
        while(temp!=NULL)
        {
            if(temp->child!=NULL)
            {
                insert(temp,temp->next);
            }
            
            temp = temp->next;
        }
        
        return head;
    }
    
    
};
