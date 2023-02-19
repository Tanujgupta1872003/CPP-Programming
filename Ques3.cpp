#include<iostream>
using namespace std;

class factorial{
    public:
    void fact(){
        int i,n,a=1;
        cout<<"Enter value of n: ";
        cin>>n;
        for(i=n;i>=2;i--){
            a=a*i;
        }
    cout<<"Factorial of "<<n<<" is "<<a<<endl;
    }
};
int main(){
    factorial num;
    num.fact();  
    return 0;
}
