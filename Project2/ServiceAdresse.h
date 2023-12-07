#pragma once
#include "BDD.h"
#include "Adresse.h" 
using namespace System::Collections::Generic;
using namespace System::Data;

public ref class ServiceAdresse {
private:
    BDD^ bdd;

public:
    ServiceAdresse();
    ~ServiceAdresse();

    List<Adresse^>^ SelectAllAdresse();
    void InsertAdresse(Adresse^ ad);
    void DeleteAdresse(Adresse^ ad);
    void UpdateAdresse(Adresse^ ad);
};