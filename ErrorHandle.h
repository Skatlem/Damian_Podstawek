#ifndef __ERROR_HANDLE_H__
#define __ERROR_HANDLE_H__

#include <iostream>

//! @class ErrorHandle
//! \brief klasa do przechwytywania errorów

class ErrorHandle{
public:
    ErrorHandle();
    ~ErrorHandle();
    void setHandler(bool state);
private:
    bool handler;
};

#endif
