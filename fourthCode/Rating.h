
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


  /**
   * Empty Constructor
   */
  Rating();

  /**
   * Empty Destructor
   */
  virtual ~Rating();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of score
   * @param value the new value of score
   */
  void setScore(int value)
  {
    score = value;
  }

  /**
   * Get the value of score
   * @return the value of score
   */
  int getScore()
  {
    return score;
  }

  /**
   * @param  score
   */
   Rating(int score)
  {
    setScore(score);
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

  int score;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  



  void initAttributes();

};

#endif // RATING_H
