#include <iostream>
using namespace std;

int main ()
{
	float s; 
	float lx;
	float kv;
	int sn;

	cout<<"nhap vao so tien ban dau ";
	cin>>s;
	cout<<"nhap vao so tien lai xuat ";
	cin>>lx;
	cout<<"nhap vao so tien ki vong";
	cin>>kv;
	
	while(s<0||lx<0||kv<0)
	{
		cout<<"sai so"<<endl;
		cout<<"nhap vao so tien ban dau , lai xuat , so tien ki vong ";
		cin>>s>>lx>>kv;
	}
	while( s <= kv)
	{
		s=s+(s*lx)/100;
		sn++;
	}
	cout<<"sau"<<sn<<"nam thi ban da nhan duoc so tien ki vong";
	return 0;
}
	
	

