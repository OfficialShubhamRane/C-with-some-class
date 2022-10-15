#include <iostream>
#include <string>

#define CAPACITY 5000

int main() {
	/* Command line input */
	/*
	std::cout << "Hi there! What's you name?" << std::endl;
	
	std::string first_name;
	std::cin >> first_name;

	std::cout << "Welcome " << first_name << "! How can I help you?" << std::endl;
	*/

	/* Variables declartion and initialization */
	/*
	int a;
	int b;
	a = b = 5;
	bool flag = false;
	std::cout << "a :" << a << std::endl;
	std::cout << "b :" << b << std::endl;
	std::cout << "flag :" << !flag << std::endl;

	auto c = 9999999999;
	auto flag_b = false;

	std::cout << c << std::endl;
	std::cout << flag_b << std::endl;

	std::cout << typeid(c).name() << std::endl;
	std::cout << typeid(flag_b).name() << std::endl;
	*/

	/* Arrays */
	/*
	unsigned short names[5];

	names[1] = 20;
	names[2] = 10;
	names[3] = 5;

	std::cout << names[0] << std::endl;
	std::cout << names[1] << std::endl;
	std::cout << names[2] << std::endl;
	std::cout << names[5] << std::endl;
	*/

	/* Type casting */
	/*
	int a = 10;
	float  b = 5.2f;

	// lossless
	//b = a;
	//std::cout << b << std::endl;

	//lossfull
	//a = b;
	//std::cout << a << std::endl;

	int faranheit = 100;
	int celcius = 0;

	celcius = ((float)5 / 9) * (faranheit - 32);

	std::cout << celcius << std::endl;
	*/

	/* calculating average of numbers in array*/

	float numbers[] = {20.2,25.7,37.1,71.25,55.55};
	float sum = 0;
	
	std::cout << sizeof(numbers) / sizeof(int) << std::endl;

	for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) {
		
		sum += numbers[i];
	}

	std::cout << sum / sizeof(numbers) << std::endl;

	return(0);
}