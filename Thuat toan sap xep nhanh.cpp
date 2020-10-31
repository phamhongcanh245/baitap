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
	InsertionSort(a, n);
	cout<<"Mang khi sap xep la: "; Xuatmang(a, n);
	return 0;
}
