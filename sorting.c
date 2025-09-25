#include <stdio.h>

int main() {
    int n, i, j, temp, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Choose sorting order:\n1. Ascending\n2. Descending\nEnter choice: ");
    scanf("%d", &choice);

    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
           
            if (choice == 1 && arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        
            else if (choice == 2 && arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
