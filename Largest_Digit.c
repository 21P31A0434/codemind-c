#include<stdio.h>
int main()
{
int num, reminder, Largest=0;
//printf("Enter the Number:");
scanf("%d", &num);
while(num > 0)
    {
reminder = num % 10;
if(Largest < reminder)
 {
     Largest = reminder;
 }
num = num / 10 ;
    }
printf("%d", Largest);
return 0;
}