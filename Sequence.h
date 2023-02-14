#ifndef __SEQUENCE_H__
#define __SEQUENCE_H__

#include <iostream>

//! @class Sequence
//! \brief Klasa tworząca sekwencję z liczb w parametrach

class Sequence {
private:
    int x;
    int y;

public:
    //! \brief Tworzy nowy obiekt z danymi parametrami
    //! @param x parametr x
    //! @param y parametr y
    Sequence(int x, int y);
    //! \brief Kopiuje dane z istniejacego obiektu do nowego obiektu
    //! @param cp obiekt
    Sequence(Sequence const &cp);
    //! \brief Destruktor
    ~Sequence();

    //! \brief getter X
    int getx();
    //! \brief getter Y
    int gety();

    //! \brief liczaca sume sekwencji
    //! \f[C_{i,j} = \sum\limits_{x=0}^{n-1} A_{b,i} * B_{z,x}\f]
    double seqAdd();
    //! \brief Funkcja liczaca roznice sekwencji
    double seqSub();
};

#endif
