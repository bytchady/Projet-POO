#pragma once
#include "BDD.h"
#include "TypeAdresse.h"  

using namespace System::Collections::Generic;
using namespace System::Data;

public ref class ServiceTypeAdresse {
private:
    BDD^ bdd;

public:
    ServiceTypeAdresse();
    ~ServiceTypeAdresse();

    List<TypeAdresse^>^ SelectAllLivraisonAdresse(TypeAdresse^ typeAdresse);
    List<TypeAdresse^>^ SelectAllFacturationAdresse(TypeAdresse^ typeAdresse);
    void InsertTypeAdresse(TypeAdresse^ typeAdresse);
};

