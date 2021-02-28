
#include "number.h"

bool check_square_number(int value){
    for(int i=0;i<value/2;i++){
        if(i*i == value){
            return true;
        }
    }
    return false;
}

bool check_prime_number(int value){
    if (value<=1){
        return false;
    }
    for(int i=2;i<value;i++){
        if (value%i == 0){
            return false;
        }
    }
    return true;
}
