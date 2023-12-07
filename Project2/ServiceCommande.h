#pragma once
#include "BDD.h"
#include "Commande.h"  
using namespace System::Collections::Generic;
using namespace System::Data;

public ref class ServiceCommande {  
    BDD^ bdd;

public:
    ServiceCommande(); 
    ~ServiceCommande();  

    List<Commande^>^ SelectAllCommande();  
    void InsertCommande(Commande^ commande);  
    void DeleteCommande(Commande^ commande);  
    void UpdateCommande(Commande^ commande);  
    //bool ArticleExists(int refArticle;
};
