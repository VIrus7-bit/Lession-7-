#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <string>
#include <iterator>

template <typename Container>
void print_container(const Container& container, const std::string& delimiter = ", ") {
    auto it = container.begin();
    if (it != container.end()) {
        std::cout << *it; 
        ++it;
    }
    for (; it != container.end(); ++it) {
        std::cout << delimiter << *it;
    }
    std::cout << std::endl;
}

int main() {
    using namespace std;
    setlocale(LC_ALL, "Rus");
    
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set, " "); 

    
    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list); 

    
    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector); 

    return EXIT_SUCCESS;
}