#include <iostream>

using namespace std;

int main()
{
   char ch;
   int n1,n2;
   bool status=true;

   do{
         cin>>ch;
         if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%')
    cin>>n1>>n2;
    switch(ch){
    case '+':cout<<n1+n2<<endl;break;
    case '-':cout<<n1-n2<<endl; break;
    case '*':cout<<n1*n2<<endl;break;
    case '/':cout<<n1/n2<<endl;break;
    case '%':cout<<n1%n2<<endl;break;
    case 'x':status=false;break;
    case 'X':status=false;break;
    default:cout<<"Invalid operation. Try again.\n";
    }
   }while(status);
    return 0;
}
