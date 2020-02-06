#include <iostream>
#include "Laptime.h"
#include "Car.h"
#include "Race.h"
#include "Championship.h"
#include "Utilizer.h"

using namespace std;
int main(void) {
    /**********************************************/
    /************** LAPTIME TEST ******************/
    /**********************************************/
    Laptime small(87625);
    Laptime large(188524);

    Laptime a(100);
    Laptime b(1000);

    if(small<large)
        cout<<small<<endl<<endl;
    else
        cout<<"ERROR"<<endl<<endl;

    if(large>small)
        cout<<large<<endl<<endl;
    else
        cout<<"ERROR"<<endl<<endl;
    long lo= 34;
    small = large;
    //small = large+small;
    cout<< Laptime(lo)<<endl;
    cout<<"small "<<small<<endl;
    cout<<"large "<<large<<endl;
    cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;

    /**********************************************/
    /************** CAR AND RACE TEST *************/
    /**********************************************/

    cout<<"CREATING CARS"<<endl<<endl;
    Car alonso("Fernando Alonso");
    Car hamilton("Lewis Hamilton");
    Car vettel("Sebastian Vettel");
    Car leclerc("Charles Leclerc");
    Car bottas("Valtteri Bottas");
    Car verstappen("Max Verstappen");
    Car gasly("Pierre Gasly");
    Car hulkenberg("Nico Hulkenberg");
    Car ricciardo("Daniel Ricciardo");
    Car raikkonen("Kimi Raikkonen");
    Car giovinazzi("Antonio Giovinazzi");

    //alonso = raikkonen;
    alonso.Lap(a);
    cout << alonso << endl;

    alonso.Lap(b);
    cout << alonso << endl;

    cout << alonso[0] << endl;
 

    cout<<"CREATING a RACE NAMED BAKU"<<endl<<endl;
    Race baku("baku");
    Race ankara("ankara");
    ankara = baku;
    cout << ankara << endl ;

  
    cout<<"RACE CREATED"<<endl<<endl;
    baku.addCartoRace(alonso);
    baku.addCartoRace(hamilton);
    baku.addCartoRace(vettel);
    baku.addCartoRace(leclerc);
    baku.addCartoRace(bottas);
    baku.addCartoRace(verstappen);
    baku.addCartoRace(gasly);
    baku.addCartoRace(hulkenberg);
    baku.addCartoRace(ricciardo);
    baku.addCartoRace(raikkonen);
    baku.addCartoRace(giovinazzi);


    cout << baku.getNumberOfCarsinRace() << endl;
/*    
    cout<<"NUMBER OF CARS"<<endl<<endl;
    cout<<baku.getNumberOfCarsinRace()<<endl;

    cout<<"PREFIX TEST"<<endl<<endl;
    ++baku;

    cout<<"OSTREAM TEST"<<endl<<endl;;
    cout<<baku<<endl<<endl;

    for(int i = 0;i<55;i++) {
        ++baku;
    }

    cout<<"INDEXING"<<endl;
    cout<<baku[0][0]<<endl<<endl;

    cout<<"AFTER MANY LAPS"<<endl<<endl;
    cout<<baku<<endl<<endl;

    cout<<"GO BACK TEST"<<endl;
    baku.goBacktoLap(0);
    cout<<baku<<endl<<endl;


/**********************************************/
/************** CHAMPIONSHIP TEST *************/
/**********************************************/
 /*
    cout<<"CHAMPIONSHIP"<<endl<<endl;
    Championship champ;

    cout<<"ADD baku"<<endl<<endl;
    champ.addNewRace(baku);

    cout<<"OSTREAM TEST"<<endl<<endl;
    cout<<champ<<endl;


    cout<<"ADDING NEW RACE China"<<endl<<endl;
    champ.addNewRace("china");
    for(int i = 0; i<25 ;i++) {
        champ.addLap("china");
    }
    cout<<"China RACE RESULST"<<endl<<endl;
    cout<<champ["china"]<<endl<<endl;


    cout<<"Overall Championship Results"<<endl<<endl;
    cout<<champ<<endl;

    cout<<"END OF TEST"<<endl;
    
*/
}