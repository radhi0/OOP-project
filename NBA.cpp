#include "NBA.h"
#include "ChoosingModule.h"

NBA::NBA(){
    NBA_teams = new UltimateTeam[17];
    selectedTeam_by_user = "";
    userTeam_index = 0;
}

void NBA::input_teams(ChoosingModule &players_availabe){
  
    for (int i = 0; i < 17; i++){
        NBA_teams[i].set_teamMembers(players_availabe.get_pg_selections()[i], players_availabe.get_sf_selections()[i], players_availabe.get_pf_selections()[i], players_availabe.get_sg_selections()[i]);
    }

    NBA_teams[0].set_teamName("Boston Celtics");
    NBA_teams[1].set_teamName("Brooklyn Nets");
    NBA_teams[2].set_teamName("New York Knicks");
    NBA_teams[3].set_teamName("Philadelphia 76ers");
    NBA_teams[4].set_teamName("Toronto Raptors");
    NBA_teams[5].set_teamName("Golden State Warriors");
    NBA_teams[6].set_teamName("Los Angeles Lakers");
    NBA_teams[7].set_teamName("Phoenix Suns");
    NBA_teams[8].set_teamName("Sacramento Kings");
    NBA_teams[9].set_teamName("Chicago Bulls");
    NBA_teams[10].set_teamName("Atlanta Hawks");
    NBA_teams[11].set_teamName("Cleveland Cavaliers");
    NBA_teams[12].set_teamName("Charlotte Hornets");
    NBA_teams[13].set_teamName("Detroit Pistons");
    NBA_teams[14].set_teamName("Miami Heat");
    NBA_teams[15].set_teamName("Indiana Pacers");
    NBA_teams[16].set_teamName("Orlando Magic");
    NBA_teams[17].set_teamName("Milwaukee Bucks");
    NBA_teams[18].set_teamName("Washington Wizards");
    NBA_teams[19].set_teamName("Denver Nuggets");
    NBA_teams[20].set_teamName("Dallas Mavericks");
    NBA_teams[21].set_teamName("Minnesota Timberwolves");
    NBA_teams[22].set_teamName("Houston Rockets");
    NBA_teams[23].set_teamName("Oklahoma City Thunder");
    NBA_teams[24].set_teamName("Memphis Grizzlies");
    NBA_teams[25].set_teamName("Portland Trail Blazers");
    NBA_teams[26].set_teamName("New Orleans Pelicans");
    NBA_teams[27].set_teamName("Utah Jazz");
    NBA_teams[28].set_teamName("San Antonio Spurs");
    NBA_teams[29].set_teamName("LA Clippers");
}


void NBA::set_Userteam_name(string teamName){
    selectedTeam_by_user = teamName;
    for (int i = 0; i < 8; i++){
        if (NBA_teams[i].get_teamName() == teamName){
            userTeam_index = i;
        }
    }
}

UltimateTeam NBA::get_Team(string teamName){
    for (int i = 0; i < 8; i++){
        if (NBA_teams[i].get_teamName() == teamName){
            return NBA_teams[i];
        }
    }
}

UltimateTeam* NBA::get_Teams(){
    return NBA_teams;
}

int NBA::get_userTeam_index() {
    return userTeam_index;
}

void NBA::set_smallforward(string name) {
    
}

string NBA::get_userTeam_name(){return selectedTeam_by_user;}

NBA::~NBA(){
    //delete [] football_league_teams;
}