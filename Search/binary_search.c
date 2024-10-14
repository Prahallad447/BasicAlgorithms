#include<stdio.h>
#include<conio.h>
void search(int n,int a[],int item);
int main()
{
    int a[10],n,mid,item,l,h;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the array element:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter search item:\n");
    scanf("%d",&item);
    search(n,a,item);

    return 0;
}

void search(int n,int a[],int item)
{
    int l,h,mid;
    l=0;
    h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==item)
        {
            printf("Search is successful\n");
            printf("Index=%d",mid);
            break;
        }
        else{
            if(mid<item)
            {
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
    }
    if(a[mid]!=item)
    {
        printf("Search is not successful");
    }

}