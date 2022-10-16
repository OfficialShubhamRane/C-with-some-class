#include <iostream>
#include <string>

#define CAPACITY 5000

/* Classes */
class dog {

private:
	std::string name;
	int age;
	std::string breed;
	bool is_kids_friendly;



public:
	dog(std::string name_i,
		int age_i,
		std::string breed_i,
		bool is_kids_friendly_i) {

		name = name_i;
		age = age_i;
		breed = breed_i;
		is_kids_friendly = is_kids_friendly_i;
	}

	std::string get_name() {
		return name;
	}

	int get_age() {
		return age;
	}

	std::string get_breed() {
		return breed;
	}

	bool get_is_kids_friendly() {
		return is_kids_friendly;
	}

	void set_age(int age_i) {
		age = age_i;
	}

	std::string to_string() {
		return "name: [" + name + "] age: [" + std::to_string(age) + "] breed: [" + breed + "] is_kids_friendly: [" + std::to_string(is_kids_friendly) + "]";
	}
};

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
	/*
	float numbers[] = {20.2,25.7,37.1,71.25,55.55};
	float sum = 0;
	
	std::cout << sizeof(numbers) / sizeof(int) << std::endl;

	for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) {
		
		sum += numbers[i];
	}

	std::cout << sum / sizeof(numbers) << std::endl;
	*/

	/* Structures */
	/*
	enum cow_purpose {
		pet,
		diary
	};

	struct cow {
		std::string name;
		int age;
		unsigned char purpose;
	};

	cow my_cow;
	my_cow.name = "Betsy";
	my_cow.age = 5;
	my_cow.purpose = pet;

	std::cout << my_cow.name << " is " << my_cow.age << " years old and her purpose is " << (int)my_cow.purpose << std::endl;
	*/

	/* classes */
	dog dog("Betsy",5 ,"Labrador",1);
	std::cout << dog.to_string() << std::endl;

	return(0);
}

