#include <iostream>
using namespace std;
int main()
{
	int a,b,i;
  int sum =0;
	cin>>a>>b;
  for (i = a;i<=b;i++)
  {
    sum += i;
  }
  cout<<sum<<endl;
  return 0;
}
