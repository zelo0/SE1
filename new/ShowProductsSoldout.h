
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
    vector<Product*> productList =  user->listProductsSoldOut();
    ui.print(productList);
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

  ShowProductsSoldoutUI ui;
};

#endif // SHOWPRODUCTSSOLDOUT_H
