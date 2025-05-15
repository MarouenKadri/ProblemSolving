---
title: Fiche de Révision - Héritage Protégé en C++
---

<h1 style="text-align: center; color: #003366; font-family: Arial; border-bottom: 2px solid #0066cc;">
  FICHE DE RÉVISION – HÉRITAGE PROTÉGÉ EN C++
</h1>

<div style="background-color: #0066cc; padding: 5px; margin-top: 20px;">
  <h2 style="color: white; font-family: Arial; margin: 0;">SITUATION</h2>
</div>

```cpp
class Base {
public:
    void PublicFunction() {}
};

class Derived : protected Base {
};
<div style="background-color: #0066cc; padding: 5px; margin-top: 20px;"> <h2 style="color: white; font-family: Arial; margin: 0;">QUE SE PASSE-T-IL ?</h2> </div>
Héritage protégé :
Derived hérite de Base avec le spécificateur protected

Conséquence sur les membres :
Tous les membres public et protected de Base deviennent protected dans Derived

<div style="background-color: #0066cc; padding: 5px; margin-top: 20px;"> <h2 style="color: white; font-family: Arial; margin: 0;">CONSÉQUENCE</h2> </div>
Code problématique :

cpp
int main() {
    Derived d;
    d.PublicFunction(); // Erreur de compilation !
}
Explication :
La fonction PublicFunction() n'est plus accessible depuis l'extérieur de la classe Derived car elle est devenue protected.

<div style="background-color: #0066cc; padding: 5px; margin-top: 20px;"> <h2 style="color: white; font-family: Arial; margin: 0;">SOLUTIONS POSSIBLES</h2> </div>
Solution 1 : Héritage public
cpp
class Derived : public Base { };
Avantage :
Accès direct à PublicFunction() depuis main()

Solution 2 : Déclaration 'using'
cpp
class Derived : protected Base {
public:
    using Base::PublicFunction; // Réexpose la fonction
};
Avantage :
Maintient l'héritage protégé tout en autorisant l'accès spécifique

<div style="background-color: #0066cc; padding: 5px; margin-top: 20px;"> <h2 style="color: white; font-family: Arial; margin: 0;">RÉSUMÉ</h2> </div>
Type Héritage	Visibilité membres Base	Accès depuis main()
public	Conserve visibilité	✅ Oui
protected	Devient protected	❌ Non
private	Devient private	❌ Non
<div style="background-color: #0066cc; padding: 5px; margin-top: 20px;"> <h2 style="color: white; font-family: Arial; margin: 0;">ASTUCE</h2> </div><div style="background-color: #e6f3ff; padding: 10px; border-left: 4px solid #0066cc; margin: 15px 0;"> 💡 **Bonnes pratiques** : - Utilisez `protected` pour une hiérarchie de classes strictement interne - Combine avec `using` pour exposer sélectivement des fonctionnalités - Préférez `public` pour les API publiques </div> ```
