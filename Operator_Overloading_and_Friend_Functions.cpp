#include<iostream>
using namespace std;
class rational
{
	private:
		int num,den;
		public:
			rational():num(0),den(0){}
			rational(int a,int b):num(a),den(b){}
			void show()
			{
				cout<<"numerator   : "<<num<<endl;
				cout<<"denominator : "<<den<<endl;
			}
			friend rational operator+(rational ,rational );
			friend rational operator-(rational ,rational );
			friend rational operator*(rational ,rational );
			friend rational operator/(rational ,rational );
};
rational operator+(rational r1,rational r2)
{
	rational r;
	r.num=r1.num*r2.den+r2.num*r1.den;
	r.den=r1.den*r2.den;
	return r;
}
rational operator-(rational r1,rational r2)
{
	rational r;
	r.num=r1.num*r2.den-r2.num*r1.den;
	r.den=r1.den*r2.den;
	return r;
}
rational operator*(rational r1,rational r2)
{
	rational r;
	r.num=r1.num*r2.num;
	r.den=r1.den*r2.den;
	return r;
}
rational operator/(rational r1,rational r2)
{
	rational r;
	r.num=r1.num*r2.den;
	r.den=r1.den*r2.num;
	return r;
}
int main()
{
	rational r1(4,5),r2(7,3);
	rational r3;
	r3=r1+r2;
	r3.show();
	r3=r1-r2;
	r3.show();
	r3=r1*r2;
	r3.show();
	r3=r1/r2;
	r3.show();
	return 0;
}
