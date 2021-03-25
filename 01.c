#include <stdio.h>
int main()
{
     int num,i,a,b;
    scanf ("%lld",&num);

    for (i=0;i<num;i++)
    {
    }
    if (num==pow(2,3)||num==pow(3,3)||num==pow(4,3)||num==pow(5,3)||num==pow(6,3)||num==pow(7,3)||num==pow(8,3)||num==pow(9,3)||num==16||num==24||num==32)
    {
        printf("Not Cube Free");
    }
    else if (num>=9)
    {
        printf ("%d",i-1);
    }
    else if (num==1)
    {
        printf ("1");
    }
    else
    {
        printf ("%d",i);
    }

}
