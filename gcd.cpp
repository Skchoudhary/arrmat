#include <iostream>
using namespace std;
int gcd(int a,int b)
{
	return (b==0)? a:gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--) //testcase loop
    {
    	int n, k;
    	cin>>n>>k;
    	int ans=gcd(n,k);
    	cout<<ans<<endl;
    }

    return 0;
}