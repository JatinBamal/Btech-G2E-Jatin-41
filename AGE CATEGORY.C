#include <stdio.h>

int main() {
    int arr[5];
    int i;

    // Accepting elements
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Displaying elements
    printf("Array elements are:\n");
    for(i = 0; i < 5; i++) {0
        printf("%d ", arr[i]);
    }

    return 0;
}