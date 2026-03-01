#pragma once

#include "Employee.h"

/**
 * @brief Manager class inheriting from Employee.
 * Demonstrates inheritance and overriding methods.
 */
class Manager : public Employee {
private:
    double prime; ///< Specific bonus for Manager

public:
    /**
     * @brief Manager constructor.
     * @param id Employee ID.
     * @param nom Manager name.
     * @param salaire Base salary.
     * @param prime Manager bonus.
     */
    Manager(int id, const std::string& nom, double salaire, double prime);

    /**
     * @brief Calculate salary including the manager's bonus.
     * @return double Total salary.
     */
    double calculSalaire() const override;

    /**
     * @brief Display manager details, including bonus.
     */
    void afficher() const override;
};
