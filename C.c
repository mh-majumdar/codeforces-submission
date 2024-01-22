#include<stdio.h>
#include <string.h>
int main(){
	int n;
    scanf("%d",&n);
	char s[n+1];
	scanf("%s",s);

	char a='n';
	char b='y';
	char c='a';
	
	for(int i=0;i<n;i++){
		if(s[i]=='n' && s[i+1]=='a')
         {
         	printf("%c%c%c",a,b,c);
         	i++;
         }
		else printf("%c",s[i]);
	}

}