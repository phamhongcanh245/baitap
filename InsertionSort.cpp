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
void InsertionSort(int a[], int n)
{
	int pos, x;
	for(int i=1; i<n; i++)
	{
    x=a[i];
	pos=i-1;
    while(pos>=0 && a[pos]>x)
	{
    	a[pos+1]=a[pos];
    	pos--;
    }
    a[pos+1] = x;
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
	InsertionSort(a, n);
	cout<<"Mang sau khi sap xep la:\n";
	Xuatmang(a, n);
}
