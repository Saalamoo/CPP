#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	// CORRECT IMPLEMENTATION OF ABSTRACT CLASSES
	Animal *a_1 = new Cat();
	Animal *a_2 = new Dog();
	
	a_1->makeSound();
	a_2->makeSound();

	delete a_1;
	delete a_2;
	
	// WRONG IMPLEMENTATION OF ABSTARCT CLASSES
	// Animal *_a = new Animal();
	// WrongAnimal *wa_1 = new WrongCat();
	
	Dog basic;
	{
		Dog tmp = basic;
	}
	int n = 4;
	int i = 0;
	const Animal* animal[n];
	while (i < n / 2)
	{
		animal[i] = new Dog();
		std::cout << ">>>             a dog was created" << std::endl;
		i++;
	}
	while (i < n)
	{
		animal[i] = new Cat();
		std::cout << ">>>             a cat was created" << std::endl;
		i++;
	}
	i = 0;
	while (i < n)
	{
		delete animal[i];
		i++;
	}
	// delete _a;
	// delete wa_1;

	return (0);
}
