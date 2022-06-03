
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

  ShowProductsSoldout()
  {
  }

  ~ShowProductsSoldout()
  {
  }

  ShowProductsSoldout(User *user)
  {
    ui.print(user->listProductsSoldOut());
  }

  void setUser(User *value)
  {
    user = value;
  }

  User *getUser()
  {
    return user;
  }

  void setUi(ShowProductsSoldoutUI value)
  {
    ui = value;
  }

  ShowProductsSoldoutUI getUi()
  {
    return ui;
  }

private:
  // Private attributes
  //

  User *user;
  ShowProductsSoldoutUI ui;
};

#endif // SHOWPRODUCTSSOLDOUT_H
