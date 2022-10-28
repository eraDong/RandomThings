/*
 * @Author: eraDong qq1184434988@gmail.com
 * @Date: 2022-10-28 16:57:27
 * @LastEditors: eraDong qq1184434988@gmail.com
 * @LastEditTime: 2022-10-28 16:57:44
 * @FilePath: \RandomThings\CodeContestWeekly(CCW)\Week2\Solutions\特殊年份.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

int main()
{
    int res = 0;
    int n = 5;
    while(n--)
    {
        string s;
        //s[0] 千 s[1] 百 s[2] 十 s[3] 个
        cin>>s;
        if((s[0]-'0')==(s[2]-'0'))
        {
            if(s[3]-s[1]==1)
            {
                res++;
            }
        }
    }
    cout<<res<<endl;
}