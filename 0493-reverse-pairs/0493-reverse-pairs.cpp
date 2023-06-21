class Solution {
public:
    void merge(vector<int> &nums, int low, int mid, int high){
        int i = low, j = mid+1;
        vector<int> temp;

        while((i <= mid) && (j <= high)){
            if(nums[i] < nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                temp.push_back(nums[j]);
                j++;
            }
        }

        while(i <= mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j <= high){
            temp.push_back(nums[j]);
            j++;
        }

        for(int i = low, k = 0; i <= high; i++, k++){
            nums[i] = temp[k];
        }
    }

    void count(vector<int> &nums, int low, int mid, int high, int &ans){
        int j = mid+1;
        for(int i = low; i <= mid; i++){
            while((j <= high) && (nums[i] > (long long)nums[j] * 2)){
                j++;
            }
            ans += j - (mid+1);
        }
    }

    void mergesort(vector<int> &nums, int low, int high, int &ans){
        if(low >= high){
            return;
        }

        int mid = (low + high) / 2;

        mergesort(nums, low, mid, ans);
        mergesort(nums, mid+1, high, ans);

        count(nums, low, mid, high, ans);

        merge(nums, low, mid, high);
    }

    int reversePairs(vector<int>& nums) {
        int ans = 0;

        mergesort(nums, 0, nums.size()-1, ans);

        return ans;
    }
};