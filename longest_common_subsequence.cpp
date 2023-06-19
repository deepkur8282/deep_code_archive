#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000];


int lcs(string x, string y, int m, int n)
{
	if(m==0 || n==0)
		return 0;
	if(dp[m][n]!=-1)
		return dp[m][n];
	if(x[m-1]==y[n-1])
		return dp[m][n]=1+lcs(x,y,m-1,n-1);
	else
		return dp[m][n]=max(lcs(x,y,m-1,n), lcs(x,y,m,n-1));
}

int main()
{
	memset(dp,-1,sizeof(dp));
	string x,y;
	cin>>x>>y;
	int m=x.size();
	int n=y.size();
	cout<<lcs(x,y,m,n);
}