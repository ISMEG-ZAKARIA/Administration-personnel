#include <iostream>
#include <memory>
#include <vector>
#include "Personnel.h"
#include "Manager.h"

int main() {
    try {
        Personnel p;

        // Creating employees using smart pointers (std::shared_ptr)
        auto e1 = std::make_shared<Employee>(1, "Ali", 3000.0);
        auto e2 = std::make_shared<Employee>(2, "Sara", 3200.0);
        auto m1 = std::make_shared<Manager>(3, "Omar", 4500.0, 1500.0);

        // Adding to the system
        p.ajouterEmploye(e1);
        p.ajouterEmploye(e2);
        p.ajouterEmploye(m1);

        // Display all records
        p.afficherTous();

        // Testing operator overloading
        std::cout << "\n--- Comparaison de salaires ---" << std::endl;
        if (*m1 > *e1) {
            std::cout << "Le Manager gagne plus que l'Employe." << std::endl;
        }

    } catch (const std::exception& ex) {
        std::cerr << "Erreur critique : " << ex.what() << std::endl;
        return 1;
    }

    return 0;
}
