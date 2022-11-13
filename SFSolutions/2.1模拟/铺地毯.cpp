#include<iostream>
#include<vector>

using namespace std;

typedef pair<int,int> PII;

vector<PII> s1,s2;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		s1.push_back({x1,y1});
		s2.push_back({x2,y2});
	}
	int X,Y;
	cin>>X>>Y;
	int res = 0;
	for(int i = 0 ; i < s1.size(); i ++)
	{
		auto a = s1[i],b = s2[i];
		if(a.first<=X&&a.second<=Y&&a.first-b.first<=X&&a.second-b.second>=Y)
			res = i+1;
		if(a.first==X&&a.second==Y)
			res = i+1;
	}
	if(res==0)res = -1;
	cout<<res<<endl;
}