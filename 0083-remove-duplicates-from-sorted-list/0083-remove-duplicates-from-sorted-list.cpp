class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while(head && head->next){
            if(head->val==head->next->val){
                head->next=head->next->next;
            }else{
                head = head->next;
            }
        }
        return temp;
    }
};