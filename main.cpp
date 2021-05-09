template <typename T>
class my_numeric_limits
{
public:
  static const bool is_specialized = false;
};

template <>
class my_numeric_limits<int>
{
public:
  static const bool is_specialized = true;
  static int min() throw() {
    return -2147483648;
  }
  static int max() throw() {
    return 2147483647;
  }
  static const int digits = 31;
};


#include <iostream>
#include <climits>
using namespace std;

int main()
{
	cout << "is_specialized(long double): "
		<< my_numeric_limits<long double>::is_specialized << endl;
	cout << "is_specialized(std::string): "
		<< my_numeric_limits<std::string>::is_specialized << endl;
  cout << "is_specialized(int): "
		<< my_numeric_limits<int>::is_specialized << endl;

  cout << "max(int): "
		<< my_numeric_limits<int>::max() << endl;

  cout << "min(int): "
		<< my_numeric_limits<int>::min() << endl;

	return 0;
}
