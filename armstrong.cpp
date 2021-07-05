#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int num = n;
    while (n!=0){
        int ld = n%10;
        sum = sum + pow(ld,3);
        n = n/10;
    }
    if(sum == num){
        cout<<"armstrong no."<<endl;
    }
    else{
        cout<<"not an armstrong no"<<endl;
    }
    return 0;
}