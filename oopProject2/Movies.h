#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include <string>
#include "Movie.h"
/*
- create movies object
- ask the movies object to add a movie by providing the movie name, rating and watched count
- ask the movies object to increment the watched count by 1 for a movie given its name
- ask the movies object to display all of its moview

Additionally,
-  if we try to add a movie whose name is already in the moview collection,
    we should display this error to the user
- if we try to increment the watched count for a movie-whose name is not in the
    movies collection we should display this error to the user.
*/
class Movies{
    private:
        std::vector<Movie> movies;
    public:
        Movies();
        ~Movies();
        bool addMovie(std::string name, std::string rating, int watched);
        bool increment_watched(std::string name);
        void displayMovie() const;
};
#endif