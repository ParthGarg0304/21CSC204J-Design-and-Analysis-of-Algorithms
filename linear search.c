#include <stdio.h>

void linearsearch(int arr[],int n,int key){
    int element_found = 0,i;
    for ( i = 0; i < n; i++)
    {
        if (key == arr[i] )
        {
            element_found = 1;
            break;
        }
    }
    if (element_found == 1)
        printf("key found at position%d",i);
    else
        printf("key not found in the array\n");
}
int main()
{  
    int n;
    int i,  key;
    printf("Enter number of elements you would like to take as input: ");
    scanf("%d", &n);
    int arr[n];

    printf("\nEnter array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the key element to be searched: ");
    scanf("%d", &key);
    linearsearch(arr,n,key);
    return 0;
   

}
