
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
  ShowProductsBought()
  {
  }

  ~ShowProductsBought()
  {
  }

  ShowProductsBought(User* user)
  {
    ui.print(user->listProductsBought());
  }

  void setUser(User value)
  {
    user = value;
  }

  User getUser()
  {
    return user;
  }

  void setUi(ShowProductsBoughtUI value)
  {
    ui = value;
  }

  ShowProductsBoughtUI getUi()
  {
    return ui;
  }

private:
  // Private attributes
  //

  User user;
  ShowProductsBoughtUI ui;
};

#endif // SHOWPRODUCTSBOUGHT_H
