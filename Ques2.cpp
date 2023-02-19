#include<iostream>
using namespace std;

class number{
    public:
        int check(int x){
            int i,p=0;
            for(i=2;i<x;i++){
                if(x % i == 0){
                    p=1;
                    break;
                }
            }
        }
};
int main(){
    int x,p;
    cout<<"Enter a number: ";
    cin>>x;
    number a;
    p=a.check(x);
    if(p==0){
        cout<<"Its not a Prime Number"<<endl;
    }
    else
        cout<<"Its a Prime Number"<<endl;
    return 0;
}
