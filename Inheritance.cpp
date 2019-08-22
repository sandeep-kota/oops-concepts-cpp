#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
class tool
{
	public :
		int strength;
		char type;
		public:
			void setstrength(int n)
			{
				strength=n;
			}
};
class rock:public tool
{
	public:
		rock(int a)
		{
			setstrength(a);
			type='r';
		}
		bool fight(tool c)
		{
			float x,y;
			if(c.type=='s')
			{x=2*strength;y=c.strength;
			 if(x>y)
			 return true;
			 else 
			 return false;}
			 if(c.type=='p')
			{x=strength/2;y=c.strength;
			 if(x>y)
			 return true;
			 else 
			 return false;}
		}
};
class scissor:public tool
{
	public:
		scissor(int a)
		{
			setstrength(a);
			type='s';
		}
		bool fight(tool c)
		{
			float x,y;
			if(c.type=='r')
			{x=strength/2;y=c.strength;
			 if(x>y)
			 return true;
			 else 
			 return false;}
			 if(c.type=='p')
			{x=strength*2;y=c.strength;
			 if(x>y)
			 return true;
			 else 
			 return false;}
		}
};
class paper:public tool
{
	public:
		paper(int a)
		{
			setstrength(a);
			type='p';
		}
		bool fight(tool c)
		{
			float x,y;
			if(c.type=='s')
			{x=strength/2;y=c.strength;
			 if(x>y)
			 return true;
			 else 
			 return false;}
			 if(c.type=='r')
			{x=strength*2;y=c.strength;
			 if(x>y)
			 return true;
			 else 
			 return false;}
		}
};
int main()
{
	rock r(4);
	scissor s(6);
	paper p(8);
	if(r.fight(s))
	cout<<"rock wins over scissor"<<endl;
	else
	cout<<"scissor wins over rock"<<endl;
	if(r.fight(p))
	cout<<"rock wins over paper"<<endl;
	else
	cout<<"paper wins over rock"<<endl;
	if(s.fight(r))
	cout<<"scissor wins over rock"<<endl;
	else
	cout<<"rock wins over scissor"<<endl;
	if(s.fight(p))
	cout<<"scissor wins over paper"<<endl;
	else
	cout<<"paper wins over scissor"<<endl;
	if(p.fight(s))
	cout<<"paper wins over scissor"<<endl;
	else
	cout<<"scissor wins over paper"<<endl;
	if(p.fight(r))
	cout<<"paper wins over rock"<<endl;
	else
	cout<<"rock wins over paper"<<endl;
	return 0;
}

