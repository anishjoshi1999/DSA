#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    bool flag;
    cin>>n;
    // We can optimize this code be using square root function
    for(int i=2;i<=sqrt(n);i++){
        if(n % i == 0){
            cout<<"Non-prime Number"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"Prime Number"<<endl;
    }

    return 0;
}