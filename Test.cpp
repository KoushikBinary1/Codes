#include <iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<" ";
}
void print_rev(int n){
    if(n==0) return;
    cout<<n<<" ";
    print_rev(n-1);
}
int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}
int digits(int n){
    if(n==0) return 0;
    return 1+digits(n/10);
}
int main(){
    print(10);
    cout<<endl;
    print_rev(10);
    cout<<endl;
    cout<<factorial(5)<<endl;
    cout<<digits(23456);
}