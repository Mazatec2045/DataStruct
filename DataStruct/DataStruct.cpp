// Omar Vergara
// 4/20/2024
// Data Struct!

#include <iostream>	
#include <string>

using namespace std; 

struct MovieData
{
	string title;  
	string director; 
	int year; 
	int length; 
};

// prototype 
void displayMovie(MovieData); 

int main()
{
	// Variables 
	MovieData movie1, movie2; 
	
	// Movie1 values
	movie1.title = "War of the Worlds"; 
	movie1.director = "Byron Haskin"; 
	movie1.year = 1953; 
	movie1.length = 88; 

	// Movie2 values 

	movie2.title = "War of the Worlds"; 
	movie2.director = "Stephen Spielberg"; 
	movie2.year = 2005; 
	movie2.length = 118; 

	// display Movie1's Data
	displayMovie(movie1);
	cout << endl; 


	// display movie2's Data
	displayMovie(movie2); 
	return 0; 
}

void displayMovie(MovieData m)
{
	cout << "\nTitle       :" << m.title; 
	cout << "\nDirector    :" << m.director; 
	cout << "\nReleased    :" << m.year; 
	cout << "\nRunning Time:" << m.length; 

}