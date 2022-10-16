#ifndef NBA_h
#define NBA_h

#include "UltimateTeam.h"
#include "ChoosingModule.h"
#include <string>

using namespace std;

class NBA {
private:
    UltimateTeam* NBA_teams;
    string selectedTeam_by_user;
    int userTeam_index;
    
public:
    NBA();
    void input_teams(ChoosingModule &players_availabe);
    void set_Userteam_name(string teamName);
    string get_userTeam_name();
    int get_userTeam_index();
    UltimateTeam get_Team(string teamName);
    UltimateTeam* get_Teams();
    void set_smallforward(string name);
    ~NBA();
};

#endif
