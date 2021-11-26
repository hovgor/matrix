#include <iostream>
#include <string>
#include <map>
struct student
{
    std::string name;
    std::string surName;
    short age;
};

int main()
{
    std::cout << "How meny peaple do you have? ";
    int size;
    std::cin >> size;
    student *politexnik = new student[size];
    for (int i = 0; i < size; ++i)
    {
        std::cout << "enter name: ";
        std::cin >> politexnik[i].name;
        std::cout << "enter sourname: ";
        std::cin >> politexnik[i].surName;
        std::cout << "enter age: ";
        std::cin >> politexnik[i].age;
    }
    std::map<std::string, student> usanox;
    for (int i = 0; i < size; ++i)
    {
        usanox[politexnik[i].name] = politexnik[i];
    }
    std::cout << "enter student name" << std::endl;
    std::string studentname;
    std::cin >> studentname;
    auto it = usanox.find(studentname);
    std::cout << it->first << " " << it->second.surName << " " << it->second.age << std::endl;
	delete[] politexnik;   
 return 0;
}
