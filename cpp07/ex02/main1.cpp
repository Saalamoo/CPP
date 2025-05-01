#include "Array.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#define MAX_VAL 750

// int main()
// {
// 	try
// 	{
// 		// Create an empty array
// 		Array<int> emptyArray;
// 		std::cout << "Empty Array Size: " << emptyArray.size() << std::endl;

// 		// Create an array with 5 elements
// 		Array<int> intArray(5);

// 		// Initialize the elements with values
// 		for (unsigned int i = 0; i < intArray.size(); ++i)
// 		{
// 			intArray[i] = i * 10;
// 		}

// 		// Display the elements
// 		std::cout << "Array Size: " << intArray.size() << std::endl;
// 		std::cout << "Array Elements:" << std::endl;
// 		for (unsigned int i = 0; i < intArray.size(); ++i)
// 		{
// 			std::cout << intArray[i] << " ";
// 		}
// 		std::cout << std::endl;

// 		// Create a copy of the array
// 		Array<int> copyArray;
// 		copyArray = intArray;

// 		// Modify the original array
// 		intArray[2] = 42;

// 		// Display the copy array
// 		std::cout << "Copy Array Size: " << copyArray.size() << std::endl;
// 		std::cout << "Copy Array Elements:" << std::endl;
// 		for (unsigned int i = 0; i < copyArray.size(); ++i)
// 		{
// 			std::cout << copyArray[i] << " ";
// 		}
// 		std::cout << std::endl;
// 		// Attempt to access an out-of-bounds element
// 		std::cout << copyArray[56] << std::endl;
// 	}
// 	catch (const std::exception &ex)
// 	{
// 		std::cerr << "Exception: " << ex.what() << std::endl;
// 	}

// 	return 0;
// }

// int	main()
// {
// 	Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
// 	std::cout << "############################################" << std::endl;
// 	try {
// 		Array<std::string> array;
// 		array[0] = "hello";
// 		std::cout << array[0] << std::endl;
// 	}
// 	catch (std::exception &exp)
// 	{
// 		std::cerr << exp.what() << std::endl;
// 	}
// 	std::cout << "############################################" << std::endl;
// 	try {
// 		Array<int> array(1);
// 		array[0] = 5;
// 		std::cout << array[0] << std::endl;
// 	}
// 	catch (std::exception &exp)
// 	{
// 		std::cerr << exp.what() << std::endl;
// 	}
// 	std::cout << "############################################" << std::endl;
// 	try {
// 		Array<int> array(6);
// 		array[0] = 5;
// 		Array<int> array2(array);
// 		std::cout << array2[0] << std::endl;
// 		array2[0] = 2;
// 		std::cout << array2[0] << std::endl;
// 		std::cout << array[0] << std::endl;
// 	}
// 	catch (std::exception &exp)
// 	{
// 		std::cerr << exp.what() << std::endl;
// 	}
// 	std::cout << "############################################" << std::endl;
// 	try {
// 		Array<int> array(6);
// 		array[0] = 5;
// 		Array<int> array2;
// 		array2 = array;
// 		std::cout << array2[0] << std::endl;
// 		array2[0] = 2;
// 		std::cout << array2[0] << std::endl;
// 		std::cout << array[0] << std::endl;
// 	}
// 	catch (std::exception &exp)
// 	{
// 		std::cerr << exp.what() << std::endl;
// 	}
// }


//////
// #include <iostream>
// #include <Array.hpp>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

/////////////////////////////////////////////

template < typename T >
std::ostream& operator<<( std::ostream& out, const Array<T>& arr ) {
    for ( unsigned int i( 0 ); i < arr.size(); i++ )
        out << arr[i] << " ";
    return out;
}

#define SIZE 10
int main( void )
{
    std::cout << "-----------------------------------------------------" << std::endl;

    Array< float > test;

    Array< int > intArray( SIZE );
    Array< int > intArray2( SIZE - 5 );

    for ( unsigned int i = 0; i < intArray.size(); i++ )
        intArray[i] = i * 2;

    std::cout << "Int Array 1: " << intArray << std::endl;

    intArray2 = intArray;

    std::cout << "int Array 2: " << intArray2 << std::endl;

    try {
        std::cout << "Accessing a valid index: " << intArray[5] << std::endl;
        std::cout << "Accessing an invalid index: " << intArray[SIZE] << std::endl;
    } catch ( Array< int >::OutOfBoundException& e ) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "-----------------------------------------------------" << std::endl;

    return ( 0 );
}