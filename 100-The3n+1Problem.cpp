#include <iostream>
#include <stdio.h>
using namespace std;

size_t computeCycle(size_t k){
    int length = 1;
    while(k > 1){
        if(k&1){k = 3*k +1;}
        else{k /=2;}
        length++;
    }
    return length;
}

int main(){
    
    size_t lowerBound, upperBound;
    size_t currentCycle, maxCycle;

    while(scanf("%zd %zd", &lowerBound, &upperBound)==2){
        maxCycle = 0;
        for(size_t k = lowerBound; k <= upperBound ; k++){
            currentCycle = computeCycle(k);
            if(currentCycle > maxCycle){maxCycle = currentCycle;}
        }
        printf("%zd %zd %zd\n", lowerBound, upperBound, maxCycle);
    }
    return 0;
}
