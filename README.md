# Administration du Personnel – Système de gestion en C++ (OOP)

[![Language](https://img.shields.io/badge/language-C%2B%2B17-blue.svg)](https://en.cppreference.com/w/cpp/17)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

## 📝 Description (Français / English)

**Français :**  
Une application console simple et robuste pour gérer le personnel d'une entreprise. Ce projet met en pratique les concepts fondamentaux de la programmation orientée objet (POO) en C++, notamment l'héritage, le polymorphisme et l'encapsulation.

**English:**  
A simple yet robust console application for managing company personnel. This project demonstrates core Object-Oriented Programming (OOP) concepts in C++, including inheritance, polymorphism, and encapsulation.

---

## ✨ Features / Fonctionnalités

- **Employee Management:** Add and list employees with unique IDs.
- **Hierarchical Structure:** Specialized `Manager` class inheriting from `Employee`.
- **Salary Calculation:** Dynamic calculation based on employee type (e.g., base salary + bonus for managers).
- **Smart Pointers:** Memory safety using `std::shared_ptr`.
- **Exception Handling:** Robust input validation and error reporting.
- **Polymorphism:** Unified management of different employee types in a single collection.

---

## 🛠 Technologies

- **C++17** (Standard Library only)
- **STL Containers:** `std::vector`, `std::string`
- **Memory Management:** `std::shared_ptr`, `std::make_shared`
- **Build System:** CMake

---

## 🚀 Build & Run / Compilation & Exécution

### Method 1: CMake (Recommended)

```bash
# 1. Create a build directory
mkdir build && cd build

# 2. Configure and build
cmake ..
cmake --build .

# 3. Run the application
./personnel-admin  # (or personnel-admin.exe on Windows)
```

### Method 2: Manual compilation (g++)

```bash
g++ -std=c++17 src/*.cpp -o personnel-admin
./personnel-admin
```

---

## 🖥 Console Output Example

```text
--- Liste du Personnel ---
ID: 1
Nom: Ali
Salaire: 3000
--------------------------
ID: 2
Nom: Sara
Salaire: 3200
--------------------------
[Manager]
ID: 3
Nom: Omar
Salaire: 6000
Prime: 1500
--------------------------

--- Comparaison de salaires ---
Le Manager gagne plus que l'Employe.
```

---

## 📂 Project Structure

```text
administration-personnel/
├── src/
│   ├── main.cpp        # Entry point
│   ├── Employee.h/cpp  # Base class
│   ├── Manager.h/cpp   # Derived class (Inheritance)
│   └── Personnel.h/cpp # Container class
├── .gitignore          # Git exclusion rules
├── CMakeLists.txt      # Build configuration
└── README.md           # Documentation
```

---

## 📜 License

This project is licensed under the **MIT License**.

