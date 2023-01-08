class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL && n==1){
            return NULL;
        }
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        int count=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        if(n>count){
            return head;
        }else if(n==count){
            return head->next;
        }else{
            temp=head;
            for(int i=1;i<count-n;i++){
                temp=temp->next;
            }

            if(temp->next->next==NULL){
                temp->next=NULL;
                return head;
            }
            temp->next=temp->next->next;
            return head;
        }
        
        
    }
};
