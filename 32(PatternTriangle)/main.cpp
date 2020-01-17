#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
        int x=i,spaces=n-i;
        while(spaces>0){
            cout<<"\t";
            spaces--;
        }
    for(int j=1;j<=i;j++){
        cout<<x<<"\t";
    x++;
    }
    int y=x-2;
   for(int k=1;k<i;k++){
    cout<<y<<"\t";
    y--;
   }
    cout<<endl;
   }
    return 0;
}
