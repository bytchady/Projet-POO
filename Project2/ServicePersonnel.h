#pragma once
#include "BDD.h"
#include "Personnel.h"
#include "Adresse.h"



    public ref class ServicePersonnel {
    private:
        BDD^ bdd;
    public:
        ServicePersonnel();
        ~ServicePersonnel();
        System::Data::DataSet^ SelectAllServicePersonnel();
        void InsertServicePersonnel(Personnel^ personnel, String^ adresseId);
        void DeleteServicePersonnel(Personnel^ personnel);
        void UpdateServicePersonnel(Personnel^ personnel);
    };
