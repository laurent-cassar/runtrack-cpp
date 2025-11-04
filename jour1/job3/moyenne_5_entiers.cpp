#include <iostream>

int main() {
    int nombre;
    double somme = 0;
    
    std::cout << "Entrez 5 entiers :\n";
    
    std::cout << "Entier 1 : ";
    std::cin >> nombre;
    somme += nombre;
    
    std::cout << "Entier 2 : ";
    std::cin >> nombre;
    somme += nombre;
    
    std::cout << "Entier 3 : ";
    std::cin >> nombre;
    somme += nombre;
    
    std::cout << "Entier 4 : ";
    std::cin >> nombre;
    somme += nombre;
    
    std::cout << "Entier 5 : ";
    std::cin >> nombre;
    somme += nombre;
    
    std::cout << "\nLa moyenne des 5 entiers est : " << somme / 5 << std::endl;
    
    return 0;
}