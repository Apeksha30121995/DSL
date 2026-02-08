#include<stdio.h>
int main()
{
    int arr[20],ch,n,i,j,min,temp,key,pos,pi;

    do
    {
        printf("\n1.Bubble Sort\n");
        printf("2.Selection Sort\n");
        printf("3.Insertion Sort\n");
        printf("4.Merge Sort\n");
        printf("5.Exist\n");
        printf("Enter Choice:");
        scanf("%d",&ch);
    
    printf("Enter no. of element in array:");
    scanf("%d",&n);

    printf("Enter Elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    switch (ch)
    {
    case 1:
    for (int i=0; i <n-1; i++)
    {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
        for (int j= 0; j<n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    printf("Sorted elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    break;

    case 2:
    for ( i = 0; i < n-1; i++)
    {
        min=i;

        for (j = i+1; j < n; j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
            
        }

        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;  
    }
    printf("Sorted elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    break;

    case 3:
    for (i = 0;i<n; i++)
    {
        key=arr[i];
        j=i-1;

        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    printf("Sorted elements\n:");
    for (int i = 1; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    break;

    case 4:
    pi=arr[0];

    for ( i = 0; i <n; i++)
    {
        if (arr[i]<pi)
        {
            pos++;
            temp=arr[pos];
            arr[pos]=arr[i];
            arr[i]=temp;
        }  
    }

    temp=arr[0];
    arr[0]=arr[pos];
    arr[pos]=temp;

    printf("Sorted elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    break;

    case 5:
    printf("Exist\n");
    break;

    default:
    printf("Invalid choice\n");
    }

    }while(ch!=5);

}
