#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int i = 0;
    int j;
    for (j = 1; j < numsSize; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int k = removeDuplicates(nums, n);

    printf("Output: %d, nums = [", k);
    for (i = 0; i < k; i++) {
        printf("%d", nums[i]);
        if (i != k - 1) printf(",");
    }
    for (; i < n; i++) {
        printf(",_");
    }
    printf("]\n");

    return 0;
}

