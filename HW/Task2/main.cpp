#include <iostream>
#include <fstream>
#include <string>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

void searchActor(const json& movies, const std::string& actorName) {
    for (json::const_iterator movie = movies.begin(); movie != movies.end(); ++movie) {
        std::string title = movie.key();
        const json& cast = movie.value()["cast"];
        for (json::const_iterator member = cast.begin(); member != cast.end(); ++member) {
            if ((*member)["actor"] == actorName) {
                std::cout << "Actor: " << actorName << " appeared in: " << title
                          << " as " << (*member)["character"] << std::endl;
            }
        }
    }
}

int main() {
    std::ifstream file("movies.json");
    json movies;
    file >> movies;

    std::string actorName;
    std::cout << "Enter actor's name: ";
    std::getline(std::cin, actorName);

    searchActor(movies, actorName);
    return 0;
}