#include "Employee.h"
#include <iostream>

Employee::Employee(int id, const std::string& nom, double salaire) 
    : id(id), nom(nom), salaire(salaire) {}

double Employee::calculSalaire() const {
    return salaire;
}

void Employee::afficher() const {
    std::cout << "ID: " << id << "\n"
              << "Nom: " << nom << "\n"
              << "Salaire: " << calculSalaire() << std::endl;
}

bool Employee::operator>(const Employee& e) const {
    return this->calculSalaire() > e.calculSalaire();
}
