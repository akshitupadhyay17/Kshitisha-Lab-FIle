#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of processes : ");
    scanf("%d",&n);
    int pid[n],bt[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the process id for process no %d : ",(i+1));
        scanf("%d",&pid[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the burst time for process no %d : ", pid[i]);
        scanf("%d",&bt[i]);
    }
    printf("\n");
    int wt[n];
    wt[0]=0;
    for(int i=1;i<n;i++)
    {
        wt[i] = wt[i-1] + bt[i-1];
    }
    for(int i=0;i<n;i++)
    {
        printf("\nWaiting time for process %d is : %d",pid[i],wt[i]);
    }
}