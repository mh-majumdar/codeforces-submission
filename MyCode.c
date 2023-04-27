#include<stdio.h>
int main()
{

    int M,N,sum=0;
    scanf("%d %d",&M,&N);

    if(M>0&&N>0)
    {
        if(M>N)
        {
            for(int i=N;i<=M;i++)
              {   sum+=i;
            printf("%d ",i);
       } 
   }

else if(M<N){
                for(int i=M;i<=N;i++)
 { sum+=i;
            printf("%d ",i);}

}
printf("Sum=%d\n",sum);
    }

}