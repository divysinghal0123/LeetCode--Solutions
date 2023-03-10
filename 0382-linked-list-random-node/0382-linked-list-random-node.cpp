class Solution {
public:
  int len=0;
        ListNode* temp;
        ListNode* temper;
    Solution(ListNode* head) {
     temp =head;
       temper =head;
        while(temp){
            temp=temp->next;
            len++;
        }
    }
    
    int getRandom() {
        ListNode* temper1=temper;
        int cnt=rand()%len;
        for(int i=0;i<cnt;i++){
         temper1=temper1->next;
        }
        return temper1->val;
    }
};
