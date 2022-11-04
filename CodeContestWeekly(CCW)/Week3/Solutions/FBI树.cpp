#include<iostream>
using namespace std;

string s;

int n;

void build(int l,int r)
{	
	int mid = l+r>>1;
	if(l!=r)
	{
		build(l,mid);
		build(mid+1,r);
	}
	int l0 = 0,l1 = 0;
	for(int i=l;i<=r;i++)
	{
		if(s[i]=='0')l0=1;
		if(s[i]=='1')l1=1;
	}
	if(l0==1&&l1==1)cout<<'F';
	if(l0==1&&l1==0)cout<<'B';
	if(l0==0&&l1==1)cout<<'I';
}

int main()
{
	cin>>n;
	cin>>s;
	build(0,s.size()-1);
}