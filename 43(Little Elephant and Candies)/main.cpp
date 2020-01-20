#include <iostream>

using namespace std;

int main()
{
  int n,t,c,a;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n>>c;
    int sum=0;
    for(int j=0;j<n;j++){
        cin>>a;
        sum+=a;
    }
    if(sum<=c) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
    return 0;
}
