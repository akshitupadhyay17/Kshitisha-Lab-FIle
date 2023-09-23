#include<stdio.h>
#include<math.h>

int merge(int a[], int p, int q, int r){

    int n1 = q - p +1;
    int n2 = r - q;

    int L[n1],R[n2];

    for(int i =1; i<=n1; i++){
        L[i] = a[p+i-1];
    }

    for(int j =1; j<=n2; j++){
        R[j] = a[q+j];
    }

    L[n1+1] = 999999;
    R[n2+1] = 999998;

    int i=1, j=1;

    for(int k=p; k<=r; k++){

        if (L[i]<=R[j]){

            a[k] = L[i];
            i++;
        }

        else{
            a[k] = R[j];
            j++;
        }
    }

}


int msort(int a[], int p, int r)
{
    if(p<r){
        int q = floor((p+r)/2);
        msort(a, p ,q);
        msort(a, q+1, r);

        merge(a, p, q, r);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    int a[] = { 6,4,2,1,9,8,3,5 };
    int a_size = sizeof(a) / sizeof(a[0]);
 
    printf("Given array is \n");
    printArray(a, a_size);
 
    msort(a, 0, a_size - 1);
 
    printf("\nSorted array is \n");
    printArray(a, a_size);

    return 0;
}