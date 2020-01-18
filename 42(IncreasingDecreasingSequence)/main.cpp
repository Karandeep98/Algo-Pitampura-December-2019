#include <iostream>

using namespace std;

int main()
{
    int flag=0;
   int n,a[1000];
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=1;i<=n;i++){
    if(a[i-1]>a[i]){
        if(flag==1){    flag=2;break;}

        else if(i==n) {
            flag=1;
        }
    }
        else if(a[i-1]<a[i]){
             flag=1;
        }
        else {flag=2;break;}
   }
           if(flag==1) cout<<"true";
           if(flag==2) cout<<"false";
    return 0;
}
