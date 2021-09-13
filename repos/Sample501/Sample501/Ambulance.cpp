#include "Ambulance.h"
#include <iostream>

using namespace std;

Ambulance::Ambulance() :m_number(119) { 
    
    ; }
Ambulance::~Ambulance() { 
    ; }

void Ambulance::savepeople() { 
    cout << "saving people" << endl;
    cout << "call number is " << m_number << endl;
    ; }
