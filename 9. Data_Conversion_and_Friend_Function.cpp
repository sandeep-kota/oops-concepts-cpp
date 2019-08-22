#include<iostream>
#include<math.h>
using namespace std;
class pcomplex;
class icomplex
{
	private:
		float rp;
		float ip;
		public:
			icomplex():rp(0.0),ip(0.0){}
			icomplex(float a,float b):rp(a),ip(b){}
			void show()
			{
				cout<<"rp :"<<rp<<endl;
				cout<<"ip :"<<ip<<endl;
			}
			float getrp()
			{
				return rp;
			}
			float getip()
			{
				return ip;
			}
			friend icomplex operator+(icomplex,pcomplex);
};
class pcomplex
{
	private:
		float radius,theta;
		public:
			pcomplex():radius(0.0),theta(0.0){}
			pcomplex(float a,float b):radius(a),theta(b){}
			pcomplex(icomplex i1)
			{
				radius=sqrt(i1.getrp()*i1.getrp()+i1.getip()*i1.getip());
				theta=atan(i1.getip()/i1.getrp());
			}
			operator icomplex()const
			{
				float x,y;
				x=radius*cos(theta);
				y=radius*sin(theta);
				return icomplex(x,y);
			}
			friend icomplex operator+(icomplex,pcomplex );
};
icomplex operator+(icomplex i3,pcomplex p1)
			{
				icomplex i1=p1,i2;
				i2.rp=i1.rp+i3.rp;
				i2.ip=i1.ip+i3.ip;
				return i2;
			}
int main()
{
	icomplex i(40,50);
	pcomplex p(20,3.14);
	icomplex i1=i+p;
	i1.show();
	return 0;
}
