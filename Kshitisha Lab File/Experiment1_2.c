//Kshitisha Negi
//500107178

#include <stdio.h>

//Linear Search
int main() 
{
    int num, arr[100], x;

    printf("Enter number of elements you want to enter: ");
    scanf("%d", &x);
    
    for (int i = 0; i < x; i++) {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }
    
    printf("Numbers entered by the user:\n");
    for (int i = 0; i < x; i++) {
        printf("%d\t", arr[i]);
    }
    
    printf("\nEnter number you want to find: ");
    scanf("%d", &num);
    
    int found = 0; // Flag to indicate if the number is found
    
    for (int i = 0; i < x; i++) {
        if (arr[i] == num) {
            printf("The number is found at index: %d\n", i + 1);found = 1; // Set the flag to indicate number is found
            break;
        }
    }
    
    if (!found) {
        printf("The number was not found in the array.\n");
    }
    
    return 0;
}
