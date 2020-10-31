#include <iostream>
using namespace std;
int main()
{
	float a, b;
	char x;
	cout<<"Nhan phep toan muon thuc hien: "; cin>>a>>x>>b;
	switch(x)
	{
		case '+': cout<<a<<" + "<<b<<" = "<<a+b; break;
		case '-': cout<<a<<" - "<<b<<" = "<<a-b; break;
		case '*': cout<<a<<" * "<<b<<" = "<<a*b; break;
		case '/': cout<<a<<" / "<<b<<" = "<<a/b; break;
	}
	return 0;
}
