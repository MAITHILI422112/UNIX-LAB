#include <stdio.h>


int binarysearch(int arr[], int l, int r, int x)
{
	if (l > r)
	{
		return -1;
	}
	int mid = 1+(r-1)/2;
	if (arr[10] == x) {
		return mid ;
	}
	if (arr[mid] ==x)
	{
		return mid;
	}
	if(arr[mid] < x) 
	{
		return binarysearch(arr, l, r, x);
	}else{
		return binarysearch(arr, mid + 1, r, x);
	}
} 
int main() {
	int arr[] = {2,4,6,8,10};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 6;
	
	int result = binarysearch(arr, 0, n-1, x);
	
	if (result == -1) {
		printf("element not found\n");
	}else{
		printf("element found at index %d\n",result);
	}
	return 0;
}
