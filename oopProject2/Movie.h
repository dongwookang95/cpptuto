/*
Class movie should include:
    1. movie name 
    2. movie rating(G,PG,PG-13,R)
    3. watched - the # of times the movie has been watched
*/
#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

class Movie {
    private:
    std::string name;
    std::string rating{};
    int watched;

    public:
    Movie(std::string name, std::string rating, int watched);
    Movie(const Movie &source); 
    ~Movie();
    void setName(std::string name) {this->name = name; }
    std::string getName() const { return name; }
    
    void setRating(std::string rating) {this->rating = rating; }
    std::string getRating() const { return rating; }
    
    void setWatched(int watched) {this->watched = watched; }
    int getWatched() const { return watched; }
    
    void incrementWatched() { ++watched; }
    
    void display() const;
};

#endif