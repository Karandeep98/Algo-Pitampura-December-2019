#include <iostream>

using namespace std;

int main()
{
    int n,stars;
    cin>>n;
   for(int i=1;i<=n;i++){
        stars=n-i;
    for(int j=1;j<=i;j++){
        cout<<j;
    }
   while(stars>0){
    cout<<"*";
    stars--;
   }
    cout<<endl;
   }
    return 0;
}
