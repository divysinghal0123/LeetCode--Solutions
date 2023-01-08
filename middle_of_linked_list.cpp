class Solution {
public:

ListNode* middleNode(ListNode* head) {
    ListNode*l=head,*l1=head;
    if(l->next==NULL)return l;
    if((l->next->next)==NULL)return (l->next);
    while(l!=NULL)
    {
        if(l->next==NULL)
        break;
        if(l->next->next==NULL)
        {
            l1= l1->next;
            break;
        }
        
        l=l->next->next;
        l1=l1->next;
    }
    return l1;
    
}
};
