#include<iostream>
using namespace std;
int Calculator(int n1, char s, int n2)
{
    if (s=='-') return n1-n2;
    else if(s=='+')return n1+n2;
    else if(s=='/')return n1/n2;
    else if(s=='*')return n1*n2;
}
int main(){
    int n1,n2;
    char s;
    cin>>n1>>s>>n2;
    cout<<Calculator(n1,s,n2);
    main();
 }

