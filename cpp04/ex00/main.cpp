#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* _a = new Animal();
	const Animal* a_dog = new Dog();
	const Animal* a_cat = new Cat();
	std::cout << "The type of animal is " << _a->getType() << " " << std::endl;
	std::cout << "The type of animal is " << a_dog->getType() << " " << std::endl;
	std::cout << "The type of animal is " << a_cat->getType() << " " << std::endl;
	_a->makeSound();
	std::cout << "Dog: ";
	a_dog->makeSound();
	std::cout << "Cat: ";
	a_cat->makeSound();

	delete _a;
	delete a_dog;
	delete a_cat;
	
	std::cout << "-------------------" << std::endl;
	
	const WrongAnimal* wrong = new WrongAnimal();
	std::cout << "The type of animal is " << wrong->getType() << std::endl;
	wrong->makeSound();
	delete wrong;
	
	wrong = new WrongCat();
	std::cout << "The type of animal is " << wrong->getType() << std::endl;
	wrong->makeSound();
	delete wrong;
	
	const WrongCat* b = new WrongCat();
	std::cout << "The type of animal is " << b->getType() << std::endl;
	b->makeSound(); //>output mew
	delete b;

	std::cout << "-------------------" << std::endl;

	
	return (0);
}
