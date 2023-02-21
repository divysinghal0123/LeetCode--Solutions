class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        if(arr.size()==1) return arr[0];
        if(arr.size()==0) return 0;
        int no =0; 
        int i =0; // IST ELEMENT OF THE PAIR
        int j =1; // 2ND ELEMENT OF THE PAIR
        while(i<arr.size()){
            if(arr[j]!=arr[i]){ // CHECK THE PAIR 
                no = arr[i];  // IF NOT VALID THE 1ST IS THE NO. STORE IT 
                break;   /// DONT FORGET TO BREAK
            } 
            i +=2;   // MOVE YOUR WINDOW 2 STEP AHEAD
            j +=2;    // MOVE YOUR WINDOW 2 STEP
        }
        return no;  // AND YOU WILL GET THE ANS
    }
};