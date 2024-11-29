#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> removeDuplicatesWithOrder(const std::vector<int>& input) {
    std::unordered_set<int> seen;
    std::vector<int> result;

    for (const int& num : input) {
        if (seen.insert(num).second) { 
            result.push_back(num);
        }
    }
    return result;
}

int main() {

    using namespace std;
    setlocale(LC_ALL, "Rus");
    vector<int> input = { 1, 1, 2, 5, 6, 1, 2, 4 };
    vector<int> output = removeDuplicatesWithOrder(input);

    cout << "[IN]: ";
    for (const int& num : input) {
        cout << num << " ";
    }
    cout << endl;

    cout << "[OUT]: ";
    for (const int& num : output) {
        cout << num << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}