#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100],temp;
    int l,i,j,cnt=0;
    scanf("%s",&ch);

    l=strlen(ch);

    for(i=0;i<l;i++){
        for(j=i+1;j<l;j++){
            if(ch[i]>ch[j]){
                temp=ch[i];
                ch[i]=ch[j];
                ch[j]=temp;
            }
        }
    }
   /// printf("%s",ch);

    for(i=0;i<l;i++){
        for(j=i+1;j<l;j++){
            if(ch[i]==ch[j])
                cnt++;

            else{
                    i=j-1;
                break;
            }
        }
        if(j==l) break;
    }
     ///printf(" %d\n ",cnt);
    l=l-cnt;
    ///printf(" %d\n ",l);
    if(l%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    return 0;
}
