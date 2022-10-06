#include<stdio.h>
int main()
{
	int arr[100],key,i,n,flag=0;
	printf("array size=");
	scanf("%d",&n);
	printf("array elements=\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("search key=");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	   printf("found");
	else
	   printf("not found");
	return 0;
}
