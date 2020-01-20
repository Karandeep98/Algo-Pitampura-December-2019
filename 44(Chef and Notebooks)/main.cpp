#include <iostream>

using namespace std;

int main()
{
   int t,x,y,k,n,p,c,found=0;
   cin>>t;
   for(int i=0;i<t;i++){
    cin>>x>>y>>k>>n;
    int require=x-y;
    found=0;
    for(int j=0;j<n;j++){
        cin>>p>>c;
        if(p>=require&&c<=k){
            found=1;
            break;}

    }
    if(found==1) cout<<"LuckyChef\n";
    else cout<<"UnluckyChef\n";
   }
    return 0;
}
