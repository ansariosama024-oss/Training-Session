#include<iostream>
using namespace std;
int main(){
    int n;
    int pro=1;
    int ld;
    cout<<"Enter the number:";
    cin>>n;
    while (n!=0)
    {
        ld=n%10;
        n=n/10;
        pro*=ld;
    }
    cout<<"Product is:"<<pro; 
}
