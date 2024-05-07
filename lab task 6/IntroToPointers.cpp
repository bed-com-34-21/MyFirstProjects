#include <iostream>
using namespace std;

int main(){
    //declare pointers
    int* pPointer = nullptr;

    int integerVar = 5 +4;
    pPointer = &integerVar;

    cout<<"integerVar: "<<integerVar <<endl;

    cout<<"Adress of of integeval: "<< &integerVar<<endl;

    cout<<"pPointer: "<<pPointer<<endl;

    cout <<"Address of pPointer "<<&pPointer <<endl;

    return 0;


}