#include<stdio.h>

int main(void)
{
    unsigned long long n;


    scanf("%d",&n);

    while(n!=0)

    {

        printf("%ld\n",n*(n+1)*(2*n+1)/6);
        scanf("%d",&n);
    }

    return 0;
}

/*192.168.136.1*//*CSY103062316*/
