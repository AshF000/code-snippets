//A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.
#include<stdio.h>
#include<stdbool.h>

bool isPerfect(long long x)
{
    long long sum=0;
    for(long long i=1;i<=x/2;i++)
    {
        if(x%i==0)
        {
            sum+=i;
        }
    }
    return (sum==x);
}

void perfect_ints(int from, int to)
{
    int sum=0;
    for(int i=from; i<=to;i++)
    {
        for(int j=1;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
    if(sum==i)
    {
        printf("%d\n",i);
    }
        sum=0;
    }
}

int main()
{
    long long x;
    printf("Enter number to check: ");
    scanf("%lld",&x);
    (isPerfect(x)) ? printf("YES\n") : printf("NO\n");


    // To find perfect number within a range
    /*
    int from,to;
    printf("Perfect number range: ");scanf("%d%d",&from,&to);

    printf("Perfect numbers from %d to %d are:\n",from,to);
    perfect_ints(from,to);
    */
    return 0;
}
