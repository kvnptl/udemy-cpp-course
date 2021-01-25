/******************************************************************
 * Section 13 Challenge
 * Movies.h
 * 
 * Models a collection of Movies as a std::vector
 * 
 * ***************************************************************/
#include <iostream>
#include "Movies.h"

 /*************************************************************************
    Movies no-args constructor
**************************************************************************/
Movies::Movies() {
}

/*************************************************************************
    Movies destructor
**************************************************************************/
Movies::~Movies() {
}

  /*************************************************************************
    add_movie expects the name of the move, rating and watched count
    
    It will search the movies vector to see if a movie object already exists
    with the same name. 
    
    If it does then return false since the movie already exists
    Otherwise, create a movie object from the provided information
    and add that movie object to the movies vector and return true
    *********************************************************************/
bool Movies::add_movie(std::string name, std::string rating, int watched) {
    // you implement this method
    for (auto m:movies){
        if (m.get_name() == name){
            std::cout << name << " already in list" << std::endl;
            return false;
        }
    }
    Movie temp {name, rating, watched};
    movies.push_back(temp);
    return true;
}

 /*************************************************************************
    increment_watched expects the name of the move to increment the
    watched count
    
    It will search the movies vector to see if a movie object already exists
    with the same name. 
    If it does then increment that objects watched by 1 and return true.

    Otherwise, return false since then no movies object with the movie name
    provided exists to increment
    *********************************************************************/
bool Movies::increment_watched(std::string name) {
   // you implement this method
   for (auto m:movies){
       if (m.get_name() == name){
           int num = m.get_watched();
           m.set_watched(num++);
       }
   }
   return false;
}

/*************************************************************************
    display
    
    display all the movie objects in the movies vector.
    for each movie call the movie.display method so the movie
    object displays itself
    *********************************************************************/
void Movies::display() const {
   // You implement this method   
   int check {0};
   for (auto i:movies){
       std::cout << i.get_name() << std::endl;
       check =1;
   }
   if (check != 1){
       std::cout << "No movies in the list" << std::endl;
   }
       
       
}