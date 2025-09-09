#include<iostream>
using namespace std;
int recursive(int x,int y,int m,int n,int a,int b,int c,int d){

cout<< "call="<<"("<<"x="<<x <<","<< "y="<<y<<","<<"m="<<m<<","<<"n="<<n<<","<<"a="<<a<<","<<"b="<<b<<","<<
"c="<<c<<","<<"d="<<d<<")"<<endl;
if(y==0)
return x;
return recursive(y,x%y,m-1,n-1,a-1,b-1,c-1,d-1);

}
int main(){
    int x=657,y=798;
    int m=4,n=4,a=0,b=0,c=0,d=0;
    cout<<"final recursive value="<< recursive(x,y,m,n,a,b,c,d)<<endl;
    return 0;
}