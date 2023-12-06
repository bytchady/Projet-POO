#pragma once
#include "BDD.h"
#include "Personnel.h"
#include "Adresse.h"
#include "ServiceAdresse.h"

using namespace System::Data;
using namespace  System::Collections::Generic;

namespace NS_Personnel {
    public ref class ServicePersonnel {
    private:
        BDD^ bdd;
        NS_Adresse::ServiceAdresse serviceAdresse;
    public:
        ServicePersonnel();
        ~ServicePersonnel();
        List<Personnel^>^ ServicePersonnel::SelectAllServicePersonnel();
        void InsertServicePersonnel(Personnel^ personnel);
        void DeleteServicePersonnel(Personnel^ personnel);
        void UpdateServicePersonnel(Personnel^ personnel);
    };
}