#include<iostream>
using namespace std;

class digit{
    public:
    void dig(){
        int n,sum=0;
        cout<<"Enter value of n: ";
        cin>>n;
        while (n!=0){
            sum+=n%10;
            n=n/10;
        }
        cout<<"Sum of Digits = "<<sum<<endl;
    }
};
int main(){
    digit a;
    a.dig();
    return 0;
}
