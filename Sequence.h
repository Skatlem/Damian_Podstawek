//! \plik sequence.h
//! \brief definicja klasy Sequence.

#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <iostream>

//! \klasa Sequence
//! \brief klasa reprezentująca matematyczną sekwencja.
//!
//! Ta klasa zapewnia możliwość tworzenia ciągu matematycznego i wykonywania na nim różnych operacji.
//! Jest w stanie obliczyć sumę pierwszych n wyrazów ciągu dwoma różnymi metodami 
//! a także zapewnić dostęp do wartości x i y użytych do zdefiniowania ciągu.

class Sequence{
public:
    //! \brief Constructor klasy Sequence.
    //!
    //! Ten konstruktor inicjuje nowy obiekt Sequence z podanymi wartościami x i y.
    //! \param x wartość x w sekwencji.
    //! \param y wartość  y w sekwencji.
    Sequence(int x, int y);

    //! \brief kopia constructora klasy Sequence.
    //!
    //! Ten konstruktor tworzy nowy obiekt Sequence, który jest kopią dostarczonego obiektu.
    //! \param kopia Sequence.
    Sequence(Sequence kopia);

    //! \brief Destructor klasy Sequence.
    //!
    //! Destruktor ten cofa przydział pamięci przydzielanej dynamicznie, skojarzonej z obiektem Sequence.
    ~Sequence();

    //! \brief Akcesor dla wartości x sekwencji.
    //!
    //! Ta funkcja zwraca wartość x użytego do zdefiniowania sekwencji.
    //! \zwraca wartość x.
    int accessX();

    //! \brief Akcesor dla wartości y sekwencji.
    //!
    //! Ta funkcja zwraca wartość y używaną do zdefiniowania sekwencji.
    //! \zwraca wartość y.
    int accessY();

    //! \brief Oblicz sumę pierwszych n wyrazów ciągu, korzystając z pierwszej metody.
    //!
    //! Ta funkcja oblicza sumę pierwszych n wyrazów ciągu przy użyciu następującego wzoru:
    //! \f$ S_n = \frac{n(n+1)x}{2} + ny \f$
    //!
    //! \zwraca sume sekwencji.
    float oblicz();

    //! \brief Oblicz sumę pierwszych n wyrazów ciągu, korzystając z drugiej metody.
    //!
    //! Ta funkcja oblicza sumę pierwszych n wyrazów ciągu przy użyciu następującego wzoru:
    //! \f$ S_n = \frac{x(1-y^n)}{1-y} \f$
    //!
    //! zwraca sume n w sekwencji.
    float oblicz1();
private:
    int x, y; //!< Wartości x i y używane do definiowania sekwencji.
};

#endif
