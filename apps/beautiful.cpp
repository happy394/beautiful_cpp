#include <iostream>
#include "static/example.h"

//size_t Human::count = 0; // initialize static field before working with it

int main()
{
////    std::cout << "Hello world" << std::endl;
////    f();
//
//    for (int i = 0; i < 10; ++i)
//    {
//        Human("smb", i + 20).getInfo();
//    }
//    Human h("Roy"); // static var is available to objects too
//    std::cout << h.count << std::endl;
////    std::cout << Human::count << std::endl;

Professor Ben("Ben", 60);
Ben.getInfo(); // has same methods as Human does
static_cast <Human>(Ben).getInfo();
Human human("human");
Student student("Max", 20, "HSE");
//static_cast <Professor>(human); // more fields -> can't be done
std::vector<Human> v{human, Ben, student};

for (auto i: v)
{
    i.getInfo();
}

}
