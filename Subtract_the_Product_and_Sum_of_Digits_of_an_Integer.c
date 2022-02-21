#include<stdio.h>
int main()
{
    int n,temp,sum=0,pro=1;
    scanf("%d",&n);
    while(n>0)
    {
    temp=n%10;
    sum=sum+temp;
    pro=pro*temp;
    n=n/10;
    }
    printf("%d",(pro-sum));
    return 0;
}
