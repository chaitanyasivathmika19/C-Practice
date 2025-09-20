#include<stdio.h>
int main(){
	int n, even=0, odd=0;
	int arr[n];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%2==0)
		even += arr[i];
		else
		odd+= arr[i];
	}
	printf("even count :%d\n",even);
	printf("odd count :%d\n",odd);
	
}
