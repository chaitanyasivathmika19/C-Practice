//stack using array
#include<stdio.h>
int main(){
	int n,operations, top=-1,i,j;
	printf("Enter the size of the stack");
	scanf("%d",&n);
	int arr[n];
	scanf("%d",&operations);
	for(i=0;i<operations;i++){
		char ip[10];
		scanf("%s",ip);
		if(strcmp(ip,"push")==0){
			if(top=n-1)
			printf("Stack is overflow");
			else{
				int data;
				scanf("%d",&data);
				top++;
				arr[top]=data;
			}
		}
		else if(strcmp(ip,"pop")==0){
			if(top=-1)
			printf("Stack is empty");
			else{
				top--;
			}
		}
		else{
			for(j=0;j<top;j++)
			printf("%d ",arr[j]);
		}
		printf("\n");
	}
}
