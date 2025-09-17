#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the n : ";
    cin>>n;
    bool flag = true; //no is prime//extra valriable bna diya
    for(int i=2;i<=n/2;i++){ //n/2 ki jagah use kr skte h sqrt(n)
        if(n%i==0){
            flag = false;// false means composite
            break; //  to get out of the loop
        }
    }
    if(n==1) cout<<"neither prime nor composite";
    if(flag==true)
    cout<<"prime";
    else cout<<"composite";
}