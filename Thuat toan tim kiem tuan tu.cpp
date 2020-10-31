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
int LinearSearch(int a[], int &n, int &x)
{
	for(int i=0; i<n; i++)
		if(a[i]==x)	return i;
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
	if(LinearSearch(a, n, x)>=n)
		cout<<"Khong tim thay gia tri thich hop!";
	else
		cout<<"Gia tri can tim nam o vi tri a["<<LinearSearch(a, n, x)<<"]";
}
