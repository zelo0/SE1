
#ifndef SHOWPRODUCTSBOUGHT_H
#define SHOWPRODUCTSBOUGHT_H

#include <string>
#include "User.h"
#include "ShowProductsBoughtUI.h"


/**
  * class ShowProductsBought
  * 
  */

class ShowProductsBought
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ShowProductsBought();

  /**
   * Empty Destructor
   */
  virtual ~ShowProductsBought();

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
   ShowProductsBought(User* user)
  {
    ShowProductsBoughtUI::print(user->listProductsBought());
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

#endif // SHOWPRODUCTSBOUGHT_H
