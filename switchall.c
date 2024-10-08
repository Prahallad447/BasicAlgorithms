#include<stdio.h>
#include<conio.h>
void main()
{
    
    void arrayins(int n,int a[],int pos,int item);
    void arraydele(int n,int a[],int pos);
    void travers(int n,int a[]);
    void bubble_sort(int n,int a[]);
    int b_search(int n,int a[],int key);
    void linear_sear(int n,int a[],int key);
    int n,a[20],pos,item,i,ch,key;
    printf("Press 1 for insertion \n Press 2 for deletion\n Press 3 for traversing \n Press 4 for Bubble sort\n Press 5 for Binary search \n Press 6 for Linear search \n");
    printf("Enter your choice:\n");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1: 
        printf("enter the value of n:\n");
        scanf("%d",&n);
        printf("Enter the array element:\n ");
        for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
        printf("Enter the value of position :\n");
        scanf("%d",&pos);
        printf("Enter the value of item:\n");
        scanf("%d",&item);
        arrayins(n,a,pos,item);
        break;


        case 2:printf("Deletion:\n");
        printf("Enter the value of n:\n");
        scanf("%d",&n);
        printf("Enter the array element:\n");
        for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
        printf("Enter the position:\n");
        scanf("%d",&pos);
        arraydele(n,a,pos);
        break;

        
        case 3:printf("Traversing:\n");
        printf("Enter the value of n:\n");
        scanf("%d",&n);
        printf("Enter the array element:\n");
        for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
        travers(n,a);
        break;


        case 4:printf("Bubble sort: \n");
        printf("Enter the value of n:\n");
        scanf("%d",&n);
        printf("Enetr the array element:\n");
        for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
        bubble_sort(n,a);
        break;

        
         case 5:printf("Binary search: \n");
        printf("Enter the value of n:\n");
        scanf("%d",&n);
        printf("Enter array element:\n");
        for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
        printf("Enter the search item:");
        scanf("%d",&key);
        b_search(n,a,key);
        break;

        
         case 6:printf("Linear search: \n");
        printf("Enter the value of n:\n");
        scanf("%d",&n);
        printf("Enter array element:\n");
        for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
        printf("Enter the search item:");
        scanf("%d",&key);
        linear_sear(n,a,key);
        break;

    
        default: printf("not valid");
        break;


    }
    getch();
}
void arrayins(int n,int a[20],int pos,int item)
{
    int i;
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=item;
    n=n+1;
    printf("After insertion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
 void arraydele(int n,int a[10],int pos)
 {
    int i;
    printf("deletion item:%d\n",pos-1);
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("After the deletion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
 }
 void travers(int n,int a[10])
{
    int i;
    printf("Travers item :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void bubble_sort(int n, int a[10])
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            }
        }
    }
    printf("after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

int b_search(int n,int a[],int key)
{
    int i,l,h,mid;
    l=0;
    h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==key)
        {
            printf("Search is successful\n");
            printf("Position=%d",mid+1);
            break;
        }
        else
        {
            if(a[mid]>key)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
    }
   if(key!=a[mid])
   {
    printf("search is unsuccessful");
   }
}   

void linear_sear(int n,int a[10],int key)
{
    int i;
    for(i=0;i<n;i++)
    {
       if(a[i]==key)
       {
        printf("search is successful\n");
        printf("possition=%d",i+1);
        break;
       }
    }
    if(key!=a[i])
    {
        printf("search is unsuccessful");
    }
}