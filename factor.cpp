#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n : ";
    cin>>n;
    int fac = 1;//fac is factor helps store highest factor
    for(int i=1;i<n;i++){
        if(n%i==0) fac=i;
        
    }
    cout<<fac<<endl;

}
/*METHOD 2 :

for(int i=n/2;i>=1;i--){
if(n%i==0){
cout<<i<<endl;
break;
}
}
*/ 
