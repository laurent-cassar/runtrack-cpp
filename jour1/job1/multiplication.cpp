#include <iostream>

int main() {
    double nombre1, nombre2, produit;
    
    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;
    
    std::cout << "Entrez le deuxieme nombre : ";
    std::cin >> nombre2;
    
    produit = nombre1 * nombre2;
    
    std::cout << "\nLe produit de " << nombre1 << " et " << nombre2 
              << " est : " << produit << std::endl;
    
    return 0;
}