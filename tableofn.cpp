#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the value of n : ";
    cin>>n;
    for(i=n;i<=200;i++)
    {
        if(i%n==0)
        cout<<i<<endl;
    }
}