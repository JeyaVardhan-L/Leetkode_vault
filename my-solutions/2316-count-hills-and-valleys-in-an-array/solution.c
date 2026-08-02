int countHillValley(int* nums, int numsSize) {
    int count = 0;
    int left_val = nums[0]; 
    for (int i = 1; i < numsSize - 1; i++) {
        if (nums[i] != nums[i+1]) {
            if (nums[i] > left_val && nums[i] > nums[i+1]) {
                count++;
            }
            else if (nums[i] < left_val && nums[i] < nums[i+1]) {
                count++;
            }
            left_val = nums[i];
        }
    }
    return count;
}
