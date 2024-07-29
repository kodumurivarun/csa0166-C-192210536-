#include <iostream>
#include <string>

// Base class
class Animal {
public:
    Animal(std::string name, std::string species, int age)
        : name(name), species(species), age(age) {}

    std::string getName() const { return name; }
    void setName(std::string name) { this->name = name; }

    std::string getSpecies() const { return species; }
    void setSpecies(std::string species) { this->species = species; }

    int getAge() const { return age; }
    void setAge(int age) { this->age = age; }

    void display() const {
        std::cout << "Name: " << name << ", Species: " << species << ", Age: " << age << std::endl;
    }

private:
    std::string name;
    std::string species;
    int age;
};

// Derived class Cat
class Cat : public Animal {
public:
    Cat(std::string name, std::string species, int age, std::string color, std::string breed)
        : Animal(name, species, age), color(color), breed(breed) {}

    std::string getColor() const { return color; }
    void setColor(std::string color) { this->color = color; }

    std::string getBreed() const { return breed; }
    void setBreed(std::string breed) { this->breed = breed; }

    void display() const {
        Animal::display();
        std::cout << "Color: " << color << ", Breed: " << breed << std::endl;
    }

private:
    std::string color;
    std::string breed;
};

// Derived class Dog
class Dog : public Animal {
public:
    Dog(std::string name, std::string species, int age, double weight, std::string breed)
        : Animal(name, species, age), weight(weight), breed(breed) {}

    double getWeight() const { return weight; }
    void setWeight(double weight) { this->weight = weight; }

    std::string getBreed() const { return breed; }
    void setBreed(std::string breed) { this->breed = breed; }

    void display() const {
        Animal::display();
        std::cout << "Weight: " << weight << "kg, Breed: " << breed << std::endl;
    }

private:
    double weight;
    std::string breed;
};

int main() {
    Cat cat("Whiskers", "Cat", 3, "Black", "Siamese");
    Dog dog("Buddy", "Dog", 5, 20.5, "Labrador");

    std::cout << "Cat Information:" << std::endl;
    cat.display();

    std::cout << "\nDog Information:" << std::endl;
    dog.display();

    return 0;
}
