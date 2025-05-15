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
