
#ifndef SHOWSTATISTICS_H
#define SHOWSTATISTICS_H

#include <string>
#include "User.h"
#include "ShowStatisticsUI.h"


/**
  * class ShowStatistics
  * 
  */

class ShowStatistics
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ShowStatistics();

  /**
   * Empty Destructor
   */
  virtual ~ShowStatistics();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @param  user
   */
   ShowStatistics(User* user)
  {
      ShowStatisticsUI::print(user->listProductsSelling());
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

  User* user;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of user
   * @param value the new value of user
   */
  void setUser(User* value)
  {
    user = value;
  }

  /**
   * Get the value of user
   * @return the value of user
   */
  User* getUser()
  {
    return user;
  }

  void initAttributes();

};

#endif // SHOWSTATISTICS_H
