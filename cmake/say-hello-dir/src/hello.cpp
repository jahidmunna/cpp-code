#ifndef HELLO_CPP
#define HELLO_CPP
#include <iostream>
#include "hello.hpp"

using namespace std;

void hello::say_hello(){
    cout<<"From Header File"<<endl;
}

#endif //HELLO_CPP
