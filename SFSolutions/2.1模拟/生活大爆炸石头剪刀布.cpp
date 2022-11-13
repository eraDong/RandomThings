/*
 * @Author: eraDong qq1184434988@gmail.com
 * @Date: 2022-11-13 10:43:00
 * @LastEditors: eraDong qq1184434988@gmail.com
 * @LastEditTime: 2022-11-13 10:43:03
 * @FilePath: \RandomThings\SFSolutions\2.1模拟\生活大爆炸石头剪刀布.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

const int N = 200+10;

int n,na,nb;

int a[N],b[N];

bool vs[5][5]
={
	{0,0,1,1,0},
	{1,0,0,1,0},
	{0,1,0,0,1},
	{0,0,1,0,1},
	{1,1,0,0,0},
};

int main()
{
	cin>>n>>na>>nb;
	for(int i=0;i<na;i++)
		cin>>a[i];
	for(int i=0;i<nb;i++)
		cin>>b[i];
	int wa=0,wb=0;
	for(int i=0;i<n;i++)
	{
		wa+=vs[a[i%na]][b[i%nb]];
		wb+=vs[b[i%nb]][a[i%na]];
	}
	cout<<wa<<' '<<wb<<endl;
}