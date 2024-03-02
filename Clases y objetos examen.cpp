#include <iostream>
#include <string>

using namespace std;

// Declaramos la clase de oviparos de gallina 
class Oviparosdegallina   {
	public:
		 //Atributos de la clase 
		 string raza;
		 float tamano; 
		 float peso; 
	 	 string especie; 
		 
		 // constructor para inicializar atributos 
		 Oviparosdegallina (string _raza, float _tamano, float _peso, string _especie) {
		 		 
			raza = _raza; 
		 	tamano = tamano; 
		 	peso = peso; 
		 	especie = especie; 
		 	
		 	/*Imprimimos mensaje para indicar que el objeto que el objeto oviparos de gallina se creó*/
		 	cout<<"Se creo el objeto oviparos de gallina"<<endl;
		 	
			}
		/* Destructor se ejecuta cuando se destruye un objeto  de la clase*/
		 ~Oviparosdegallina(){
		 	// imprimimos un mensaje 
		 	cout<<"se destuyo el objeto oviparos de gallina."<<endl;
		 }	
	 	// Agrregamos Metodos y acciones del objeto 
	 	//Metodo que representa la accion oviparos de gallina esta produciendo
	 	void producir (){
	 		cout<<"oviparos de gallina esta produciendo."<<endl;
		 }
		 // Metodo que representa la accion oviparos de gallina esta criando
		 void criar (){
		 	cout<<" oviparos de gallina esta criando."<<endl;
		 }
		 // Metodo que representa la accion oviparos de gallina esta cantando
		 void cantar (){
		 	cout<<" oviparos de gallina esta cantando."<<endl;
		 }
		 // Metodo que representa la accion oviparos de gallina esta utilizando
		 void utilizar (){
		 	cout<<" Oviparos de gallina esta utilizando."<<endl;
		 }
		 
		 
	 };
	 
	 // funcion principal Main 
int main (){
	// Creamos objeto 
	Oviparosdegallina gallina("Peluca", 10,20, "especie");
	
	// hacemos un llamado a los metodos creados 
	gallina.producir();
	gallina.criar();
	gallina.cantar();
	gallina.utilizar();
	
	
	 	
	 	return 0;
}