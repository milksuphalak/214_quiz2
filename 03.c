#include <stdio.h>
#include <string.h>
int main ()
{
   long long int num,i,n=0,j;
      int a[]={1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99};
    scanf ("%lld",&num);
    for(i=1;i<num;i++)
    {
        for (j=1;j<a;j++)
        {
            if(i==j)
            {
                 n++;

            }
        }

    }
printf ("%lld",n);

    return 0;
}
