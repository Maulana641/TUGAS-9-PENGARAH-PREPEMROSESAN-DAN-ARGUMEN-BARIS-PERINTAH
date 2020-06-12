#include <iostream>
#define x -10
using namespace std;
int main (){
    #if x == -10
    #error x tidakbolehbernilainegatif
    #endif
    
    return 0;
}

