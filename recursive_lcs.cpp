
#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<vector<int>>dp;
int lcs(string x,string y, int m, int n){
    if(m==0 || n==0)
    return 0;
    if(dp[m][n] !=-1)
    return dp[m][n];
    if(x[m-1]==y[n-1])
    return dp[m][n]=1+lcs(x,y,m-1,n-1);
    return dp[m][n]=max(lcs(x,y,m-1,n),lcs(x,y,m,n-1));

}
int main (){
    string x="BANG";
    string y="ANBG";
    int m=x.length();
    int n=y.length();
    dp.assign(m+1,vector<int>(n+1,-1));
    cout<<"recursive number="<<lcs(x,y,m,n)<<endl;
    return 0;

}