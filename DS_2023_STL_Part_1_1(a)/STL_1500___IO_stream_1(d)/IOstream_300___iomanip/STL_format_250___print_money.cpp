#include <iostream>
#include <locale>
#include <iomanip>

void disp_money(double money) {
    std::cout << std::setw(15) << std::showbase << std::put_money(money*100.)<< "\n";
}

int main() {
    // std::cout.imbue(std::locale("en_US.UTF-8"));
    disp_money(12345678.9);
    disp_money(12.23);
    disp_money(120.23);
}
