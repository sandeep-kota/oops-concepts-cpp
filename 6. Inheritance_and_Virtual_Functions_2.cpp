#include<iostream>
#include<iomanip>
using namespace std;
class pet
{
	private:
	string	food;
	string name;
	public:
		pet()
		{
		cin>>name;
		cin>>food;
		}
		pet(string a,string b):food(a),name(b){}
		string getname()
		{
			return name;
		}
		string getfood()
		{
			return food;
		}
		virtual void says()=0;
		virtual void likes()=0;
		
};
class dog:public pet
{
	private:
		string favactivity;
		public:
			dog():pet()
			{
			cin>>favactivity;
			}
			dog(string a,string b,string c):pet(a,b),favactivity(c){}
			void says()
			{
				cout<<getname()<<" "<<"bow bow"<<endl;
			}
			void likes()
			{
				cout<<getname()<<" "<<getfood()<<" "<<favactivity<<endl;
			}
};
class cat:public pet
{
	private:
		int age;
		public:
			cat():pet()
			{
			cin>>age;
			}
			cat(string a,string b,int c):pet(a,b),age(c){}
			void says()
			{
				cout<<getname()<<" "<<"mew mew"<<endl;
			}
			void likes()
			{
				cout<<getname()<<" "<<getfood()<<" "<<age<<endl;
			}
};
int main()
{
	string a,b,c;
	int d;
	pet *ptr[5];
	for(int i=0;i<=1;i++)
	{
		cout<<"enter name and food and favactivity of dog"<<endl;
		dog d1;
		ptr[i]=&d1;
		ptr[i]->says();
		ptr[i]->likes();
	}
	for(int i=2;i<5;i++)
	{
		cout<<"enter name and food and age of cat"<<endl;
		cat c1;
		ptr[i]=&c1;
		ptr[i]->says();
		ptr[i]->likes();
	}
}

