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
	cout<<"Mang ban dau la: "; Xuatmang(a, n);
	cout<<endl;
	SelectionSort(a, n);
	cout<<"Mang khi sap xep la: "; Xuatmang(a, n);
	return 0;
}
