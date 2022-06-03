
#ifndef RATING_H
#define RATING_H

#include <string>

/**
 * class Rating
 *
 */

class Rating
{
public:
  // Constructors/Destructors
  //

  Rating()
  {
  }

  ~Rating()
  {
  }

  void setScore(int value)
  {
    score = value;
  }

  int getScore()
  {
    return score;
  }

  Rating(int score)
  {
    setScore(score);
  }

private:
  // Private attributes
  //

  int score;
};

#endif // RATING_H
