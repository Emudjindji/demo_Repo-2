#ifndef SWAP_CPP
#define SWAP_CPP

template<typename T>
void swapfunction(T &a, T &b)
{   
    T temp = a;
    a = b;
    b = temp;

}


#endif