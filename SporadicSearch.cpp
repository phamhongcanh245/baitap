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
int SporadicSearch(int a[], int &n, int &x)
{
	a[n]==x;
	for(int i=0; i<=n; i++)
		if(a[i]==x)	return i;
}
int main()
{
	cout<<"Nhap n: ";
	cin>>n;
	Nhapmang(a, n);
	cout<<"Nhap gia tri can tim kiem: ";
	cin>>x;
	if(SporadicSearch(a, n, x)==n)
		cout<<"Khong tim thay gia tri thich hop!";
	else
		cout<<"Gia tri can tim nam o vi tri a["<<SporadicSearch(a, n, x)<<"]";
}
