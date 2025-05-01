#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	
	// delete j; 
	// delete i;

	// TESTS FOR DEEP COPY vs SHALLOW COPY
	Dog _dog = Dog();
	Cat _cat = Cat();
	Dog dog_copy = _dog;
	Cat cat_copy = _cat;
	
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
	// SHALLOW COPY TEST	
	// WrongCat _wrongcat;
	// WrongCat _wrongcat_copy = _wrongcat;

	return (0);
}



//TESTS FOR MEMORY LEAK
// int n = 4;
// int i = 0;
// const Animal* animal[n];

// while (i < n / 2)
// {
// 	animal[i] = new Dog();
// 	i++;
// }
// while (i < n)
// {
// 	animal[i] = new Cat();
// 	i++;
// }

// i = 0;
// while (i < n)
// {
// 	delete animal[i];
// 	i++;
// }