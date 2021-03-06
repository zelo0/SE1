
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
    ui.print(user->listProductsBought());
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
  ShowProductsBoughtUI ui;

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

  /**
   * Set the value of ui
   * @param value the new value of ui
   */
  void setUi(ShowProductsBoughtUI value)
  {
    ui = value;
  }

  /**
   * Get the value of ui
   * @return the value of ui
   */
  ShowProductsBoughtUI getUi()
  {
    return ui;
  }

  void initAttributes();

};

#endif // SHOWPRODUCTSBOUGHT_H
