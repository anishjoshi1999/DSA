#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n,sum=0,lastDigit,originalNumber;
    cin>>n;
    originalNumber = n;
    while(n>0){
        lastDigit = n % 10;
        sum = sum + pow(lastDigit,3);
        n = n/10;
    }
    if(originalNumber == sum){
        cout<<"Armstrong number"<<endl;
    }else{
        cout<<"Not Armstrong number"<<endl;
    }
    return 0;
}