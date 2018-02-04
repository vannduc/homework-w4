#include <iostream>
using namespace std;
int main()
{
	string nam[12]={"1","2","3","4","5","6","7","8","9","10","11","12",};
	int tong = 0,sum[12];
	for (int i = 0;i < 12 ;i++)
	{
		cout<<"so sach ban thang "<<nam[i]<<endl;
		cin>>sum[i];
		tong += sum[i];
	}
	

		cout<<"tong so sach nam la  "<<tong<<endl;

		return 0;

	
}
