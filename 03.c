#include <stdio.h>
#include <string.h>
int main ()
{
   long long int num,i,n=0,j;
    char a[]="123456789";
    scanf ("%lld",&num);
    for(i=1;i<num;i++)
    {
        for (j=1;;j++)
        {
            if(i==a)
            {
            n++;
            }
        }
    }
    printf ("%lld",n);
    return 0;
}
