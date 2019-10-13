#include<bits/stdc++.h>
using namespace std;
int check_digits(int n,int &flag)
{vector<int> a;
a.push_back(1000); a.push_back(1000); a.push_back(1000); a.push_back(1000); a.push_back(1000); a.push_back(1000); a.push_back(1000);
long long int j=0,k=0;
while(n!=0)
{  a[j]=n%10;
    n/=10;
    j++;
}
sort(a.begin(),a.end());
a.resize(std::distance(a.begin(), a.begin()+j));
int bsize=a.size();
for(k=0;k<j;k++)
{ vector<int>::iterator ip;
    ip = std::unique(a.begin(), a.begin() + j);
    a.resize(std::distance(a.begin(), ip));
}
if(bsize==a.size()) flag=1;
return flag;
}
int main()
{
    int x,y,n,flag=0;
    cin>>x>>y;
    n=x;
    while(n>=x&&n<=y)
        {
       if(check_digits(n,flag)==1)
       {cout<<n; break; }
    n++;}
    if(flag==0)
    cout<<"-1";
    return 0;
    }
