#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char s[4001];
	scanf("%s",&s);

	for(int i=1;i<n;i++){
		int ans=0;
		for(int j=0;j+i<n;j++){
			if(s[j]!=s[j+i]) ans++;
			else break;
		}
		printf("%d\n",ans);
	}
}