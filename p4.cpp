#include <iostream>
using namespace std;
void func(int i){
    cout<<"Hello"<<i<<endl;
}
int main(){
    for(int i=0;i<5;i++)
    func(i);
}