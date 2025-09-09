
#include <iostream>
using namespace std;
int factorial(int n){
    if (n==1 || n==0){
        return 1;
    }
    else {
    return n*factorial(n-1);
    }
}
int main (){
    int num;
    cout <<"enter the number=";
    cin>> num;
    if(num<0){
        cout<<"sorry";
    }
    else {
        cout << "factorial is "<<num<<"="<< factorial (num)<< endl;

    }
    return 0;
}