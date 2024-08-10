#include <iostream>
#include <vector>
#include <string>

struct Employee {
    int employeeNumber;
    std::string name;
    double salary;
};

// Function to add employee details
void addEmployee(std::vector<Employee>& employees) {
    int n;
    std::cout << "Enter the number of employees: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        Employee employee;
        std::cout << "Enter details for employee " << i + 1 << ":" << std::endl;
        std::cout << "Employee Number: ";
        std::cin >> employee.employeeNumber;
        std::cout << "Name: ";
        std::cin >> employee.name;
        std::cout << "Salary: ";
        std::cin >> employee.salary;

        employees.push_back(employee);
    }
}

// Function to find the employee with the highest salary
void findHighestSalary(const std::vector<Employee>& employees) {
    double maxSalary = 0;
    int maxSalaryIndex = -1;

    for (int i = 0; i < employees.size(); i++) {
        if (employees[i].salary > maxSalary) {
            maxSalary = employees[i].salary;
            maxSalaryIndex = i;
        }
    }

    if (maxSalaryIndex != -1) {
        std::cout << "Employee with the highest salary:" << std::endl;
        std::cout << "Employee Number: " << employees[maxSalaryIndex].employeeNumber << std::endl;
        std::cout << "Name: " << employees[maxSalaryIndex].name << std::endl;
        std::cout << "Salary: " << employees[maxSalaryIndex].salary << std::endl;
    } else {
        std::cout << "No employees found." << std::endl;
    }
}

// Function to update employee details
void updateEmployee(std::vector<Employee>& employees) {
    int employeeNumber;
    std::cout << "Enter the employee number to update: ";
    std::cin >> employeeNumber;

    bool found = false;

    for (int i = 0; i < employees.size(); i++) {
        if (employees[i].employeeNumber == employeeNumber) {
            std::cout << "Enter new details for employee " << employees[i].employeeNumber << ":" << std::endl;
            std::cout << "Name: ";
            std::cin >> employees[i].name;
            std::cout << "Salary: ";
            std::cin >> employees[i].salary;

            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Employee not found." << std::endl;
    }
}

int main() {
    std::vector<Employee> employees;

    int choice;
    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Add employee details" << std::endl;
        std::cout << "2. Find highest salary employee" << std::endl;
        std::cout << "3. Update employee details" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addEmployee(employees);
                break;
            case 2:
                findHighestSalary(employees);
                break;
            case 3:
                updateEmployee(employees);
                break;
            case 4:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }

        std::cout << std::endl;
    } while (choice != 4);

    return 0;
}

