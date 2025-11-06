#include <iostream>
#include <windows.h>

int main() {
    // Configurer la console pour UTF-8
    SetConsoleOutputCP(CP_UTF8);

    int annee = 0;
    
    std::cout << "=== Le Jugement de l'année ===" << std::endl;
    std::cout << "Entrez une année : ";
    std::cin >> annee;
    
    // Vérification de l'année bissextile   
        if (annee % 4 == 0)
        std::cout << "L'année " << annee << " est une anne bissextile." << std::endl;
        else
        std::cout << "L'année " << annee << " n'est pas une année bissextile." << std::endl;
     
    return 0;
}