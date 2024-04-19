#include <iostream>
using namespace std;

int main () {
     int daysUntilExpiration = rand () % 11;
    if(daysUntilExpiration <= 10){
        cout <<"Your subscription will expire soon. renew now!" <<endl;
    }
    else if (daysUntilExpiration <= 5){
        cout <<" Your subscription expires in " << daysUntilExpiration << "days. Renew now and save 10%!" <<endl;
    }
    else if (daysUntilExpiration <= 1){
        cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
    }
    else if (daysUntilExpiration <=0){
        cout << "your subscription has expired." << endl;
    }
    else{
        cout <<"You have an active subscription" <<endl;
    }
}