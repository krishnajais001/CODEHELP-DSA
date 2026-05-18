#include <iostream>
using namespace std;
int age= 20; // Global Scope

int main(){
/*   
Varibale Scoping : how to acces varibale , is it accesbile in block , local, global cope
        Local Scope
        Global Scope
        BLock Scope
        Scope Resolution Operator

*/ 
int age = 18; // local varibale
cout<<"Local Scope : "<<age<<endl;

{
    int age = 19;
    cout<<"BLock Scope : " <<age << endl;
}

cout<<"Global Scope : " <<::age;

    return 0;
}