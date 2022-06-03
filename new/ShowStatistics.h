
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
    ShowStatistics()
    {
    }

    ~ShowStatistics()

    {
    }

    ShowStatistics(User* user)
    {
        ui.print(user->listProductsSelling());
    }

    void setUser(User* value)
    {
        user = value;
    }

    User* getUser()
    {
        return user;
    }

    void setUi(ShowStatisticsUI value)
    {
        ui = value;
    }

    ShowStatisticsUI getUi()
    {
        return ui;
    }

private:
    // Private attributes
    //

    User* user;
    ShowStatisticsUI ui;
};

#endif // SHOWSTATISTICS_H
