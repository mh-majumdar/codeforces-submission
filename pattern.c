#include <stdio.h>
int main(){
	int n;
	scanf("%n",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("* ");
		}
	}
}