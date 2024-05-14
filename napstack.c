#include<stdio.h>
int main()
{
    int n;
    printf("Enter the total number of product:");
    scanf("%d",&n);
    int ne[n],pt[n],wt[n],i,s,temp;
    float rn[n];
    
    
    for(i=0;i<n;i++)
    {
             printf("\nEnter the name of product:");
             scanf("%d",&ne[i]);
             printf("Enter the weight of product:");
             scanf("%d",&wt[i]);
             printf("Enter the profit of product:");
             scanf("%d",&pt[i]);       
    }
   
    printf("\nEnter the capacity of napstack:");
    scanf("%d",&s);
    
    for(i=0;i<n;i++)
    {
                    rn[i]=pt[i]/wt[i];
    }
    
     printf("The chart is:-");
    
    printf("\nName\t\tweight\t\tProfit\t\tRatio");
    for(i=0;i<n;i++)
    {
                    printf("\n%d \t\t\t%d \t\t\t%d\t\t\t%f",ne[i],wt[i],pt[i],rn[i]);
    }
   do
   {
       i=0
       if(rn[i]<rn[i+1])
       {
            temp=rn[i];
           rn[i]=rn[i+1];
           rn[i+1]=temp;
           
            temp=pt[i];
           pt[i]=pt[i+1];
           pt[i+1]=temp;
           
            temp=wt[i];
           wt[i]=wt[i+1];
           wt[i+1]=temp;
           
            temp=ne[i];
           ne[i]=ne[i+1];
           ne[i+1]=temp;
           i++;
       }
   }while(rn[i]>rn[i+1]);
   
    printf("\nName\t\tweight\t\tProfit\t\tRatio");
    for(i=0;i<n;i++)
    {
                    printf("\n%d \t\t\t%d \t\t\t%d\t\t\t%f",ne[i],wt[i],pt[i],rn[i]);
    }
}
