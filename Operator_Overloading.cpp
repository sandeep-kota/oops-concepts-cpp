#include<iostream>
#include<iomanip>
using namespace std;
class matrix
{private:
	float a[50][50];
	int r,c;
	public:
	matrix():r(0),c(0){}
	matrix(int a,int b):r(a),c(b){}
		void getmatrix()
		{cout<<"enter the no. of rowsand columns";
		cin>>r>>c;
		for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
		{cin>>a[i][j];
		}
		}
		void putmatrix()
		{for(int i=0;i<r;i++)
		{
		cout<<endl;
		for(int j=0;j<c;j++)
		{cout<<a[i][j]<<" ";
		}
		}
		cout<<endl;
		}
matrix operator +(const matrix &m)const
{
	if(m.r==r&&m.c==c)
	{
	matrix p;
	p.r=r;p.c=c;
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	{
		p.a[i][j]=a[i][j]+m.a[i][j];
	}return p;
    }
    else
    cout<<"can't be added"<<endl;
}
matrix operator -(const matrix &m)const
{
	if(m.r==r&&m.c==c)
	{
	matrix p;
	p.r=r;p.c=c;
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	{
		p.a[i][j]=a[i][j]-m.a[i][j];
	}return p;
    }
    else
    cout<<"can't be subtracted"<<endl;
}
matrix operator *(const matrix &m)const
{
	if(c==m.r)
	{
	matrix p;float sum=0;
	p.r=r;p.c=m.c;
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	{
	sum=0;
	for(int k=0;k<c;k++)
	{
		sum=a[i][k]*m.a[k][j]+sum;
		p.a[i][j]=sum;
	}
	}
	return p;
	}
	 else
    cout<<"can't be multiplied"<<endl;
    }
};
	int main()
	{
	matrix m1,m2,m3;
	m1.getmatrix();
	m2.getmatrix();
	m3=m1+m2;
	m3.putmatrix();
	m3=m1-m2;
	m3.putmatrix();
	m3=m1*m2;
	m3.putmatrix();
	return 0;
	}

