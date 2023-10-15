#include<iostream>
#include<vector>
#include<set>
#include<list>
#include<string>

template<class T>
void print_container(const T& container)
{
	for (auto it = container.begin(); it != container.end(); ++it)
		std::cout << *it << ", ";
	std::cout << "\n";
}

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "\nПечать контейнера sdt::set: ";
	std::set<std::string> test_set = { "one","two","three","four" };
	print_container(test_set);

	std::cout << "\nПечать контейнера sdt::list: ";
	std::list<std::string> test_list = { "one","two","three","four" };
	print_container(test_list);

	std::cout << "\nПечать контейнера sdt::vector: ";
	std::vector<std::string> test_vector = { "one","two","three","four" };
	print_container(test_vector);

	return 0;
}