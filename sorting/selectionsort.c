#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,a[100],t,min,loc;
    printf("Enter size of the array:\n");
    scanf("%d",&n);
    printf("Enter the array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
   {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                loc=j;
            }
        } 
        if(a[i]>a[loc])
        {
            t=a[i];
            a[i]=a[loc];
            a[loc]=t;
        }
  

    }
   printf("After selection sort:\n");
   for(i=0;i<n;i++)
   {
        printf("%d\t",a[i]);
   }
    return 0;
}
