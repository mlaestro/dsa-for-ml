#include <iostream>
#include <cassert>

using namespace std;

unsigned int factorial(unsigned int num){
    if (num == 0)
        return 1;
    return num * factorial(num-1);
}

unsigned int factorialTailRec(unsigned int num, unsigned int acc=1){
    if (num == 0)
        return acc;
    return factorialTailRec(num-1, acc*num);
}
 

int main(){
    assert(factorial(0)==1);
    assert(factorial(1) == 1);    
    assert(factorial(10) == 3628800);
    // assert(factorial(13) == 6227020800);
    assert(factorialTailRec(0)==1);
    assert(factorialTailRec(1) == 1);    
    assert(factorialTailRec(10) == 3628800);
    // assert(factorialTailRec(13) == 6227020800); // core dump
    // assert(factorial(13) == );
    // assert(factorial(-1) == );
    // assert(factorial(-2) == );
    // assert(factorial(-5) == );
    // assert(factorialTailRec(0) == );
    // assert(factorialTailRec(1) == );
    // assert(factorialTailRec(10) == 3628800);
    // assert(factorialTailRec() == );
    // assert(factorialTailRec(20) == );
    // assert(factorialTailRec() == );
    // assert(factorialTailRec() == );
    // assert(factorialTailRec() == );
    // assert(factorialTailRec() == );
    // assert(factorialTailRec() == );
    // assert(factorialTailRec() == );
    // assert(factorialTailRec() == );    
    // assert(factorialTailRec() == );
    return 0;


}