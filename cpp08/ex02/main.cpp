#include "MutantStack.hpp"
#include <list>

int	main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << s.top() << std::endl;
		s.pop();
		std::cout << s.top() << std::endl;
	}
	std::cout << "#######################################################" << std::endl;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
		std::cout << s.back() << std::endl;
		s.pop_back();
		std::cout << s.back() << std::endl;
	}
	return 0;
}

// main for MutantStack but better
// int main(void)
// {
// 		MutantStack<int> My_Stack;
// 		My_Stack.push(4);
// 		My_Stack.push(42);
// 		My_Stack.push(25);
// 		My_Stack.push(120);
// 		My_Stack.push(13);
// 		My_Stack.push(21);

// 		std::cout << "Size of stack after push = " << My_Stack.size() << std::endl;
// 		MutantStack<int>::iterator begin_it = My_Stack.begin();
// 		MutantStack<int>::iterator end_it = My_Stack.end();
// 		std::cout << "beginning of My_Stack = " << *begin_it << std::endl;
// 		std::cout << "end of My_Stack = " << *(--end_it) << std::endl;
		
// 		std::cout << "ALL NUMBERS IN THE STACK" << std::endl;
// 		while (begin_it != (end_it + 1))
// 		{
// 			std::cout << *begin_it << std::endl;
// 			begin_it++;
// 		}
		
// 		My_Stack.pop();
// 		My_Stack.pop();
// 		My_Stack.pop();
// 		std::cout << "Size of stack after pop = " << My_Stack.size() << std::endl;

// 		// copy constructor check
// 		MutantStack<int> Another_Stack(My_Stack);
// 		std::cout << "Size of Anther_Stack " << Another_Stack.size() << std::endl;

// 		// assignment operator check
// 		MutantStack<int> StackToAssign;
// 		StackToAssign = My_Stack;
// 		std::cout << "Size of StackToAssign = " << StackToAssign.size() << std::endl;
// }

