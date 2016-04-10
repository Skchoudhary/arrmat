#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    int val;

    while(cin>>val)
      a.push_back(val);

    int len=a.size();
    int min=a[0];

   //code to get min element if all elements are neagtive.
    bool flag=false;
    for(int i=1;i<len;i++)
    {
    	if(a[i]>0)
    	{
    		flag=true;
    	}
    	if(a[i]<min)
    	min=a[i];
    }

    if(!flag)
    cout<<min<<endl;
//code if there are positive element in the array
    else
    {
    	int ans=0,sum=0;
    	for(int i=0;i<len;i++)
         {
         	sum+=a[i];
         	if(sum>0)
         	ans=max(sum,ans);
         	else
         	sum=0;
         }
         cout<<ans<<endl;
    }
    return 0;
}
