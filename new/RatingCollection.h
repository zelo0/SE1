
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

  RatingCollection()
  {
  }

  ~RatingCollection()
  {
  }

  int addRating(int ratingScore)
  {
    takenRating.push_back(new Rating(ratingScore));
    return getAverageRate();
  }

  int getAverageRate()
  {
    double sum = 0;
    for (size_t i = 0; i < takenRating.size(); i++)
    {
      sum += takenRating[i]->getScore();
    }
    return int(round(sum / takenRating.size()));
  }

  void setTakenRating(vector<Rating *> value)
  {
    takenRating = value;
  }

  vector<Rating *> getTakenRating()
  {
    return takenRating;
  }

private:
  // Private attributes
  //

  vector<Rating *> takenRating;
};

#endif // RATINGCOLLECTION_H
