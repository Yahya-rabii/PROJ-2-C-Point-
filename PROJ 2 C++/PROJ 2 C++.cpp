#include <iostream>
#include<iomanip>

#include "Header.h"

using namespace std;




int main()
{

	Point p0(1,2);

	Point p1(4,0);
	
	cout.precision(2);
	
	cout << "p0 = ";
	
	p0.affiche();
	
	cout << "p1 = ";
	
	p1.affiche();
	
	p0.setx(5);
	
	cout <<"Labscisse de p0 est " << p0.getx() << endl;
	
	cout <<"Labscisse de p1 est " << p1.getx() << endl;
	
	cout << endl;



	/* Question 1 */
	
	p1.sety(6);
	cout << "L'ordonnee de p0 est " << p0.gety() << endl;
	cout << "L'ordonnee de p1 est " << p1.gety() << endl;
	cout << endl;
	
	


	/* Question 2 */

	
	Point p2;
	cout << "p2 = ";
	p2.affiche();
	cout << endl;
	
	

	
	/* Question 3 */
	
	Point *p3; // je suis pointeur sur un objet de type Point
	
	p3 = new Point(2,2); // j’alloue dynamiquement un objet de type Point
	
	cout << "p3 = ";
	
	p3->affiche(); // Comme pointC est une adresse, je dois utiliser l’opérateur -> pour accéder aux membres de cet objet
	
	p3->sety(0); // je modifie la valeur de l’attribut y de p3
	
	cout << "p3 = ";
	
	(*p3).affiche(); // cette écriture est possible : je pointe l’objet puis j’appelle sa méthode affiche()
	
	delete p3; // ne pas oublier de libérer la mémoire allouée pour cet objet
	
	cout << endl;
	
	

	/* Question 4 */
	/*
	
      Point tableauDe10Points[10]; // typiquement : les cases d’un tableau de Point
	  int i;
	  cout << "Un tableau de 10 Point : " << endl;
	  for(i = 0; i < 10; i++)
	  {
	  cout << "P" << i << " = "; tableauDe10Points[i].affiche();
	  }
	  cout << endl;
    */




	
	/* Question 4 */
	/*

    int const tailleTableau(10);   //La taille du tableau
	Point tableau[tailleTableau] ; // typiquement : les cases d’un tableau de Point
	


	//cout << "Un tableau de 10 Point : " << endl;
	
	int x;
	double valx(0);
	double valy(0);



	for (x = 0; x < 10; x++)
	{
		cout << "entree la val de x pour P" << x << endl;

		cin >> valx;
		
		cout << "entree la val de Y pour P" << x << endl;

		cin >> valy;

	

		 tableau[x].setx(valx) ;
		 tableau[x].sety(valy);
	}
	cout << endl;
	


	int i;

	cout << "Un tableau de 10 Point : " << endl;
	
	for(i = 0; i < 10; i++)
	{
	cout << "P" << i << " = "; tableau[i].affiche();
	}
	cout << endl;
	
	
	*/



	/* Question 5 */
	
	Point p5(7,8);
	cout << "p5 = ";
	p5.affiche();
	cout << "L'abscisse de p5 est " << p5.getx() << endl;
	cout << "L'ordonnee de p5 est " << p5.gety() << endl;
	
	//p5.setx(5); // essayez quand même !
	



	

	
	/* Question 6 */
	
	double distance = p5.distance(p2);
	cout << "p5 = ";
	p5.affiche();
	cout << "p2 = ";
	p2.affiche();
	cout << "La distance entre p5 et p2 est de " << distance << endl;
	Point pointMilieu = p5.milieu(p2);
	cout << "Le point milieu entre p5 et p2 est "; pointMilieu.affiche();
	return 0;
}