class Solution {
    public int nextGreaterElement(int n) {
        char[] nums = String.valueOf(n).toCharArray();

        // Find first decreasing position from the right
        int i = nums.length - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        // Already the largest permutation
        if (i < 0) {
            return -1;
        }

        // Find the smallest digit greater than nums[i]
        int j = nums.length - 1;
        while (nums[j] <= nums[i]) {
            j--;
        }

        char temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;

        // Reverse suffix to make it as small as possible
        reverse(nums, i + 1, nums.length - 1);

        long result = Long.parseLong(new String(nums));

        return result > Integer.MAX_VALUE ? -1 : (int) result;
    }

    private void reverse(char[] nums, int left, int right) {
        while (left < right) {
            char temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
}