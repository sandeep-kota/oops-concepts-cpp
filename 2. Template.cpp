#include<iostream>
#include<cstring>
#include<string.h>
#include<iomanip>
using namespace std;
template <class T>
class aray
{
	private:
		T a[10];
		int n;
		public:
			aray():a(),n(0){}
			aray(int q)
			{
				n=q;
				for(int i=0;i<n;i++)
				cin>>a[i];
			}
			T rangesum(int m,int n)
			{
				T temp=0;
				for(int i=m-1;i<n;i++)
				temp=temp+a[i];
				return temp;
			}
			int search(T p)
			{
				for(int i=0;i<n;i++)
				if(a[i]==p)
				return i+1;
			}
			aray multiply(int d)const
			{
				aray <T>b;
				b.n=n;
				for(int i=0;i<n;i++)
				b.a[i]=a[i]*d;
				return b;
			}
			void show()
			{
				for(int i=0;i<n;i++)
				cout<<setprecision(2)<<a[i]<<" ";
				cout<<endl;
			}
};
int main()
{
	aray <int>a1(3);
	aray <float>a2(4);
	int m=a1.rangesum(2,3);
	cout<<"range sum :"<<m<<endl;
	float n=a2.rangesum(1,3);
	cout<<"range sum :"<<n<<endl;
	cout<<a1.search(2)<<endl;
	cout<<a2.search(1.2)<<endl;
	aray <int>a3;
	a3=a1.multiply(2);
	a3.show();
	aray <float>a4;
	a4=a2.multiply(3);
	a4.show();
	return 0;
}

