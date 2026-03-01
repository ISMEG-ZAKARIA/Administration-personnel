#pragma once

#include <vector>
#include <memory>
#include "Employee.h"

/**
 * @brief Container class to manage a collection of Employees.
 */
class Personnel {
private:
    std::vector<std::shared_ptr<Employee>> employes; ///< Dynamic list of employees

public:
    /**
     * @brief Add a new employee to the list.
     * @param e Shared pointer to an Employee (or Manager).
     */
    void ajouterEmploye(std::shared_ptr<Employee> e);

    /**
     * @brief Display all employees in the collection.
     */
    void afficherTous() const;
};
