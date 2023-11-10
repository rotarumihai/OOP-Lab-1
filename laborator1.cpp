// Tema de la SARCINA_1 Clasa Animal

#include <iostream>
#include <cstring>  // functie standard de biblioteca in C++ folosita pentru a copia un sir in altul
#include <cstdlib>  // libraria pentru functia malloc

using namespace std; // namespace utilizat pentru evitarea repetarii de std

class Animal {
	
  
     // atributele clasei
    char nume[50]; 
    int varsta;
    char specia[20];
    char habitat[5];
	

  public:
	
	// Constructor implicit
    Animal() {}
    
    
    // Constructor cu parametri
    Animal(const char nume1[50], int varsta1, const char specia1[20], const char habitat1[5]) {
        strcpy(nume, nume1);
        varsta = varsta1;
        strcpy(specia, specia1);
        strcpy(habitat, habitat1);
    }
    
    // Constructor de copiere
    Animal(const Animal& c2, const Animal& i2) {
        strcpy(nume, c2.nume); // Functie care copie un string in alt string
        varsta = i2.varsta;
        strcpy(specia, c2.specia); 
        strcpy(habitat, c2.habitat);
    }
    
    
    
    // Metoda de afisare a atributelor 
    virtual void Afisare() {
        cout << "Nume: " << nume << endl;
        cout << "Varsta: " << varsta << endl;
        cout << "Specia: " << specia << endl;
        cout << "Habitat: " << habitat << endl << endl;
    }
};

// SARCINA_2, Extinderea clasei Animal
class Amfibie : public Animal{
	
	
  public:
		
	Amfibie(const char nume1[50], int varsta1, const char specia1[20], const char habitat1[5]) : Animal(nume1, varsta1, specia1, habitat1) {
      
		
        
        cout << "A fost creata o amfibie" << endl << endl;
		
	};
	
	// Destructor
	~Amfibie() {
	 
	     cout << "Amfibia a disparut" << endl << endl; 
		 
	};
	
};

// SARCINA_4, Clasa derivata clasei de baza(Animal)
class Pasare : public Animal{
	
	public:
		char hrana[50];
		bool bolnava;
		
	
    
    Pasare(const char nume1[50], int varsta1, const char hrana1[25], bool bolnava1) : Animal(nume1, varsta1, "Pasare", "cuib"), bolnava(bolnava1) {
          strcpy(hrana, hrana1);
    
	}; 
    
    // Rescrierea functiei din clasa de baza Animal
    void Afisare() override {
        Animal::Afisare(); 
        cout << "Hrana: " << hrana << endl;
        cout << "Bolnava: " << bolnava << endl << endl;
    };
    

		
	bool Zboara() {
		
		return !bolnava; 
	};
	
	
		
};

// SARCINA_5, functie care primeste pointeri
void afisareAnimal(Animal* animal) {
    animal->Afisare();
}

int main() {
	
	//void (*afisareAnimal)(Animal) = Afisare;
	
	Animal cobra("Pericol", 3, "Naja", "desertul Sahara"); // Instanta unei clase animal
	Amfibie broasca("Zgomot", 1, "Bombina", "Madagascar"); // Instanta unei amfibii
    
    cobra.Afisare(); // Afirea atributelor obiectului de tip Animal
    
    // SARCINA_3 
    Animal *leu = new Animal("Foc", 5, "Felidae", "Savana"); // Instantierea unui animal folosind new
    leu->Afisare();
    
    delete leu; // Eliberarea memoriei utilizand delete
    
    // alocarea si eliberarea memoriei utilizand malloc si free
    size_t t = 0;
    Animal* capra = (Animal*)malloc(t); 
    free(capra);  
    
    Animal* animale = static_cast<Animal*>(calloc(3, sizeof(Animal))); // Alocare memoriei pentru un tablou d 3 obiecte Animal
    free(animale); 
    
    // Afisarea atributelor instantei de tip pasare
    Pasare priveghetoare("Colorata", 2, "seminte de floarea soarelui", false);
    priveghetoare.Afisare();
    cout << priveghetoare.Zboara() << endl << endl;
	
	// Utilizarea functiei care primeste parametru de tip pointer
	afisareAnimal(&cobra); // Transmiterea adresei obiectului cobra la func?ia afisareAnimal
    afisareAnimal(&priveghetoare);
    afisareAnimal(&broasca);
		
    return 0;
} 






