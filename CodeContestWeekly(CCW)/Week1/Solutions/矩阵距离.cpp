/*
 * @Author: eraDong qq1184434988@gamil.com
 * @Date: 2022-10-21 18:30:30
 * @LastEditors: eraDong qq1184434988@gamil.com
 * @LastEditTime: 2022-10-21 18:30:33
 * @FilePath: \RandomThings\CodeContestWeekly(CCW)\Week1\Solutions\矩阵距离.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

typedef pair<int,int> PII;

const int N = 1e3+10;

int n,m;

char g[N][N];

int d[N][N];

void bfs()
{
    memset(d,-1,sizeof d);
    
    queue<PII> q;
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(g[i][j]=='1')
            {
                d[i][j] = 0;
                q.push({i,j});
            }
    
    int dx[4] = {1,-1,0,0};
    
    int dy[4] = {0,0,1,-1};
    
    while(q.size())
    {
        PII t = q.front();
        
        q.pop();
        
        for(int i=0;i<4;i++)
        {
            int a = t.first + dx[i],b = t.second + dy[i];
            if(a<0||a>=n||b<0||b>=m)continue;
            if(d[a][b]!=-1)continue;
            d[a][b] = d[t.first][t.second] + 1;
            q.push({a,b});
        }
    }
    
    return;
    
}

int main()
{  
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
        cin>>g[i];
        
    bfs();
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
}