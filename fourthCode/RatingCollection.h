
#ifndef RATINGCOLLECTION_H
#define RATINGCOLLECTION_H

#include <string>
#include <vector>
#include <cmath>
#include "Rating.h"
using namespace std;

/**
  * class RatingCollection
  * 
  */

class RatingCollection
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  RatingCollection();

  /**
   * Empty Destructor
   */
  virtual ~RatingCollection();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return int
   * @param  ratingScore
   */
  int addRating(int ratingScore)
  {
    takenRating.push_back(new Rating(ratingScore));
    return getAverageRate();
  }


  /**
   * @return int
   */
  int getAverageRate()
  {
    double sum = 0;
    for (size_t i = 0; i < takenRating.size(); i++)
    {
      sum += takenRating[i]->getScore();
    }
    return int(round(sum / takenRating.size()));
  }

protected:
  // Static Protected attributes
  //  

  // Protected attributes
  //  


  // Protected attribute accessor methods
  //  


  // Protected attribute accessor methods
  //

private:
  // Static Private attributes
  //  

  // Private attributes
  //  

  vector<Rating*> takenRating;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of takenRating
   * @param value the new value of takenRating
   */
  void setTakenRating(vector<Rating*> value)
  {
    takenRating = value;
  }

  /**
   * Get the value of takenRating
   * @return the value of takenRating
   */
  vector<Rating*> getTakenRating()
  {
    return takenRating;
  }

  void initAttributes();

};

#endif // RATINGCOLLECTION_H
