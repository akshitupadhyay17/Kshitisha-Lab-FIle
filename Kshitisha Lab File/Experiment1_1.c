//Kshitisha Negi
//500107178

#include<stdio.h>

int main()
{
    int arr[100], x;

    printf("Enter number you want to enter:");
    scanf("%d", &x);

    for(int i=0; i<x; i++){
        printf("Enter number:");
        scanf("%d", &arr[i]);
    }

    printf("Number entered by you:\n");

    for(int i=0; i<x; i++){
        printf("%d", arr[i]);
        printf("\t");
    }

    printf("\n");

    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
        if (arr[j]<arr[j+1]){
            continue;
        }
        else {
            int temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }

    printf("After sorting:\n");
    for(int i=0; i<x; i++){
        printf("%d\t", arr[i]);
    }
}