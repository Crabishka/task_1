#include "taskTest.cpp"


int main() {
    std::cout << "0 - random test, other - console test ";
    int n;
    std::cin >> n;
    if (n){
        testByConsole();
    } else {
        randomTest();
    }

}


