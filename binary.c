#include<stdio.h>
#include<math.h>
int binary(int arr[],int x,int low,int high)
{
    int count;
    if(low<high)
    {
       int mid=(low+high)/2;
       
       if(arr[mid]==x)
       {
         return mid;
       }
       else if(x>arr[mid])
       {
         return binary(arr,x,mid+1, high);                          
       }
       else if(x<arr[mid])
       {
          return binary(arr,x,low,mid-1);
       }          
}
    return -1;
}                
int main()
{
    int arr[5],com,i,x;
    int low=0,high=4;
    printf("Enter sortet list:");
    for(i=0;i<5;i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("Enter key element:");
    scanf("%d",&x);
    com= binary(arr,x,low,high);
    if(com!=-1){
    printf("The element is at index:%d",com);
    }
    else{ 
        printf("The element is not fount"); 
    }

    int n = sizeof(arr)/sizeof(arr[0]);
    // printf("size=%d",sizeof(arr));
    double logn = log2(n);
    printf("\nThe time complexity of the binary search algorithm is O(log %.2f)", logn);
    
}             
