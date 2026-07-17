#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

std::vector<int> numbers { 3, 2, 1, 4, 5 };   // a vector with five numbers

// an iterator beginning at the beginning of numbers
// in other words, think of it as pointing at the first element, 3, in vector.
auto beginning_iterator { numbers.begin() }; 

// dereference the iterator to access the value its pointing to
std::cout << "The iterator is pointing to: " << *beginning_iterator << '\n';

// print the vector (currently unsorted)
std::cout << "The vector currently looks like this: ";
for (auto number : numbers)
{

	std::cout << number << ' ';

}
std::cout << '\n';

// an iterator pointing one past the last element in numbers, at the moment that is one position past 5.
auto end_iterator { numbers.end() };

// sort it within this range.
std::sort(beginning_iterator, end_iterator);

// dereference the beginning iterator again:
std::cout << "After sorting, the iterator is pointing to: " << *beginning_iterator << '\n';

// print the vector (now sorted)
std::cout << "The vector now looks like this: ";
for (auto number : numbers)
{

	std::cout << number << ' ';

}
std::cout << '\n';

}