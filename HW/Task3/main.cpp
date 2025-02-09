#include <iostream>
#include "company.pb.h"

int main() {

    company::Company company;
    company.set_year_founded(2000);
    company.set_legal_address("123 Main St, Anytown, USA");
    company.set_name("Example Company");
    company.set_activity_type("Manufacturing");
    company.set_foreign_economic_activity(true);

    return 0;
}