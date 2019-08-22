#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
class convert
{
	private:
		float initial;
		float converted;
		public:
			convert(float a)
			{
				initial=a;
			}
			float getinitial()
			{
				return initial;
			}
			float getconverted()
			{
				return converted;
			}
			virtual void convertit()=0;
};
class kmtomi:public convert
{
	public:
		kmtomi(float a):convert(a){}
		void convertit()
		{
			float p=getinitial()*0.6;
			cout<<p<<endl;
		}
};
class mitokm:public convert
{
	public:
		mitokm(float a):convert(a){}
		void convertit()
		{
			float p=getinitial()/0.6;
			cout<<p<<endl;
		}
};
class mtstoyds:public convert
{
	public:
		mtstoyds(float a):convert(a){}
		void convertit()
		{
			float p=getinitial()*(39/36);
			cout<<p<<endl;
		}
};
class ydstomts:public convert
{
	public:
		ydstomts(float a):convert(a){}
		void convertit()
		{
			float p=getinitial()*(36/39);
			cout<<p<<endl;
		}
};
int main()
{
	convert *ptr;
	int z;float p;
	cout<<"1-kilometers to miles"<<endl;
	cout<<"2-miles to kilometers"<<endl;
	cout<<"3-meters to yards"<<endl;
	cout<<"4-yards to meters"<<endl;
	cout<<"press the number according to your option"<<endl;
	cin>>z;
	if(z==1)
	{
	cout<<"enter the kilometers"<<endl;
    cin>>p;
	kmtomi km(p);
	ptr=&km;
	ptr->convertit();
	    }
	if(z==2)
	{
	cout<<"enter the miles"<<endl;
	cin>>p;
	mitokm mi(p);
    ptr=&mi;
	ptr->convertit();
	}
	if(z==3)
	{
	cout<<"enter the meters"<<endl;
	cin>>p;
	mtstoyds mts(p);
	ptr=&mts;
	ptr->convertit();
	}
	if(z==4)
	{
	cout<<"enter the yards"<<endl;
	cin>>p;
	ydstomts yds(p);
	ptr=&yds;
	ptr->convertit();
	}
	return 0;
}

