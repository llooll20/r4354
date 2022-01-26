#include <stdio.h>
int main(void)
{
	int t,n,i,string[1000];
	float result=0,count=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		count=0;
		result=0;
		scanf("%d",&n);
		for(int j=0;j<n;j++){
			scanf("%d",&string[j]);
			result+=string[j];
		}
		for(int j=0;j<n;j++){
			if(string[j]>result/n)
				count++;
		}
		printf("%.3f%%",(float)count/n*100);

	}
	return 0;
}

