class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0, n = nums.size();
        int i = 0, j = n - 1;
        // if(i == j && nums[i] == val) return 0;
        while(i <= j){
            while(j >= 0 && nums[j] == val){
                 j--;
                 k++;
                 }
            while(i <= j && nums[i] != val) i++;
            if(i <= j){
                cout << k << endl;
                nums[i] = nums[j];
                k++;
                i++;
                j--;
            }
        }
        return n - k;
    }
};