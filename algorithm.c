#include <stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d", &a)&&a!=1)
    {
        b=0;
        while(a!=1)
        {
            if(a%2==1)
            {
                a=(a*3)+1;
                b=b+1;
            }
            for(;a%2==0;)
            {
                a=a/2;
                b=b+1;
            }
        }
        printf("=>%d\n", b);
    }
    return 0;
}
