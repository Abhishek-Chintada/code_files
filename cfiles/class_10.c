# include <stdio.h>
int compare(int a, int b)
{
    if(a==b) return 0;
    else return 1;
}
int main(void)
{
   int a =0, b = 0;
   scanf("%d %d", &a, &b);
   if(compare(a,b)) printf("Equal\n");
   else printf("Not Equal\n");
   return 0;
}