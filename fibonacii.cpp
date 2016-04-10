#include <iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)  //to eun fot T testcase
   {
   	int n;
   	cin>>n;
    //fib logic
   	int s=0,d=1,ans=0;
   	cout<<s<<" "<<d<<" ";
   	for(int i=2;i<n;i++)
   	{
   		ans=s+d;
   		s=d;
   		d=ans;
   		cout<<ans<<" ";
   	}
   	cout<<endl;

   }

    return 0;
}
