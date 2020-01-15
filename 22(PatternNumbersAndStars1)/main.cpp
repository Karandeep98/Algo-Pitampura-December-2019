#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int stars;
  for(int i=n,j=-1;i>0;i--,j++){
        if(i==n) stars=0;
        else stars=n-i+j;
   for(int j=1;j<=i;j++){
   cout<<j<<" ";
   }
  while(stars>0){
    cout<<"*"<<" ";
    stars--;
  }
   cout<<endl;
  }
    return 0;
}
