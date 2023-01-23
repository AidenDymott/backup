#include "context.hpp"
#include <stdio.h>
#include <iostream>

using namespace std;

void Message(){
    int x = 0;
    double c = get_context;
    cout << "A message" << endl;
    if (x == 0){
        int x = x + 1;
        set_context(c);
    }
}