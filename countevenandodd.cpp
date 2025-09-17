#include<iostream>
using namespace std;
int main(){
    int n,m,evencount=0 , oddcount=0;
    cout<<"enter the values : ";
    cin>>n;
    cin>>m;
    for(int i=n; i<=m; i++){
        if(i%2==0)
        evencount++;
       
 else oddcount++;}
cout<<"odd"<<oddcount<<", even: "<<evencount;


}