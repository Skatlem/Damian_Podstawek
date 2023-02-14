#ifndef STATISTICS_H
#define STATISTICS_H

#include <iostream>

//! \class Statistics
//! \brief Klasa reprezentujÄ…ca statystyki dwĂłch liczb.
//! \image html logo.png
class Statistics{
public:

    //! \brief Konstruktor klasy Statistics.
    //! \param[in] x - pierwsza liczba do obliczeĹ„ statystycznych.
    //! \param[in] y - druga liczba do obliczeĹ„ statystycznych.
    Statistics(int x, int y);

    //! \brief Konstruktor kopiujÄ…cy klasy Statistics.
    //! \param[in] kopia - obiekt klasy Statistics, ktĂłry zostanie skopiowany.
    Statistics(Statistics kopia);

    //! \brief Destruktor klasy Statistics.
    ~Statistics();

    //! \brief Metoda zwracajÄ…ca wartoĹ›Ä‡ pola x.
    //! \return WartoĹ›Ä‡ pola x.
    int accessX();

    //! \brief Metoda zwracajÄ…ca wartoĹ›Ä‡ pola y.
    //! \return WartoĹ›Ä‡ pola y.
    int accessY();

    //! \brief Metoda obliczajÄ…ca statystykÄ™ dwĂłch liczb.
    //! \return Statystyka dwĂłch liczb.
    float oblicz();

    //! \brief Metoda obliczajÄ…ca innÄ… statystykÄ™ dwĂłch liczb.
    //! \f$ I = \int_{0}^{\infty} \frac{x^3}{e^x-1} dx @f$
    //! \return Inna statystyka dwĂłch liczb.
    float oblicz1();
private:
    int x, y;
}

#endif
