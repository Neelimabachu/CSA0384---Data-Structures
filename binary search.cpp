#include<stdio.h>
int main()
{
	int arr[100],key,i,n,f,l,mid,flag=0;
	printf("array size=");
	scanf("%d",&n);
	printf("array elements=\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("search key=");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	f = 0;
    l = n - 1;
    mid = (f+l)/2;
    while (f <= l) 
	{
        if (arr[mid]< key)
           f = mid + 1;
        else if (arr[mid]==key) 
		{
           printf("%d found at location %d",key,mid+1);
           break;
        }
        else
          l=mid-1;
          mid =(f+l)/2;
  }
  if (f>l)
    printf(" %d key not found", key);
  return 0;
}
