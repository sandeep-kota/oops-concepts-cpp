#include<iostream>
using namespace std;
class van
{
	protected:
	float payload,wt,mpg;
	public:
		van(float a,float b,float c):payload(a),wt(b),mpg(c){}
		float eff()
		{
			return payload/(payload+wt);
		}
		float fcost(float cost)
		{
			return (cost*2000)/payload;
		}
		float costperday(float cost)
		{
			return (cost* 55 )/ mpg;
		}
};
class driver
{
	protected:
	float pay;
	public:
	driver(float g):pay(g){}
		float costpermile()
		{
			return pay / 55;
		}
		float costperday(float overtimecost)
		{
			return 8*pay+overtimecost;
		}
		
};
class driventruck:public van,public driver
{
	public :
		driventruck(float a,float b,float c,float d):van(a,b,c),driver(d){}
		float costperday(float gascost)
		{
			cout<<van::costperday(gascost)<<endl;
			cout<<driver::costperday(350)<<endl;
			return ((8.0*pay)+(gascost*55))/mpg;
		}
};
int main()
{
	driventruck a(32.1,55.54,45.5,54.412);
	cout<<a.eff()<<endl;
	cout<<a.fcost(56.44)<<endl;
	cout<<a.costperday(21.65)<<endl;
	cout<<a.costpermile()<<endl;
	return 0;
}
