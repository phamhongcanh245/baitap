#include<iostream>
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
	int check=0;
	for(int i=0; i<n-1; i++)
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a, j, j+1);
				check=1;
			}
			if(check=0) break;
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
	int a[100], n;
	Nhapmang(a, n);
	cout<<"Mang ban dau la: "; Xuatmang(a, n);
	cout<<endl;
	BubbleSort(a, n);
	cout<<"Mang khi sap xep la: "; Xuatmang(a, n);
	return 0;
}
