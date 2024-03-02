#include <iostream>
#include <string>

using namespace std;

// Declaramos la clase de oviparos de gallina 
class animales  {
	public:
		 //Atributos de la clase 
		 string raza;
		 float tamano; 
		 float peso; 
	 	 string especie; 
		 
		 // constructor para inicializar atributos 
		 animales(string _raza, float _tamano, float _peso, string _especie) {
		 		 
			raza = _raza; 
		 	tamano = tamano; 
		 	peso = peso; 
		 	especie = especie; 
		 	

	/*Imprimimos mensaje para indicar que el objeto que el objeto tractor se creó*/
		 	cout <<"Se creo el objeto tractor"<<endl;
		 	
			 }
			
		/* Destructor se ejecuta cuando se destruye un objeto  de la clase*/
		 ~animales(){
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
	animales miTractor ("modelo",10.5 ,25.5, "transportar");
	
		animales miGranero ("modelo",10.5 ,25.5, "transportar");
		
			animales miPozo ("modelo",10.5 ,25.5, "transportar");
			
				animales miPodadora ("modelo",10.5 ,25.5, "transportar");
	// hacemos un llamado a los metodos creados 
	miTractor.encender();
	
	miGranero.encender();
		miGranero.apagar();
	miPozo.encender();
	miPodadora.encender();

	
		 	return 0;
}