class Solution {
public:
    int climbStairs(int n) {
        int arr[100];
        arr[1] = 1;
        arr[2] = 2;
        int i;
        for(i=3;i<=n;i++){
            arr[i] = arr[i-1]+arr[i-2];
        }
        return arr[n];
    }
};