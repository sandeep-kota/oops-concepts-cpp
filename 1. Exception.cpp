#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
class badoperator{};
class badoperand{};
class dividebyzero{};
void validateoperand(long int a)
{
	if(a<10000||a>50000)
	throw badoperand();
}
void validateoperator(char c)
{
	if(c!='+'&&c!='-'&&c!='*'&&c!='/')
	throw badoperator();
}
float calculate(long int x,long int y,char z)
{
	validateoperand(x);
	validateoperator(z);
	if(y==0)
	throw dividebyzero();
	return x/y;
}
int main()
{
	long int a,b;
	char c;
	cout<< "Enter first number, secind number and the operand:"<<endl;
	cin>>a>>b>>c;
	try
	{
		float z=calculate(a,b,c);
		cout<<z<<endl;
	}
	catch(badoperand)
	{
		cout<<"not in range of 10000-50000"<<endl;
	}
	catch(badoperator)
	{
		cout<<"invalid operator"<<endl;
	}
	catch(dividebyzero)
	{
		cout<<"divisor can't be zero"<<endl;
	}
	return 0;
}


