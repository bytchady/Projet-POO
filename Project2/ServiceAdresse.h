#pragma once
#include "BDD.h"
#include "Adresse.h"


namespace NS_Adresse {
    public ref class ServiceAdresse {
    private:
        BDD^ bdd;
    public:
        ServiceAdresse();
        ~ServiceAdresse();
        /*System::Data::DataSet^ SelectAllServiceAdresse();*/
        String^ InsertServiceAdresse(Adresse^ adresse);
        void DeleteServiceAdresse(Adresse^ adresse);
    };
}