#include <iostream>

using namespace std;
int min(int a,int b){
if(a<b)
    return a;
    else return b;
}
int main()
{
   int t,c1,c2,c3,c4,n,m,ni[100],mi[100];
   cin>>t;
   for(int i=0;i<t;i++){
    cin>>c1>>c2>>c3>>c4>>n>>m;
    int sumr=0;
    for(int j=0;j<n;j++){
        cin>>ni[j];
         sumr+=min((ni[j]*c1),c2);
    }
    int rickshaw=min(sumr,c3);
    int sumc=0;
    for(int j=0;j<m;j++){
        cin>>mi[j];
         sumc+=min((mi[j]*c1),c2);
    }
    int cab=min(sumc,c3);
    int total=min((rickshaw+cab),c4);
    cout<<total<<endl;
   }


    return 0;
}
