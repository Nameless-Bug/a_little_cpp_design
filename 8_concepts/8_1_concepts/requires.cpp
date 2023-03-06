#include <iostream>
#include <concepts>

class Song{};

class Student{
public:
	Song sing(){
		std::cout << "student sings song" << std::endl;
		Song song = Song();
		return song;
	}
};

class Teacher{
public:
	void sing(){	
		std::cout << "teacher sings" << std::endl;
	}
};


template<typename T>
concept CanSingSongs = requires(T& x){
	{x.sing()} -> std::same_as<Song>;
};


template<typename T>
concept CanSing = requires(T& x){
	{x.sing()} -> std::same_as<void>;
};

int main(){
	CanSingSongs auto s1 = Student();
    // CanSingSongs auto t1 = Teacher();
    std::cout << &s1 << std::endl;
	
    
    // CanSing auto s2 = Student();
    CanSing auto t2 = Teacher();
    std::cout << &t2 << std::endl;

	return 0;
}
