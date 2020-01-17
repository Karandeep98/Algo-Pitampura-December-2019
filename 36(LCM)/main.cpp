#include <iostream>

using namespace std;
    int lcm(int n1,int n2){
        int x;
        if((n1>n2)?x=n1:x=n2);
        while(x>0){
            if(x%n1==0&&x%n2==0)
                return x;
            x++;
        }
    }
int main()
{
   int n1,n2;
   cin>>n1>>n2;
   cout<<lcm(n1,n2);
    return 0;
}
