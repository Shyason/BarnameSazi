#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    std::string lastname;
    int age;

public:
    Person() : name(""), lastname(""), age(0) {}

    void setInfo(const std::string& n, const std::string& ln, int a) {
        name = n;
        lastname = ln;
        age = a;
    }

    int getAge() const {
        return age;
    }

    void displayInfo() const {
        std::cout << "Name: " << name << " " << lastname << ", Age: " << age << std::endl;
    }
};

int main() {
    const int numPeople = 10;
    Person people[numPeople];

    for (int i = 0; i < numPeople; ++i) {
        std::string name, lastname;
        int age;

        std::cout << "Enter details for person " << i + 1 << ":" << std::endl;
        std::cout << "Name: ";
        std::cin >> name;
        std::cout << "Lastname: ";
        std::cin >> lastname;
        std::cout << "Age: ";
        std::cin >> age;

        people[i].setInfo(name, lastname, age);
    }

    int totalAge = 0;
    for (int i = 0; i < numPeople; ++i) {
        totalAge += people[i].getAge();
    }
    double averageAge = static_cast<double>(totalAge) / numPeople;
    std::cout << "The average age of the 10 people is: " << averageAge << std::endl;

    return 0;
}