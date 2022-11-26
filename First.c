#include <stdio.h>

int n;

int tra(int arr[]) {
    
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    
    return 0;
}

int cre(int arr[]){
    
    for (int i = 0; i<n; i++) {
        printf("%d",arr[i]);
    }
    
    return 0;
    
}


int main()
{
    
   
    printf("Enter array size : ");
    scanf("%d",&n);
    
    
    int arr[n];
    
    tra(arr);
    
    cre(arr);
    
    
    
    
    return 0;
}
