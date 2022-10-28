/*
 * @Author: eraDong qq1184434988@gmail.com
 * @Date: 2022-10-28 16:57:18
 * @LastEditors: eraDong qq1184434988@gmail.com
 * @LastEditTime: 2022-10-28 16:57:46
 * @FilePath: \RandomThings\CodeContestWeekly(CCW)\Week2\Solutions\走方格.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

const int N = 35;

int f[N][N];

int main()
{
    int n,m;
    cin>>n>>m; 
    if(n%2==0&&m%2==0)
    {
        cout<<0<<endl;
    }
    else
    {
        for(int i=0;i<=n;i++)f[i][1] = 1;
        for(int i=0;i<=m;i++)f[1][i] = 1;
        for(int i=2;i<=n;i++)
        {
            for(int j=2;j<=m;j++)
            {
                if(i%2==0&&j%2==0)continue;
                f[i][j] = f[i-1][j] + f[i][j-1]; 
            }
        }
        cout<<f[n][m]<<endl;
    }
}