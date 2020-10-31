#include<iostream>
#include<math.h>
using namespace std;
int giaiPT2(float a, float b, float c,float &x1, float &x2)
{
    float delta=b*b-4*a*c;
    if(delta<0)
	{
        return 0;
    }
    else if(delta==0)
	{
        x1=x2=-b/(2*a);
        return 1;
    }
    else
	{
        delta=sqrt(delta);
        x1=(-b+delta)/(2*a);
        x2=(-b-delta)/(2*a);
        return 2;
    }
}
int main()
{
	float a,b,c;
	float x1,x2;
	cout<<"Nhap a: ";	cin>>a;
	cout<<"Nhap b: ";	cin>>b;
	cout<<"Nhap c: ";	cin>>c;
	if(a==0)
	{
		if(b==0)	cout<<"Phuong trinh vo nghiem";
		else		cout<<"Phuong trinh co 1 nghiem x = "<<-c/b;
	}
	else
	{
		if(giaiPT2(a, b, c, x1, x2)==0)			cout<<"Phuong trinh vo nghiem";
		else if(giaiPT2(a, b, c, x1, x2)==1)	cout<<"Phuong trinh co nghiem kep x1 = x2 = "<<x1;
		else									cout<<"Phuong trinh co 2 nghiem phan biet x1 = "<<x1<<"; x2 = "<<x2;
	}
}
