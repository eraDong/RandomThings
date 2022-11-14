#include<iostream>
#include<vector>
using namespace std;

typedef pair<int,string> PIS;

vector<PIS> ans;

int main()
{
	int t,q;
	cin>>t>>q;
	int size = t;
	while(t--)
	{
		int n;
		string s;
		cin>>n>>s;
		ans.push_back({n,s});
	}
	int st = 0;
	while(q--)
	{
		int forward,step;
		cin>>forward>>step;
		if(ans[st].first==0)
		{
			//朝向里
			if(forward==0)step = -step;
			st = (st+step+size)%size;
		}
		else
		{
			//朝向外
			if(forward==1)step = -step;
			st = (st+step+size)%size;
		}
	}
	cout<<ans[st].second;
}