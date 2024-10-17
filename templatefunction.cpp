#include<iostream>

using namespace std;

#include "SWAP.CPP"

int main()
{
    int a = 5;
    int  b = 6;

    string name1 = "jack";

    string name2 = "etienne";

    cout << "Before swap\n " ;
    cout <<"A: " <<  a << "\nB: , " << b << "\n";
    cout << " name 1 : " << name1 << endl;
    cout << "name 2 : " << name2 << endl;

    cout << "After swap \n " << string(50,'*') << endl;

    swapfunction(a,b); 
    swapfunction(name1,name2);
    cout <<"A: " <<  a << "\nB: , " << b << "\n";
    cout << " name 1 : " << name1 << endl;
    cout << "name 2 : " << name2 << endl;
    
    


    return 0;
}