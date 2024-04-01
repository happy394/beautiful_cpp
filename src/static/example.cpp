#include "static/example.h"
#include "fmt/format.h" // is available in c++ 20 (std::format)


Human::Human(std::string name, unsigned age): name(name), age(age)
{
    // after making new object static count variable is added
//    ++count;
}
void Human::getInfo() const
{
    std::cout << fmt::format("name: {}, age: {}\n", name, age);
}

Professor::Professor(std::string name, unsigned age, DEGREE degree): Human(name, age), degree(degree){}

void Professor::getInfo() const
{
    Human::getInfo();
    std::cout << fmt::format("degree: {}\n", static_cast <int>(degree)); // could be added switch
}

Student::Student(std::string name, unsigned age, std::string university): Human(name, age), university(university) {}

//void Human::hello()
//{
//    std::cout << "not hello" << std::endl;
//}