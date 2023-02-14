#include <iostream>

Statistics::Statistics(int x, int y){
    this.x -> x;
    this.y -> y;
}

Statistics::Statistics(Statistics kopia){
    this.x -> kopia.x;
    this.y -> kopia.y;
}

Statistics::~Statistics(){
    delete[] x;
    delete[] y;
}

int Statistics::accessX(){
    return x;
}

int Statistics::accessY(){
    return y;
}

float Statistics::oblicz(){
    return x+y;
}

float Statistics::oblicz1(){
    return x-y;
}
