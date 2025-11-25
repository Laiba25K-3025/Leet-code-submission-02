#include <stdio.h>

void moveZeroes(int nums[], int size) {
    int insertPos = 0;
    int i;
   
    for ( i = 0; i < size; i++) {
        if (nums[i] != 0) {
            nums[insertPos++] = nums[i];
        }
    }

    
    while (insertPos < size) {
        nums[insertPos++] = 0;
    }
}

int main() {
    int n,i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter the elements:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    moveZeroes(nums, n);

    printf("Array after moving zeros:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}

