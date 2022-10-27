/*
 * @Author: eraDong qq1184434988@gmail.com
 * @Date: 2022-10-27 23:12:32
 * @LastEditors: eraDong qq1184434988@gmail.com
 * @LastEditTime: 2022-10-27 23:13:24
 * @FilePath: \RandomThings\CodeContestWeekly(CCW)\Week2\Solutions\负载均衡.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

const int N = 200000+100;

int s[N];

int n,m;

typedef pair<int,int> PII;

priority_queue<PII,vector<PII>,greater<PII>> q[N];

int main()
{
    cin>>n>>m;

    for(int i=1;i<=n;i++)
        cin>>s[i];

    while(m--)
    {
        int a,b,c,d;

        cin>>a>>b>>c>>d;

        //a时刻 b号 c耗时 d算力消耗

        while(q[b].size()&&q[b].top().first<=a)
        {
            s[b] += q[b].top().second;
            q[b].pop();
        }
        if(s[b]<d)puts("-1");
        else
        {
            q[b].push({a+c,d});
            s[b] -= d;
            cout<<s[b]<<endl;
        }
    }
}