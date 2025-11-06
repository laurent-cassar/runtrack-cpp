#include <iostream>

int main() {
    int nombre, nombreInverse = 0, chiffre;
    
    std::cout << "=== Sorcier des Nombres ===" << std::endl;
    std::cout << "Entrez un nombre entier : ";
    std::cin >> nombre;
    
    int nombreOriginal = nombre;
    
    // Inversion des chiffres
    while (nombre != 0) {
        chiffre = nombre % 10;           // Extraire le dernier chiffre
        nombreInverse = nombreInverse * 10 + chiffre;  // L'ajouter au nombre inversé
        nombre = nombre / 10;             // Supprimer le dernier chiffre
    }
    
    std::cout << "\nNombre original : " << nombreOriginal << std::endl;
    std::cout << "Nombre inverse : " << nombreInverse << std::endl;
    
    return 0;
}