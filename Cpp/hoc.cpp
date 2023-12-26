#include<iostream>
#include<queue>
#include<string>

int main() {
    int num;
    std::cout << "Input n = ";
    std::cin >> num;
    
    std::queue<std::string> binary;
    std::vector<std::string> result;
    binary.push("0");
    binary.push("1");
    result.push_back("0");
    result.push_back("1");

    while (true) {
        std::string top = binary.front();
        binary.pop();
        if (top.size() == num+1) break;
        binary.push(top + "0");
        binary.push(top + "1");
        result.push_back(top + "0");
        result.push_back(top + "1");
    }

    std::cout << "Result:\n";
    for (std::string it: result)
        if (it.size() == num) std::cout << it << std::endl;
}