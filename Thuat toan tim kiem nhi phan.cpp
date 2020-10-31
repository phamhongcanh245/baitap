#include <iostream>
using namespace std;
void Nhapmang(int a[], int &n)
{	
	cout<<"Nhap so phan tu cua mang n = "; cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"Phan tu a["<<i<<"]"<<" = "; cin>>a[i];	
	} 
}
void swap(int a[], int i, int j)
{
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
void BubbleSort(int a[], int n)
{
	for(int i=0; i<n-1; i++)
		for(int j=0; j<n-i-1; j++)
			if(a[j]>a[j+1])
				swap(a, j, j+1);
}
int BinarySearch(int a[], int n, int x)
{
	int left=0, right=n-1, mid;
	do
	{
    	mid=(left+right)/2;
    	if(a[mid]==x) 		return mid;
    	else if(a[mid]<=x)	left=mid+1;
    	else right=mid-1;
  	}
	while(left<=right);
	return -1;
}
void Xuatmang(int a[], int &n)
{ 
	cout<<"[ ";
	for (int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"]";
}
int main()
{
	int a[100], n, x;
	Nhapmang(a, n);
	cout<<"Mang: "; Xuatmang(a, n);
	cout<<"\nNhap gia tri can tim kiem: ";
	cin>>x;
	BubbleSort(a, n);
	if(BinarySearch(a, n, x)==-1)
		cout<<"Khong tim thay gia tri thich hop!";
	else
		cout<<"Gia tri can tim nam o vi tri a["<<BinarySearch(a, n, x)<<"]";
}
