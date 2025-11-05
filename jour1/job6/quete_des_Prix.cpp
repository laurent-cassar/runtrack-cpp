#include <iostream>

int main() {
    double prixHT_kilo, nombreKilos, tauxTVA;
    double prixHT_total, montantTVA, prixTTC;
    
    std::cout << "=== Calcul du prix TTC ===" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Entrez le prix HT d'un kilo de carottes (en euros) : ";
    std::cin >> prixHT_kilo;
    
    std::cout << "Entrez le nombre de kilos de carottes : ";
    std::cin >> nombreKilos;
    
    std::cout << "Entrez le taux de TVA (en %) : ";
    std::cin >> tauxTVA;
    
    // Calculs
    prixHT_total = prixHT_kilo * nombreKilos;
    montantTVA = prixHT_total * (tauxTVA / 100);
    prixTTC = prixHT_total + montantTVA;
    
    // Affichage des résultats
    std::cout << std::endl;
    std::cout << "===== FACTURE =====" << std::endl;
    std::cout << "Prix HT total : " << prixHT_total << " euros" << std::endl;
    std::cout << "Montant TVA (" << tauxTVA << "%) : " << montantTVA << " euros" << std::endl;
    std::cout << "Prix TTC : " << prixTTC << " euros" << std::endl;
    
    return 0;
}