#pragma once

#include <string>

/**
 * @brief Base class representing an Employee.
 * Demonstrates basic encapsulation and polymorphism.
 */
class Employee {
protected:
    int id;               ///< Employee ID
    std::string nom;      ///< Employee name
    double salaire;       ///< Employee base salary

public:
    /**
     * @brief Constructor for Employee.
     * @param id Unique identifier.
     * @param nom Employee name.
     * @param salaire Base monthly salary.
     */
    Employee(int id, const std::string& nom, double salaire);
    
    /**
     * @brief Virtual destructor to ensure proper cleanup of derived classes.
     */
    virtual ~Employee() = default;

    /**
     * @brief Calculate the total salary. Virtual for override in subclasses.
     * @return double Calculated salary.
     */
    virtual double calculSalaire() const;

    /**
     * @brief Display employee details to console.
     */
    virtual void afficher() const;

    /**
     * @brief Operator overloading to compare two employees based on salary.
     */
    bool operator>(const Employee& e) const;
};
