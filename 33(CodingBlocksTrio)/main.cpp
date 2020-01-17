#include <iostream>
#include<string.h>

using namespace std;
    int checkVowel(char v,char a[]){
    for(int i=0;i<strlen(a);i++){
        if(v==a[i])
        return 1;
    }
    return 0;
}
    int fact(int n){
        if(n==0||n==1)
            return 1;
        else
           return n*fact(n-1);
        }
    int combination(int n,int r){
        if(n>=3)
        return fact(n)/((fact(r)*fact(n-r)));
        else return 0;
        }
int main()
{
   int t,n,total[20];
   char a[11000][20];
   cin>>t;
   for(int i=0;i<t;i++){
    cin>>n;
    int acount=0,ecount=0,icount=0,ocount=0,ucount=0;
    for(int j=0;j<n;j++){
        cin>>a[j];
        acount+=checkVowel('a',a[j]);
        ecount+=checkVowel('e',a[j]);
        icount+=checkVowel('i',a[j]);
        ocount+=checkVowel('o',a[j]);
        ucount+=checkVowel('u',a[j]);
    }
    total[i]=combination(acount,3)+combination(ecount,3)+combination(icount,3)+
   combination(ocount,3)+combination(ucount,3);

   }
   for(int i=0;i<t;i++){
    cout<<total[i]<<endl;
   }
    return 0;
}





