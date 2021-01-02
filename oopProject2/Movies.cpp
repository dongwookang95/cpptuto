#include <string>
#include <iostream>
#include "Movies.h"

Movies::Movies(){
}
//Movies destructor


Movies::~Movies(){
}

bool addMovie(std::string name, std::string rating, int watched){
    for(const Movie &movie: movies){
        if(movie.getName() == name){
            return false;
        }
    }
    Movie temp {name, rating, watched};
    movies.push_back(temp);
    return true;
};
bool increment_watched(std::string name){
    for(Movie &movie:movies){
        if(movie.getName() == name){
            movie.incrementWatched();
            return true;
        }
    }
    return false;
};

void displayMovie(){
    if(movies.size() == 0){
        std::cout << "Sorry, no movies to display \n"<<std::endl;
    }else{
        std::cout << "\n=======================" << std::endl;
        for (const auto &movie: movies){
            movie.display();
        }
        std::cout << "\n=======================" << std::endl;
    }
}
