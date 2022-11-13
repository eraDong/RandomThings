#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stack>
#include<unordered_map>
// #pragma GCC optimize(3)
using namespace std;
#define rep(i,x,y) for(int i=x;i<y;i++)
#define scan(x)   scanf("%lld",&x)
#define int long long
typedef pair<int,int> PII;
const int N = 1e6+10;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;
void init()
{
	cin.tie(0),cout.tie(0);
	ios::sync_with_stdio(false);
}
signed main()
{
	init();
	int n;
	cin>>n;
	rep(i,0,n+1)
	{
		int num;
		cin>>num;
		if(i==0)
		{
			if(num!=0)
			{
				if(num==1)
				{
					if(n-i==1)
					{
						cout<<"x";
					}
					else
					{
						if(n-i==0)
						{
							cout<<num<<endl;
							continue;
						}
						else cout<<"x^"<<n-i;
					}
				}
				else if(num==-1)
				{
					cout<<"-";
					if(n-i==1)
					{
						cout<<"x";
					}
					else
					{
						cout<<"x^"<<n-i;
					}
				}
				else
				{
					if(n-i==1)
					{
						cout<<num<<"x";
					}
					else
					{
						cout<<num<<"x^"<<n-i;
					}
				}
			}
		}
		else if(i!=n&&i!=0)
		{
			if(num<0)
			{
				if(num==-1)
				{
					cout<<"-";
					if(n-i==1)
					{
						cout<<"x";
					}
					else
					{
						cout<<"x^"<<n-i;
					}
				}
				else
				{
					cout<<"-";
					if(n-i==1)
					{
						cout<<abs(num)<<"x";
					}
					else
					{
						cout<<abs(num)<<"x^"<<n-i;
					}
				}
			}
			else if(num>0)
			{
				if(num==1)
				{
					cout<<"+";
					if(n-i==1)
					{
						cout<<"x";
					}
					else
					{
						cout<<"x^"<<n-i;
					}
				}
				else
				{
					cout<<"+";
					if(n-i==1)
					{
						cout<<abs(num)<<"x";
					}
					else
					{
						cout<<abs(num)<<"x^"<<n-i;
					}
				}
			}
		}
		if(i==n)
		{
			if(num<0)
			{
				cout<<"-";
				cout<<abs(num);
			}
			else if(num>0)
			{
				cout<<"+";
				cout<<abs(num);
			}
		}
	}
}