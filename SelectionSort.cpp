#include <iostream>
using namespace std;
int a[100], n, x;
void Nhapmang(int a[], int n)
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
void Xuatmang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<"\t";
	}
}
int main()
{
	cout<<"Nhap n: ";
	cin>>n;
	Nhapmang(a, n);
	SelectionSort(a, n);
	cout<<"Mang sau khi sap xep la:\n";
	Xuatmang(a, n);
}
