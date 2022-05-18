#include<stdio.h>
#include<string.h>
int main()
{
   int n,x=0;
   scanf("%d",&n);
   char str[100];
   for(int i=1;i<=n;i++){
    scanf("%s",&str);
    if(str[1]=='+')
        ++x;
    else
        --x;
   }
   printf("%d",x);
}
