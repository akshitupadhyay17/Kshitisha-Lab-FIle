//Kshitisha Negi
//500107178

#include<stdio.h>

int main()
{
    int arr[100], x;

    printf("Enter number of element you want to enter:");
    scanf("%d", &x);

    for(int i=0; i<x; i++){
        printf("Enter number:");
        scanf("%d", &arr[i]);
    }

    printf("Number entered by the user:\n");

    for(int i=0; i<x; i++){
        printf("%d\t", arr[i]);
    }

    for(int i=0; i<x-1; i++){
        int min=i;
        for(int j=i+1; j<x; j++){
            if (arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp;
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }

    printf("\nAfter sorting:\n");
    for(int i=0; i<x; i++){
        printf("%d\t", arr[i]);
    }
}