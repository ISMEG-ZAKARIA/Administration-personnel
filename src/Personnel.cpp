#include "Personnel.h"
#include <iostream>
#include <stdexcept>

void Personnel::ajouterEmploye(std::shared_ptr<Employee> e) {
    if (!e) {
        throw std::runtime_error("Invalid Employee pointer!");
    }
    employes.push_back(e);
}

void Personnel::afficherTous() const {
    if (employes.empty()) {
        std::cout << "Aucun employe dans le systeme." << std::endl;
        return;
    }

    std::cout << "--- Liste du Personnel ---" << std::endl;
    for (const auto& e : employes) {
        e->afficher();
        std::cout << "--------------------------" << std::endl;
    }
}
