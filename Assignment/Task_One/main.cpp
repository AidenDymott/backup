#include "context.hpp"
#include "message.cpp"
#include <stdio.h>
#include <iostream>

void foo(){

    cout << "you called foo" << endl; //Shows func called

    exit(0); // Terminates function

};

int main(){
    *p char
    


    return 0;
}



9
10 # stacks grow downwards
11 sp is a pointer to characters
12 set sp to be data PLUS 4096
13
14 create an empty context c
15 set rip of c to foo;
16 set rsp of c to sp;
17
18 call set_context with c