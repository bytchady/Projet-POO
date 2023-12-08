#pragma once
#include "Client.h"
#include "Adresse.h"

using namespace System;

public ref class TypeAdresse
{
private:
    String^ Type_Adresse;
    Client^ client = gcnew Client();
    Adresse^ adresse = gcnew Adresse();

public:
    void setAdresse(Adresse^ adresse)
    {
        this->adresse = adresse;
    }

    void setClient(Client^ client)
    {
        this->client = client;
    }

    void setTypeAdresse(String^ typeadresse)
    {
        this->Type_Adresse = typeadresse;
    }

    String^ getTypeAdresse()
    {
        return this->Type_Adresse;
    }

    Adresse^ getAdresse()
    {
        return this->adresse;
    }

    Client^ getClient()
    {
        return this->client;
    }
};


