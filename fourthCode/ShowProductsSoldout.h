
#ifndef SHOWPRODUCTSSOLDOUT_H
#define SHOWPRODUCTSSOLDOUT_H

#include <string>
#include <vector>
#include "User.h"
#include "Product.h"
#include "ShowProductsSoldoutUI.h"
using namespace std;


/**
  * class ShowProductsSoldout
  * 
  */

class ShowProductsSoldout
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ShowProductsSoldout();

  /**
   * Empty Destructor
   */
  virtual ~ShowProductsSoldout();

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
   ShowProductsSoldout(User* user)
  {
    ui.print(user->listProductsSoldOut());
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
  ShowProductsSoldoutUI ui;

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
  void setUi(ShowProductsSoldoutUI value)
  {
    ui = value;
  }

  /**
   * Get the value of ui
   * @return the value of ui
   */
  ShowProductsSoldoutUI getUi()
  {
    return ui;
  }

  void initAttributes();

};

#endif // SHOWPRODUCTSSOLDOUT_H
