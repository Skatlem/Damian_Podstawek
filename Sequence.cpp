#include <iostream>

Sequence::Sequence(int x, int y){
    this.x -> x;
    this.y -> y;
}

Sequence::Sequence(Sequence kopia){
    this.x -> kopia.x;
    this.y -> kopia.y;
}

Sequence::~Sequence(){
    delete[] x;
    delete[] y;
}

int Sequence::accessX(){
    return x;
}

int Sequence::accessY(){
    return y;
}

float Sequence::oblicz(){
    return x+y;
}

float Sequence::oblicz1(){
    return x-y;
}
