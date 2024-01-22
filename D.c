#include<stdio.h>
int main(){
	int n,p,q,r,s
	scanf("%d%d%d%d%d",&n,&p,&q,&r,&s);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=p-1,j=r-1;i<q,j<s;i++,j++){
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}

	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}

}