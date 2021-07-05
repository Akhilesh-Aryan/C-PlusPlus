#include<iostream>
    using namespace std;
    int main(){
    int n1,n2;
    cout<<"enter two num."<<endl;
    cin>>n1>>n2;
    char ope;
    cout<<"enter any operator"<<endl;
    cin>>ope;
    switch (ope)
    {
    case '+':
        cout<<"Sum= "<<n1+n2<<endl;
      break;
    case '-':
       cout<<"Substraction= "<<n1-n2<<endl;
      break;
    case '*':
        cout<<"mult= "<<n1*n2<<endl;
      break;
    case '/':
       cout<<"Div= "<<n1/n2<<endl;
      break;
    default:
       cout<<"inviled operator";
      break;
    }
 }