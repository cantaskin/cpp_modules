#include "mutantstack.hpp"


int main()
{
		std::cout << "*******************|Test the Stack using INT|********************\n";
	{
		MutantStack<int> mstack;
		mstack.push(77);
		mstack.push(17);
		std::cout << "-------------------|print The first element of the stack|--------------------\n";
		std::cout << mstack.top() << "\n";
		mstack.pop();
		std::cout << "-------------------|print The Size of the stack|--------------------\n";
		std::cout << mstack.size() << "\n";
		mstack.push(69);
		mstack.push(3);
		mstack.push(777);
		mstack.push(7);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end() - 1;
		std::cout << "-------------------|print bigin and end of stack using iterators|--------------------\n";
		std::cout << "begin " << *it << "\n";
		std::cout << "end " << *ite << "\n"; // this will print the last element in the stack
		std::cout << "-------------------|Test if ++ work with iterator|--------------------\n";
		++it;
		std::cout << "begin " << *it << "\n";
		std::cout << "end " << *ite << "\n";
		std::cout << "-------------------|Test if -- work with iterator|--------------------\n";
		--it;
		std::cout << "begin " << *it << "\n";
		std::cout << "end " << *ite << "\n";
		std::cout << "-------------------|print The Content of the stack Using iterators|--------------------\n";
		while (it != ite)
		{
			std::cout << *it << "\n";
			++it;
		}
		std::cout << "-------------------|print The Size of the stack|--------------------\n";
		std::cout << mstack.size() << "\n";
		std::stack<int> s(mstack);
	}
		std::cout << "*******************|Test the Stack using string|********************\n";
	{
		MutantStack<std::string> mstack;
		mstack.push("Can");
		mstack.push("Taskin");
		std::cout << "-------------------|print The first element of the stack|--------------------\n";
		std::cout << mstack.top() << "\n";
		mstack.pop();
		std::cout << "-------------------|print The Size of the stack|--------------------\n";
		std::cout << mstack.size() << "\n";
		mstack.push("Can");
		mstack.push("77");
		mstack.push("Intra");
		mstack.push("CPP-Moudle-08");
		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end() - 1;
		std::cout << "-------------------|print bigin and end of stack using iterators|--------------------\n";
		std::cout << "begin " << *it << "\n";
		std::cout << "end " << *ite << "\n"; // this will print the last element in the stack
		std::cout << "-------------------|Test if ++ work with iterator|--------------------\n";
		++it;
		std::cout << "begin " << *it << "\n";
		std::cout << "end " << *ite << "\n";
		std::cout << "-------------------|Test if -- work with iterator|--------------------\n";
		--it;
		std::cout << "begin " << *it << "\n";
		std::cout << "end " << *ite << "\n";
		std::cout << "-------------------|print The Content of the stack Using iterators|--------------------\n";
		while (it != ite)
		{
			std::cout << *it << "\n";
			++it;
		}
		std::cout << "-------------------|print The Size of the stack|--------------------\n";
		std::cout << mstack.size() << "\n";
		std::stack<std::string> s(mstack);
	}
	return 0;
}
