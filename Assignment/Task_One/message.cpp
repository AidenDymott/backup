#include "context.hpp"
#include <stdio.h>
#include <iostream>

using namespace std;

void Message(){
    int x = 0; //Set Value of X
    double c = Context::get_context(); //Set C to the get_contect value
    cout << "A message" << endl;
    if (x == 0){
        int x = x + 1; //increase value of x by 1
        Context::set_context(c); //Set value to c
    }
}