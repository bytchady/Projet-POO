#pragma once
#include "BDD.h"
#include "Personnel.h"


namespace NS_Personnel {
    public ref class ServicePersonnel {
    private:
        BDD^ bdd;
    public:
        ServicePersonnel();
        ~ServicePersonnel();
        System::Data::DataSet^ SelectAllServicePersonnel();
        void InsertServicePersonnel(Personnel^ personnel);
        void DeleteServicePersonnel(Personnel^ personnel);
        void UpdateServicePersonnel(Personnel^ personnel);
    };
}