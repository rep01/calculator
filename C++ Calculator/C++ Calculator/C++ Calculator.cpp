#include <iostream>
#include <windows.h> // allows SetConsoleTextAttribute

void Color(int color) // Text / Window colour, doing it with this to avoid using system("color 0a") since system calls are bad.
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
constexpr double add(const double x, const double y) {     
    return x + y;
}

constexpr double divide(const double x, const double y) { 
    return x / y;
}

constexpr double multiply(const double x, const double y) {
    return x * y;
}

constexpr double subtract(const double x, const double y) {
    return x - y;
}
constexpr double percentageOf(const double x, const double y) {
    return x / y * 100;
}

int main() {
    SetConsoleTitleA("Calculator");
    char exit;
    do {
        double x, y; int op;

        std::cout << "1) Add:\n2) Divide:\n3) Multiply:\n4) Subtraction:\n5) Percentage Of:\n6) Mean(Not Done)\n7) Average(Not Done)\n8) Mode(Not Done)\n";

        // and that, done poorly would look like
        // using namespace std;
        // cout << "1) Add:" << endl;
        // cout << "2) Divide:" << endl;
        // you get the point

        std::cin >> op;

        switch (op) {
        case 1:
            std::cout << "Enter your two numbers: \n"; std::cin >> x >> y; 
            Color(2);
            std::cout << add(x, y);
            break;
        case 2:
            std::cout << "Enter your two numbers: \n"; std::cin >> x >> y; 
            Color(2);
            std::cout << divide(x, y);
            break;
        case 3:
            std::cout << "Enter your two numbers: \n"; std::cin >> x >> y; 
            Color(2);
            std::cout << multiply(x, y);
            break;
        case 4:
            std::cout << "Enter your two numbers: \n"; std::cin >> x >> y; 
            Color(2);
            std::cout << subtract(x, y);
            break;
        case 5:
            std::cout << "Enter your two numbers: \n"; std::cin >> x >> y;
            Color(2);
            std::cout << percentageOf(x, y);
            break;
        default:  // a way to let the User know input was invalid.
            std::cout << "Input Invalid \n";
            break;
        }
        Color(7); // changes color back to default, i only want the answer to be coloured.
        std::cout << "\n Would you like to perform any other operations? y/n\n";

        std::cin >> exit;
    } while (exit == 'y');

    return 0;
}
