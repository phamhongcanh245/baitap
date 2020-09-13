#include <iostream>
using namespace std;
int a[100], n, x;
void Nhapmang(int a[], int &n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu a["<<i<<"]: ";
		cin>>a[i];
	}
}
void swap(int a[], int i, int j)
{
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
void SelectionSort(int a[], int n)
{
	int min;
	int iMin;
	for(int i=0; i<n-1; i++)
	{
    	min=a[i];
    	iMin=i;
    	for(int j=i+1; j<n; j++)
    	if(a[j]<a[iMin])
		{
			min=a[j];
			iMin=j;
		}
    	swap(a, iMin, i);
	}
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
int main()
{
	cout<<"Nhap n: ";
	cin>>n;
	Nhapmang(a, n);
	cout<<"Nhap gia tri can tim kiem: ";
	cin>>x;
	a[n]==x;
	if(BinarySearch(a, n, x)==n)
		cout<<"Khong tim thay gia tri thich hop!";
	else
		cout<<"Gia tri can tim nam o vi tri a["<<BinarySearch(a, n, x)<<"]";
}
