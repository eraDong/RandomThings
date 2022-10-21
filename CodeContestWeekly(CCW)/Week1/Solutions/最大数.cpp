/*
 * @Author: eraDong qq1184434988@gamil.com
 * @Date: 2022-10-21 18:31:10
 * @LastEditors: eraDong qq1184434988@gamil.com
 * @LastEditTime: 2022-10-21 18:57:33
 * @FilePath: \RandomThings\CodeContestWeekly(CCW)\Week1\Solutions\最大数.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

const int N = 2e5+10;

struct
{
    int l,r,v;
}tr[N*4];

int m,n,p;

void build(int id,int l,int r)
{
    tr[id] = {l,r};
    if(l==r)return;
    int mid = l+r>>1;
    build(id<<1,l,mid);
    build(id<<1|1,mid+1,r);
    return;
}

void pushup(int id)
{
    tr[id].v = max(tr[id<<1].v,tr[id<<1|1].v);
}

void modify(int id,int x,int v)
{
    if(tr[id].l==x&&tr[id].r==x)tr[id].v = v;
    else
    {
        int mid = tr[id].l+tr[id].r>>1;
        if(x<=mid)modify(id<<1,x,v);
        else modify(id<<1|1,x,v);
        pushup(id);
    }
}

int query(int id,int l,int r)
{
    int v = 0;
    if(tr[id].l>=l&&tr[id].r<=r)return tr[id].v;
    int mid = tr[id].l+tr[id].r>>1;
    if(l<=mid)v = query(id<<1,l,r);
    if(r>mid)v = max(v,query(id<<1|1,l,r));
    return v;
}

int main()
{
    cin>>m>>p;
    build(1,1,m);
    int last = 0,n = 0;
    while(m--)
    {
        char op;
        int x;
        cin>>op>>x;
        if(op=='A')
        {
            modify(1,n+1,((long long)last+x)%p);
            n++;
        }
        else
        {
            last = query(1,n-x+1,n);
            cout<<last<<endl;
        }
    }
}