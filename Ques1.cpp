#include<iostream>
using namespace std;

class number{
    public:
        int i,s = 0;
    void sum(){
        int n;
        cout<<"Enter value of n: ";
        cin>>n;
        for(i=1;i<=n;i++){
            s+=i;
        }
    cout<<"The Sum of "<<n<<" terms is "<<s<<endl;
    }
};
int main(){
    int n;
    number a;
    a.sum();
    return 0;
}
