#include<bits/stdc++.h>
using namespace std;
int findgcd(int a,int b){
    int sum=0;
    while(a%b!=0){
        sum=a%b;
        a=b;
        b=sum;

    }
    return b;
}
int main(){
    int a=42;
    int b=24;
    int result=findgcd(a,b);
    cout<<"Gcd of two number is:"<<result;
    return 0;
}
