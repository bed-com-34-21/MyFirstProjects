#pragma one
#include <iostream>
using namespace std;
#include <String>
class SparePart{
    public:
    SpareParty();

    string brandName;
    string quantity;
    string partyType;
    
    //Accessor method
    void brandName();
    void quantity ();
    void partType ();

     
    // relational operator
    SpareParty == (SpareParty) const;
    private:
    string brandName;
    string quantity;
    string partyType;

     // Default constructor
    SpareParty() {
        brandName = " ";
        quantity = " ";
        partyType = " ";
    }

    // overloaded constructor
SpareParty ( String newdbrandName, String newdquantity, String newdpartyType ){
    brandName=dbrandName;
    quantity=dquantity;
    partyType=dpartytype;


}

};