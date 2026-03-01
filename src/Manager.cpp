#include "Manager.h"
#include <iostream>

Manager::Manager(int id, const std::string& nom, double salaire, double prime)
    : Employee(id, nom, salaire), prime(prime) {}

double Manager::calculSalaire() const {
    return salaire + prime;
}

void Manager::afficher() const {
    std::cout << "[Manager]" << std::endl;
    Employee::afficher();
    std::cout << "Prime: " << prime << std::endl;
}
