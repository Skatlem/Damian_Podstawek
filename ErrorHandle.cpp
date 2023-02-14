#include <iostream>
#include "ErrorHandle.h"

ErrorHandle::ErrorHandle(){
    handler = false;
}

ErrorHandle::~ErrorHandle(){
}

void ErrorHandle::setHandler(bool state){
    handler = state;
}
