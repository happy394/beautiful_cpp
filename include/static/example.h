#ifndef BEAUTIFUL_EXAMPLE_H
#define BEAUTIFUL_EXAMPLE_H
#include <iostream>

enum class DEGREE // "class" for c++
{
    noDegree,
    Bachelor,
    Master,
    PhD,
    Doctor
};

class Human
{
private:
    std::string name;
    unsigned age;
public:
    Human(std::string name, unsigned age = 20);
    virtual void getInfo() const; // virtual - with dynamic(pointers, memory). If children's func will be remade,
    // I will return their funcs

    // buff var for class (can't be const)
//    static size_t count;
//    static void hello();
};

class Professor:public Human // public, protected doesn't change
{
private:
    DEGREE degree;
public:
//    Professor(std::string name, unsigned age, DEGREE degree = DEGREE::noDegree);
    Professor(std::string name, unsigned age, DEGREE degree = static_cast <DEGREE>(0));
    void getInfo() const override; // override should be used for better performance
};

class Student:public Human
{
private:
    std::string university;
public:
    Student(std::string name, unsigned age, std::string university);
//    void getInfo() const override; // override should be used for better performance
};

#endif //BEAUTIFUL_EXAMPLE_H
