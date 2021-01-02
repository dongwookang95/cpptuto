/*
1. Creates movie object. 
2. display
3. add movies
4. check if it is added.
5. check if existing one is checked.
6. increment_wathced.
*/
#include <iostream>
#include "Movies.h"

int main() {
    
    Movies my_movies;
    
    my_movies.displayMovie();
    
    addMovie(my_movies, "Big", "PG-13",2);
    addMovie(my_movies,"Star Wars", "PG",5);
    addMovie(my_movies,"Cinderella", "PG",7);
     
    my_movies.displayMovie();   // Big, Star Wars, Cinderella
    
    addMovie(my_movies,"Cinderella", "PG",7);            // Already exists
    addMovie(my_movies,"Ice Age", "PG",12);              // OK
 
    my_movies.displayMovie();    // Big, Star Wars, Cinderella, Ice Age
    
    increment_watched(my_movies,"Big");                    // OK
    increment_watched(my_movies,"Ice Age");              // OK
    
   my_movies.displayMovie();    // Big and Ice Age watched count incremented by 1
    
    increment_watched(my_movies,"XXX");     // XXX not found

	return 0;
}