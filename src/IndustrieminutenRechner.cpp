#include <iostream>
#include <cstdlib>

int main(){
    float input;
    int hOut;
    float mOut;
    std::cout << "Zeit in Industriestunden: ";
    std::cin >> input;
    if(input >= 1){
        hOut = static_cast<int>(input);
    }
    else hOut = 0;
    mOut = (input - hOut) * 60;
    if(hOut == 1) std::cout << "In normaler Zeit: " << hOut << " Stunde und " << mOut << " Minuten." << std::endl;
    else std::cout << "In normaler Zeit: " << hOut << " Stunden und " << mOut << " Minuten." << std::endl;
    system("PAUSE");
    return 0;
}