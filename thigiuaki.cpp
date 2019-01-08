#include <iostream>
using namespace std;

int main()
{
	float a;
	float b;
	float c;
	int x;
	
	cout<< "hay nhap tien ban dau a";
	cin>>a;
	cout<< "hay nhap tien lai suat gui tiet kiem b";
	cin>>b;
	cout<< "hay nhap so tien ki vong c";
	cin>>c;
	
	x=0;
	do
	{
		a=a+a*b;
		x++;
	}
	while (a<c);
	
	cout<< "so nam can de duoc so tien ki vong la"<<x;
	return 0;
	
}

