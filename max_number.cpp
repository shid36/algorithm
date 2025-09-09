#include<iostream>
using namespace std;
int findmax(int arr[],int n){
    if(n==0){
        return arr[0];
    }
    else {
       
        return max (arr[n-1],findmax(arr,n-1));
    }
}
    int main(){
        int n;
        cout<<"enter the number of element=";
        cin >> n;
        int arr[100];
        cout <<"enter "<<n<<" the element:"<<endl;
        for(int i=0;i<n;i++){
            cin >>arr[i];
        }
        cout << "max number is="<<findmax(arr,n)<<endl;
        return 0;
    }