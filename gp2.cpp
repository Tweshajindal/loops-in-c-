#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int a = 3;
    for(int i=3;i<=n;i++){
       cout<<a<<endl;
       a = a * 4;  
    }
}