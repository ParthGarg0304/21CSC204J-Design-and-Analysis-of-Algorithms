#include <stdio.h>  

void bubblesort(int arr[], int n) {  
  int i, j;  
  for (i = 0; i < n - 1; i++) {  
    for (j = 0; j < n - i - 1; j++) {  
      if (arr[j] > arr[j + 1]) {  
        int temp = arr[j];  
        arr[j] = arr[j + 1];  
        arr[j + 1] = temp;  
      }  
    }  
  }  
}

// Driver code
int main()
{
    int n,arr[n];
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
       
    }
   
    bubblesort(arr, n);
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
        printf("\n");
       
    }
    return 0;
}
