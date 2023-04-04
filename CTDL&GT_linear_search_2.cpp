#include<stdio.h>
#define LENGTH 10

int* nhap()
{
	static int arr[LENGTH];
	int i;
	for(i = 0; i< LENGTH; i++)
	{
		scanf("%d", &arr[i]);
	}
	return arr;
}

void hienthi( const inr arr[])
{
	int i;
	for(i = 0;i< LENGTH; i++)
	{
		printf("%5d",arr[i]);
	}
	printf("\n");
}

int linearSearch(int arr[], int x){
	int i;
	for(i = 0; i < LENGTH; i++)
	{
		if(arr[i] == x)
		return 1; 
	}
	return 0;
}

int main(){
	
	int *arr;
	arr = nhap();
	hienThi(arr);
    
    int x;
    printf("\nNhap x = ");
    scanf("%d", &x);
    
    printf("\nSo lan xuat hien cua x trong mang: %d lan", timX(arr,x));
    if( linearSearch(arr, x))
        printf("\nTon tai x trong mang.");
    else printf("\nKhong ton tai X trong mang.");
    
    return 0;
}
