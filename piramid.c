#include<stdio.h>//header file

int displayPiramid(int n,int space,int star,int flag)
{

    int count1 = 0;
    int count2 = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<space;j++)
        {
            printf(" ");
        }
        for(int k = 0;k<star;k++)
        {
            printf("*");
            if(flag == 1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }

        printf("\n");
        if(flag == 1)
        {
            star+=2;
            space--;

        }
        else
        {
            star-=2;
            space++;
        }
    }
    if(flag == 1)
    {
        return count1;
    }
    else
    {
        return count2;
    }



}
int main()
{
    int space,n;
    printf("Enter a number!\n");
    scanf("%d",&n);
    space = n;
    for(int i = 0;i<1;i++)
    {
        int sum1 = displayPiramid(n-1,space,1,1);
        int sum2 = displayPiramid(n,1,n+n-1,0);
        printf("Total line of star's = %d\n",sum1+sum2);
    }
}
