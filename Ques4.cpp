#include<iostream>
using namespace std;

class number{
    public:
    void perfect(){
        int i,j,sum=0;
        cout<<"The Perfect Numbers between 1 and 500 are:- "<<endl;
        for(i=1;i<=500;i++){
            for(j=1;j<i;j++){
                if(i%j==0){
                    sum+=j;
                }
            }
            if(sum==j){
                cout<<i<<" ";
            }
            sum = 0;
        }
    }
};
int main(){
    number a;
    a.perfect();
    return 0;
}
