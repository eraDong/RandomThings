#include<iostream>
#include<vector>
using namespace std;

typedef pair<int,int> PII;

vector<PII> ans11,ans21;

int main()
{
	int l11=0,r11=0;
	int l21=0,r21=0;
	char c;
	while(cin>>c)
	{
		if(c=='W')l11++,l21++;
		else if(c=='L')r11++,r21++;
		if((l11>=11||r11>=11)&&(abs(r11-l11)>=2))
		{
			ans11.push_back({l11,r11});
			l11=0,r11=0;
		}
		if((l21>=21||r21>=21)&&(abs(r21-l21)>=2))
		{
			ans21.push_back({l21,r21});
			l21=0,r21=0;
		}
		if(c=='E')
		{
			ans11.push_back({l11,r11});
			ans21.push_back({l21,r21});
			break;
		}
	}
	for(auto x:ans11)
	{
		cout<<x.first<<':'<<x.second<<endl;
	}
	
	cout<<endl;
	
	for(auto x:ans21)
	{
		cout<<x.first<<':'<<x.second<<endl;
	}
}