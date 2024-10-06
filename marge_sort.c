#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,a[25];
    void marges(int a[],int lower,int mid,int upper);
    void marge_sor(int a[],int lower,int upper);
    printf("How many data do you want:\n");
    scanf("%d",&n);
    printf("Enter the array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    marge_sor(a,0,n-1);
    printf("\n The element after sorting is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
}

 void marges(int a[],int lower,int mid,int upper)
 {
    int h,i,j,b[25],k;
    h=lower;
    i=lower;
    j=mid+1;
    
    while(h<=mid && j<=upper)
    {
        if(a[h]<a[j])
        {
            b[i]=a[h];
            h++;
        }
        else{
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>mid)
    {
        for (k=j;k<=upper;k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else{
        for(k=h;k<=mid;k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(k=lower;k<=upper;k++)
    {
        a[k]=b[k];
    }
 }

 void marge_sor(int a[],int lower,int upper)
 {
    int mid;
    if(upper>lower)
    {
        mid=(lower+upper)/2;
        marge_sor(a,lower,mid);
        marge_sor(a,mid+1,upper);
        marges(a,lower,mid,upper);
    }
    return;
 }