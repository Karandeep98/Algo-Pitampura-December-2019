#include <iostream>

using namespace std;
    char check(char a){
        if(a>='a'&&a<='z')
            return 'L';
        else if(a>='A'&&a<='Z')
            return 'U';
        else return 'I';

}
int main()
{
   char ch;
   cin>>ch;
   cout<<check(ch);
    return 0;
}
