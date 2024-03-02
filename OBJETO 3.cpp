#include <iostream>
#include <string>

using namespace std;

// Declaramos la clase de oviparos de gallina 
class Oviparosdegallina   {
	public:
		 //Atributos de la clase 
		 string raza;
		 float tamano; 
		 string peso; 
	 	 string especie; 
		 
		 // constructor para inicializar atributos 
		 Oviparosdegallina (string _raza, float _tamano, string _peso, string _especie) {
		 		 
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
		 	cout<<" oviparos de gallina esta utilizando."<<endl;
		 }
		 
		 
	 };
	 
	 // funcion principal Main 
int main (){
	// Creamos objeto 
	Oviparos mi gallina miOviparos mi gallina("raza", "tamano","peso", "especie"0);
	
	// hacemos un llamado a los metodos creados 
	miOviparos mi gallina.producir();
	miOviparos mi gallina.criar();
	miOviparos mi gallina.cantar();
	miOviparos mi gallina.utilizar();
	
	// Declaramos la clase de Tractor
class Tractor   {
	public:
		 //Atributos de la clase 
		 string modelo;
	
		 float tamano; 
		 string marca; 
	 	 string motor; 
		 
		 // constructor para inicializar atributos 
		 Oviparosdegallina (string _modelo, float _tamano, string _marca, string _motor) {
		 		 
			modelo = _modelo; 
		 	tamano = tamano; 
		 	marca = marca; 
		 	motor = motor; 
		 	
		 	/*Imprimimos mensaje para indicar que el objeto que el objeto tractor se creó*/
		 	cout<<"Se creo el objeto tractor"<<endl;
		 	
			}
		/* Destructor se ejecuta cuando se destruye un objeto  de la clase*/
		 ~Tractor(){
		 	// imprimimos un mensaje 
		 	cout<<"se destuyo el objeto tractor."<<endl;
		 }	
	 	// Agrregamos Metodos y acciones del objeto 
	 	//Metodo que representa la accion trctor esta encendido
	 	void encender (){
	 		cout<<"tractor esta encendido."<<endl;
		 }
		 // Metodo que representa la accion tractor esta apagado
		 void apagar (){
		 	cout<<" tractor esta apagado."<<endl;
		 }
		 // Metodo que representa la accion tractor esta manejando
		 void manejar (){
		 	cout<<" tractor esta manejando."<<endl;
		 }
		 // Metodo que representa la accion tractor esta transportando
		 void transportar (){
		 	cout<<" tractor esta transportar"<<endl;
		 }
		 
		 
	 };
	 
	 // funcion principal Main 
int main (){
	
	// Creamos objeto 
	tractor miTractor ("modelo", "apagar","manejar", "transportar"0);
	
	// hacemos un llamado a los metodos creados 
	miTractor.encender();
	miTractor.apagar();
	miTractor.manejar();
	miTractor.transportar();
	 	
	 	return 0;
}