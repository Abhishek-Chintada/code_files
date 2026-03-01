#include <stdio.h>


int main()
{
    int test = 0;
    scanf("%d", &test);
    long long l[test], r[test];
    for(int i=0;i<test;i++)
    {
        scanf("%lld %lld", &l[i], &r[i]);
    }
    
    
    for(int i=0;i<test;i++)
    {
        int count = 0;
        for(long long a=l[i];a<r[i];a++)
        {
            for(long long b=a+1;b<r[i];b++)
            {
                if((a+b) == (a^b)) count++;
            }
        }
        printf("%d\n", count);
    }
}