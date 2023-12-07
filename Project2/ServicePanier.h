#pragma once
#include "BDD.h"
#include "Panier.h"
using namespace System::Collections::Generic;
using namespace System::Data;

public ref class ServicePanier
{
private:
    BDD^ bdd;

public:
    ServicePanier();
    ~ServicePanier();

    List<Panier^>^ SelectAllPanier();
    void InsertPanier(Panier^ panier);
    void UpdatePanier(Panier^ panier);
    void DeletePanier(Panier^ panier);
};
