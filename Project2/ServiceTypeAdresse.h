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

    List<TypeAdresse^>^ SelectAllTypeAdresse();
    void InsertTypeAdresse(TypeAdresse^ typeAdresse);
    void UpdateTypeAdresse(TypeAdresse^ typeAdresse);
};

