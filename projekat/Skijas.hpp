#ifndef SKIJAS_HPP_INCLUDED
#define SKIJAS_HPP_INCLUDED
#include <iostream>
using namespace std;
#include "Osoba.hpp"
#include "Skipass.hpp"


enum Oprema {Skijas2, Border};

class Skijas:public Osoba{

protected:
    Skipass SkijasPass;
    Oprema Vrsta;
    Cas SKIcas[10];
    int brojCas;
    int IDS;
    static int BrojSkijasa;

public:

    Skijas():Osoba(), SkijasPass(), Vrsta(Skijas2){
            brojCas=0;
            IDS=BrojSkijasa;
            BrojSkijasa++;
    }
    Skijas(string ime1, string prezime1,Datum PSP, Datum KSP ,VrstaSkipassa v, Oprema o1):Osoba(ime1, prezime1), SkijasPass(PSP,KSP,v), Vrsta(o1){
        brojCas=0;
        IDS=BrojSkijasa;
        BrojSkijasa++;

    }
    Skijas(const Skijas& a):Osoba(a.ime,a. prezime), SkijasPass(a.SkijasPass), Vrsta(a.Vrsta){
        brojCas=0;
        IDS=BrojSkijasa;
        BrojSkijasa++;
    }
    int getID (){
        return IDS;
    }
    void ZakazivanjeCasa (Cas a){
        SKIcas[brojCas]=a;
        brojCas++;
    }

    };

#endif // SKIJAS_HPP_INCLUDED

