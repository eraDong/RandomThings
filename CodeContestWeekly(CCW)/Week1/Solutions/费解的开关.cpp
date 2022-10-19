/*
 * @Author: eraDong qq1184434988@gamil.com
 * @Date: 2022-10-19 21:33:50
 * @LastEditors: eraDong qq1184434988@gamil.com
 * @LastEditTime: 2022-10-19 21:33:53
 * @FilePath: \RandomThings\CodeContestWeekly(CCW)\Week1\Solutions\费解的开关.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include<cstring>
using namespace std;

const int N = 10;

char g[N][N];

char backup[N][N];

void change(int x,int y)
{
    int dx[] = {1,-1,0,0},dy[] = {0,0,1,-1};
    
    g[x][y]^=1;
    
    for(int i=0;i<4;i++)
    {
        int a = x+dx[i],b = y+dy[i];
        
        if(a<0||a>=5||b<0||b>=5)continue;
        
        g[a][b]^=1;
    }
    
    return;
}

void solve()
{
    int ans = 0x3f3f3f3f;
    
    for(int i=0;i<5;i++)
        cin>>g[i];
    
    for(int i=0;i<1<<5;i++)
    {
        int res = 0;
        
        memcpy(backup,g,sizeof g);
        
        for(int k=0;k<5;k++)
            if(i>>k&1)
            {
                res++;
                change(0,k);
            }
        
        for(int j=0;j<=3;j++)
        {
            for(int k=0;k<5;k++)
            {
                if(g[j][k]=='0')
                    change(j+1,k),res++;                
            }
        }
        
        bool flag = true;
        
        for(int j=0;j<5;j++)
        {
            if(g[4][j]=='0')
            {
                flag = false;
                break;
            }
        }

        if(flag)ans = min(res,ans);
        
        memcpy(g,backup,sizeof backup);
    }
    
    if(ans>6)cout<<-1<<endl;
    else cout<<ans<<endl;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}