#ifndef __STATISTICS_H__
#define __STATISTICS_H__

#include <iostream>


class Statistics{
public:

    Statistics(int x, int y);
    Statistics(Statistics kopia);
    ~Statistics();
    int accessX();
    int accessY();
    float oblicz();
    float oblicz1();
private:
    int x, y;
}

#endif
