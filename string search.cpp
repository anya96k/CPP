#include<iostream>
using namespace std;

int main()
{
	string a,b;
	cout <<"enter big string : ";
	cin>>a;
	cout<<"string to search : ";
	cin>>b;
	int i,j,cnt,k,f=0;
	for(i=0;i<a.length()-b.length();i++)
	{
		cnt=0;
		if(f==1)
		break;
		for(j=0,k=i;j<b.length();j++,k++)
		{
			if(a[k]==b[j])
			{
				cnt++;
			}
			else
			{
				break;	
			}
			if(cnt==b.length())
			{
				f=1;
				break;
			}
		}
	}
	if(f==1)
	cout<<"Yes\n";
	else
	cout<<"No\n";
	
	return 0;
}
