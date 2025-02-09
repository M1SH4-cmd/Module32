#include <iostream>
#include <string>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

struct Record {
    std::string name;
    std::string surname;
    int age;
    bool engaged;
};

int main() {
    Record record;
    //std::cin >> record.name >> record.surname >> record.age >> record.engaged;

    //std::ofstream file("../record.json");
    json dict = {
            {"name", record.name},
            {"surname", record.surname},
            {"age", record.age},
            {"engaged", record.engaged}
    };

    dict["surname"] = "Kobzar";

//    Upper signature of initializing equals to lower signature:
//    dict["name"] = record.name;
//    dict["surname"] = record.surname;
//    dict["age"] = record.age;
//    dict["engaged"] = record.engaged;


    std::ifstream file("../record.json");
    file >> dict;

    //file << dict;


    record.name = dict["name"];
    record.surname = dict["surname"];
    record.age = dict["age"];
    record.engaged = dict["engaged"];

    std::cout << "Name: " << record.name << std::endl;
    std::cout << "Surname: " << record.surname << std::endl;
    std::cout << "Age: " << record.age << std::endl;
    std::cout << "Engaged: " << (record.engaged? "Yes" : "No") << std::endl;
    file.close();
    return 0;
}
