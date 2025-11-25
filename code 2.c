#include <stdio.h>

void reverseString(char s[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    int n,i;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    char s[n];

    printf("Enter characters one by one:\n");
    for (i = 0; i < n; i++) {
        scanf(" %c", &s[i]); 
    }

    reverseString(s, n);

    printf("Reversed string:\n");
    for ( i = 0; i < n; i++) {
        printf("%c ", s[i]);
    }

    return 0;
}

