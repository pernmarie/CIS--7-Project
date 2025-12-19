// Marieann Pernillo 
// Doctors Without Borders Project
//* This program will match physicians based on their specailized area
// and language fluency.It will then calculate the probability of that
// occuring*
// 10-28-25

#include <iostream>
#include <string> // will use primarily strings
#include <cstdlib> // for rand
#include <ctime> // for time

using namespace std;
int main()
{
    // variables 
    int fluentLanguage; // allow users to enter their language
    int specialtyChoice; // allows users to enter their speciality
    
    const int five_languages = 5; // constant number of languages
    const int five_specialities = 5; // constant number of specialities
    const int ten_countries = 10; // constant number of countries
    
    //five langaues
    string languages[five_languages] = {
        "English" , "Spanish", "Mandarin", "French" , "German"
    };
    
    //five specialties 
    string specialities[five_specialities] = {
        "Oncology", "Cardiology", "Infectious Diseases", 
        "Neurology", "Dermatology"
    };
    
    // ten countries to match with
    string countries[ten_countries] = {
        "Guatemala", "Brazil", "Albania", "Japan", "Costa Rica",
        "Thailand", "Finland", "India", "Laos", "Peru"
    };
    
    // actual program stimulation
    cout<< "Welcome to Doctors Without Borders" <<endl;
    cout<< "----------------------------------" <<endl;
    cout <<endl;
    
    // select language
    cout << "What language are you fluent in?"<< endl;
    cout << endl;
    cout << "Language Options: "<<endl;
    cout << "1. English" <<endl;
    cout << "2. Spanish" <<endl;
    cout << "3. Mandarin" <<endl;
    cout << "4. French" <<endl;
    cout << "5. German" <<endl;
    cout << "Please insert a number 1 - 5: "<<endl;
    cin>> fluentLanguage; 
    
    // ensure program is fucntional
    if (fluentLanguage < 1 || fluentLanguage > 5){
        cout << " !Invalid Input! Try Again " <<endl;
        return 1;
    }
    cout << endl;
    // select speciality
    cout << "What is your Medical Speciality?" <<endl;
     cout << "1. Oncology" << endl;
    cout << "2. Cardiology" << endl;
    cout << "3. Infectious Diseases" << endl;
    cout << "4. Neurology" << endl;
    cout << "5. Dermatology" << endl;
    cout << "Please insert a number 1 - 5: " <<endl;
    cin>> specialtyChoice; 
    
    //ensure program is functional
    if (specialtyChoice < 1 || specialtyChoice > 5){
        cout <<" !Invalid Input! Try Again" <<endl;
        return 1; 
    }
    
    // random number generator to get new results every time
srand(time(0));

cout << endl;
cout << "Your matching Country is: " << endl;
cout << "--------------------------" << endl;

// display just one country 
cout << countries[rand()% ten_countries] <<endl;

cout << endl;
// probability 
cout <<"The number of languages is five multiplied by number of\n";
cout << "number of specializations is five = 5 * 5 = 25"<<endl;
cout << "The probability of choosing one language and one specialty is\n";
cout<<  "1/25 which is 4%" <<endl;
return 0;
}
