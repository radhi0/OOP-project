#include "TeamBuildUp.h"
#include <iostream>
 
using namespace std;
 
TeamBuildUp::TeamBuildUp(ChoosingModule &_electable_players, FootballLeague &_nba) {
    electable_players = _electable_players;
    nba=_nba;
}
 
void TeamBuildUp::creating_userTeam() {
    string input_1;
    string input_2;
    string input_3;
    int userTeam_index;
    int arrayPostion;
    string userTeam = nba.get_userTeam_name();
    string userTeam_array[4] = {" ", " ", " ", " "};
    int startingSalary= 2000000;
    int remainingSalary= startingSalary;
    string playerPosition
    string playerName;
 
    cout << "Enter X to begin the NBA simulation: ";
    cin >> input_1;
    cout << endl;
 
    if (input_1 == "X") {
        cout << "Starting Salary Capacity: " << startingSalary<< endl << endl;
        for (int i = 0; i < 17; i++) {
            cout << nba.get_Teams()[i].get_teamName() << endl;
        }
        cout << endl;
        cout << "Select the team you wish to manage: ";
        cin >> userTeam;
        nba.set_userTeam_name(userTeam);
        cout << "You have selected " << userTeam << endl << endl;
        while (userTeam_array[0] == " " || userTeam_array[1] == " " || userTeam_array[2] == " " || userTeam_array[3] == " ") {
            cout << "PointGuard, ShootingGuard, SmallForward, PowerForward" << endl << endl;
            cout << "Enter the position of the player out of the above options: ";
            cin >> playerPosition
            cout << endl;
 
            if (playerPosition== "PointGuard") {
                electable_players.printing_possiblePlayers(playerPosition);
                cout << endl;
                cout << "Enter a name of the player: ";
                cin >> playerName;
                //do{
                    cout << "What array position is your player?”
                    cin >> arrayPostion;
                    if(arrayPostion <= 16)
                    {
                        userTeam_array[0] = playerName;
                        cout << endl;
                        for (int i = 0; i < 4; i++) {
                            cout << "[" << userTeam_array[i] << "] ";
                        }
                for (int i = 0; i < 17; i++) {
                    if (playerName == electable_players.get_sf_selection()[i].get_name()) {
                        cout << "what array position is your player?";
                        cin >> arrayPostion;
                        if (arrayPostion >= 0 || arrayPostion <= 16) {
                            userTeam_array[1] = playerName;
                            cout << endl;
                            for (int i = 0; i < 4; i++) {
                                cout << "[" << userTeam_array[i] << "] ";
                            }
                            cout << endl;
                            remainingSalary=  remainingSalary- electable_players.get_sf_selection()[arrayPostion].requiredSalary_for_player();
                            cout << "Remaining Salary: " << remainingSalary<< endl;
                            cout << endl;
                            break;
                        }
 
                        else {
                            cout << "Invalid input. Try again" << endl;
                            break;
                        }
                    }
                    else {
                        cout << "Invalid input. Try again" << endl;
                        break;
                    }
                }
            }
                        cout << endl;
                        remainingSalary=  remainingSalary- electable_players.get_pg_selection()[arrayPostion].requiredSalary_for_player();
                        cout << "Remaining Salary: " << remainingSalary<< endl;
                        cout << endl;
                    }
                    else{
                        break;
                    }
                //}while(playerName == electable_players.printing_possiblePlayers(playerPosition));
 
                else if (playerPosition== "ShootingGuard") {
                electable_players.printing_possiblePlayers(playerPosition);
                cout << endl;
                cout << "Enter the name of the player: ";
                cin >> playerName;
                for (int i = 0; i < 17; i++) {
                    if (playerName == electable_players.get_sf_selection()[i].get_name()) {
                        cout << "what position in array is your player?";
                        cin >> arrayPostion;
                        if (arrayPostion >= 0 || arrayPostion <= 16) {
                            userTeam_array[1] = playerName;
                            cout << endl;
                            for (int i = 0; i < 4; i++) {
                                cout << "[" << userTeam_array[i] << "] ";
                            }
                            cout << endl;
                            remainingSalary=  remainingSalary- electable_players.get_sf_selection()[arrayPostion].requiredSalary_for_player();
                            cout << "Remaining Salary: " << remainingSalary<< endl;
                            cout << endl;
                            break;
                        }
 
                        else {
                            cout << "Invalid input. Try again" << endl;
                        }
                    }
                    else {
                        cout << "Invalid input. Try again" << endl;
                    }
                }
            }
 
            else if (playerPosition== "SmallForward") {
                electable_players.printing_possiblePlayers(playerPosition);
                cout << endl;
                cout << "Enter the name of the player: ";
                cin >> playerName;
                for (int i = 0; i < 17; i++) {
                    if (playerName == electable_players.get_sf_selection()[i].get_name()) {
                        cout << "what position in array is your player?";
                        cin >> arrayPostion;
                        if (arrayPostion >= 0 || arrayPostion <= 16) {
                            userTeam_array[1] = playerName;
                            cout << endl;
                            for (int i = 0; i < 4; i++) {
                                cout << "[" << userTeam_array[i] << "] ";
                            }
                            cout << endl;
                            remainingSalary=  remainingSalary- electable_players.get_sf_selection()[arrayPostion].requiredSalary_for_player();
                            cout << "Remaining Salary: " << remainingSalary<< endl;
                            cout << endl;
                            break;
                        }
 
                        else {
                            cout << "Invalid input. Try again" << endl;
                        }
                    }
                    else {
                        cout << "Invalid input. Try again" << endl;
                    }
                }
                cout << endl;
                remainingSalary=  remainingSalary- electable_players.get_SmallForward_selections()[arrayPostion].requiredSalary_for_player();
                cout << "Remaining Salary: " << remainingSalary<< endl;
                cout << endl;
            }
 
            else if (playerPosition== "PowerForward") {
                electable_players.printing_possiblePlayers(playerPosition);
                cout << endl;
                cout << "Enter the name of the player: ";
                cin >> playerName;
                for (int i = 0; i < 8; i++) {
                    if (playerName == electable_players.get_sf_selection()[i].get_name()) {
                        cout << "what position in array is your player?";
                        cin >> arrayPostion;
                        if (arrayPostion >= 0 || arrayPostion <= 7) {
                            userTeam_array[1] = playerName;
                            cout << endl;
                            for (int i = 0; i < 4; i++) {
                                cout << "[" << userTeam_array[i] << "] ";
                            }
                            cout << endl;
                            remainingSalary=  remainingSalary- electable_players.get_sf_selection()[arrayPostion].requiredSalary_for_player();
                            cout << "Remaining Salary: " << remainingSalary<< endl;
                            cout << endl;
                            break;
                        }
 
                        else {
                            cout << "Invalid input. Try again" << endl;
                        }
                    }
                    else {
                        cout << "Invalid input. Try again" << endl;
                    }
                }
            }
 
            else {
                cout << "Invalid input. Please try again." << endl;
            }
            
            cout << "Congratulations! You have selected your team!" << endl;
        cout << "Are you satisfied with your current players? (Y/N): ";
 
        cin >> input_3;
        //while(input_3 != "Y"){
            if (input_3 == "Y") {
            if (remainingSalary< 0) {
                remainingSalary= 2000000;
                cout << endl;
                cout << "Sorry you have exceeded your salary capacity. Please try again." << endl;
                for (int i = 0; i < 17; i++) {
                    userTeam_array[i] = " ";
                }
                while (userTeam_array[0] == " " || userTeam_array[1] == " " || userTeam_array[2] == " " || userTeam_array[3] == " ") {
                    cout << "PointGuard, ShootingGuard, SmallForward, PowerForward" << endl;
                    cout << "PointGuard, ShootingGuard, SmallForward, PowerForward" << endl << endl;
                    cout << "Enter the position of the player out of the above options: ";
                    cin >> playerPosition
                    cout << endl;
        }
        while (true) {
            cout << "Congratulations! You have selected your team!" << endl;
            cout << "Are you satisfied with your current players? (Y/N): ";
            cin >> input_3;
            if (input_3 == "Y") {
                if (remainingSalary< 0) {
                    remainingSalary= 2000000;
                    cout << endl;
                    cout << "Sorry you have exceeded your salary cap. Please try again." << endl;
                    for (int i = 0; i < 4; i++) {
                        userTeam_array[i] = " ";
                    }
                    while (userTeam_array[0] == " " || userTeam_array[1] == " " || userTeam_array[2] == " " || userTeam_array[3] == " ") {
                        cout << "PointGuard, ShootingGuard, SmallForward, PowerForward" << endl << endl;
                        cout << "Enter the position of the player out of the above options: ";
                        cin >> playerPosition
                        cout << endl;
 
                        if (playerPosition== "PointGuard") {
                            electable_players.printing_possiblePlayers(playerPosition);
                            cout << endl;
                            cout << "Enter the name of the player: ";
                            cin >> playerName;
                            for (int i = 0; i < 17; i++) {
                                if (playerName == electable_players.get_sf_selection()[i].get_name()) {
                                    cout << "what position in array is your player?";
                                    cin >> arrayPostion;
                                    if (arrayPostion >= 0 || arrayPostion <= 16) {
                                        userTeam_array[1] = playerName;
                                        cout << endl;
                                        for (int i = 0; i < 4; i++) {
                                            cout << "[" << userTeam_array[i] << "] ";
                                        }
                                        cout << endl;
                                        remainingSalary=  remainingSalary- electable_players.get_sf_selection()[arrayPostion].requiredSalary_for_player();
                                        cout << "Remaining Salary: " << remainingSalary<< endl;
                                        cout << endl;
                                        break;
                                    }
 
                                    else {
                                        cout << "Invalid input. Try again" << endl;
                                    }
                                }
                                else {
                                    cout << "Invalid input. Try again" << endl;
                                }
                            }
                        }
 
                        else if (playerPosition== "ShootingGuard") {
                            electable_players.printing_possiblePlayers(playerPosition);
                            cout << endl;
                            cout << "Enter the name of the player: ";
                            cin >> playerName;
                            for (int i = 0; i < 17; i++) {
                                if (playerName == electable_players.get_sf_selection()[i].get_name()) {
                                    cout << "what position in array is your player?";
                                    cin >> arrayPostion;
                                    if (arrayPostion >= 0 || arrayPostion <= 16) {
                                        userTeam_array[1] = playerName;
                                        cout << endl;
                                        for (int i = 0; i < 4; i++) {
                                            cout << "[" << userTeam_array[i] << "] ";
                                        }
                                        cout << endl;
                                        remainingSalary=  remainingSalary- electable_players.get_sf_selection()[arrayPostion].requiredSalary_for_player();
                                        cout << "Remaining Salary: " << remainingSalary<< endl;
                                        cout << endl;
                                        break;
                                    }
 
                                    else {
                                        cout << "Invalid input. Try again" << endl;
                                    }
                                }
                                else {
                                    cout << "Invalid input. Try again" << endl;
                                }
                            }
                        }
 
                        else if (playerPosition== "SmallForward") {
                            electable_players.printing_possiblePlayers(playerPosition);
                            cout << endl;
                            cout << "Enter the name of the player: ";
                            cin >> playerName;
                            for (int i = 0; i < 17; i++) {
                                if (playerName == electable_players.get_sf_selection()[i].get_name()) {
                                    cout << "what position in array is your player?";
                                    cin >> arrayPostion;
                                    if (arrayPostion >= 0 || arrayPostion <= 16) {
                                        userTeam_array[1] = playerName;
                                        cout << endl;
                                        for (int i = 0; i < 4; i++) {
                                            cout << "[" << userTeam_array[i] << "] ";
                                        }
                                        cout << endl;
                                        remainingSalary=  remainingSalary- electable_players.get_sf_selection()[arrayPostion].requiredSalary_for_player();
                                        cout << "Remaining Salary: " << remainingSalary<< endl;
                                        cout << endl;
                                        break;
                                    }
 
                                    else {
                                        cout << "Invalid input. Try again" << endl;
                                    }
                                }
                                else {
                                    cout << "Invalid input. Try again" << endl;
                                }
                            }
                        }
 
                        else if (playerPosition== "PowerForward") {
                            electable_players.printing_possiblePlayers(playerPosition);
                            cout << endl;
                            cout << "Enter the name of the player: ";
                            cin >> playerName;
                            for (int i = 0; i < 17; i++) {
                                if (playerName == electable_players.get_sf_selection()[i].get_name()) {
                                    cout << "what position in array is your player?";
                                    cin >> arrayPostion;
                                    if (arrayPostion >= 0 || arrayPostion <= 16) {
                                        userTeam_array[1] = playerName;
                                        cout << endl;
                                        for (int i = 0; i < 4; i++) {
                                            cout << "[" << userTeam_array[i] << "] ";
                                        }
                                        cout << endl;
                                        remainingSalary=  remainingSalary- electable_players.get_sf_selection()[arrayPostion].requiredSalary_for_player();
                                        cout << "Remaining Salary: " << remainingSalary<< endl;
                                        cout << endl;
                                        break;
                                    }
 
                                    else {
                                        cout << "Invalid input. Try again" << endl;
                                    }
                                }
                                else {
                                    cout << "Invalid input. Try again" << endl;
                                }
                            }
                        }
 
                        else {
                            cout << "Invalid input. Please try again." << endl;
                        }
                    }
                }
                else {
                    break;
                }
            }
 
            else if (input_3 == "N") {
                cout << "Select the position of the player you wish to replace: ";
                cin >> playerPosition
                if (playerPosition== "PointGuard") {
                    electable_players.printing_possiblePlayers(playerPosition);
                    cout << "Enter the name of the player: ";
                    for (int i = 0; i < 17; i++) {
                        if (playerName == electable_players.get_sf_selection()[i].get_name()) {
                            cout << "what position in array is your player?";
                            cin >> arrayPostion;
                            if (arrayPostion >= 0 || arrayPostion <= 16) {
                                userTeam_array[1] = playerName;
                                cout << endl;
                                for (int i = 0; i < 4; i++) {
                                    cout << "[" << userTeam_array[i] << "] ";
                                }
                                cout << endl;
                                // remainingSalary+= Something figure it out
                                remainingSalary=  remainingSalary- electable_players.get_sf_selection()[arrayPostion].requiredSalary_for_player();
                                cout << "Remaining Salary: " << remainingSalary<< endl;
                                cout << endl;
                                break;
                            }
                            else {
                                cout << "Invalid input. Try again" << endl;
                            }
                        }
                        remainingSalary=  remainingSalary- electable_players.get_pg_selection()[arrayPostion].requiredSalary_for_player();
                        cout << remaining_salary;
                        cout << "Remaining Salary: " << remainingSalary<< endl;
                        cout << endl;
                    }
 
                    else if (playerPosition== "ShootingGuard") {
                        electable_players.printing_possiblePlayers(playerPosition);
                        cout << endl;
                        cout << "Enter the name of the player: ";
                        cin >> playerName;
                        cout << "what position in array is your player?";
                        cin >> arrayPostion;
                        userTeam_array[1] = playerName;
                        for (int i = 0; i < 4; i++) {
                            cout << "[" << userTeam_array[i] << "] ";
                        }
                        remainingSalary=  remainingSalary- electable_players.get_sf_selection()[arrayPostion].requiredSalary_for_player();
                        cout << "Remaining Salary: " << remainingSalary<< endl;
                        cout << endl;
                    }
                        else {
                            cout << "Invalid input. Try again" << endl;
                        }
                    }
                }
 
                else if (playerPosition== "ShootingGuard") {
                    electable_players.printing_possiblePlayers(playerPosition);
                    cout << "Enter the name of the player: ";
                    cin >> playerName;
                    for (int i = 0; i < 17; i++) {
                        if (playerName == electable_players.get_sf_selection()[i].get_name()) {
                            cout << "what position in array is your player?";
                            cin >> arrayPostion;
                            if (arrayPostion >= 0 || arrayPostion <= 16) {
                                userTeam_array[1] = playerName;
                                cout << endl;
                                for (int i = 0; i < 4; i++) {
                                    cout << "[" << userTeam_array[i] << "] ";
                                }
                                cout << endl;
                                // remainingSalary+= Something figure it out
                                remainingSalary=  remainingSalary- electable_players.get_sf_selection()[arrayPostion].requiredSalary_for_player();
                                cout << "Remaining Salary: " << remainingSalary<< endl;
                                cout << endl;
                                break;
                            }
                            else {
                                cout << "Invalid input. Try again" << endl;
                            }
                        }
 
                        remainingSalary=  remainingSalary- electable_players.get_SmallForward_selections()[arrayPostion].requiredSalary_for_player();
                        cout << "Remaining Salary: " << remainingSalary<< endl;
                        cout << endl;
                    }
 
                        else {
                            cout << "Invalid input. Try again" << endl;
                        }
                    }
                }
 
                else if (playerPosition== "SmallForward") {
                    electable_players.printing_possiblePlayers(playerPosition);
                    cout << "Enter the name of the player: ";
                    cin >> playerName;
                    for (int i = 0; i < 17; i++) {
                        if (playerName == electable_players.get_sf_selection()[i].get_name()) {
                            cout << "what position in array is your player?";
                            cin >> arrayPostion;
                            if (arrayPostion >= 0 || arrayPostion <= 16) {
                                userTeam_array[1] = playerName;
                                cout << endl;
                                for (int i = 0; i < 4; i++) {
                                    cout << "[" << userTeam_array[i] << "] ";
                                }
                                cout << endl;
                                // remainingSalary+= Something figure it out
                                remainingSalary=  remainingSalary- electable_players.get_sf_selection()[arrayPostion].requiredSalary_for_player();
                                cout << "Remaining Salary: " << remainingSalary<< endl;
                                cout << endl;
                                break;
                            }
 
                            else {
                                cout << "Invalid input. Try again" << endl;
                            }
                        }
                        else {
                            cout << "Invalid input. Try again" << endl;
                        }
                    }
                }
                else {
                    break;
                }
            }
 
            else {
                break;
            }
        }
 
        else if (input_3 == "N") {
            cout << "Select the position of the player you wish to replace: ";
            cin >> playerPosition
            if (playerPosition== "PointGuard") {
                electable_players.printing_possiblePlayers(playerPosition);
                cout << "Enter the name of the player: ";
                cin >> playerName;
                userTeam_array[0] = playerName;
                for (int i = 0; i < 4; i++) {
                    cout << userTeam_array[i] << endl;
            else if (input_3 == "N") {
                cout << "Select the position of the player you wish to replace: ";
                cin >> playerPosition
                if (playerPosition== "PointGuard") {
                    electable_players.printing_possiblePlayers(playerPosition);
                    cout << "Enter the name of the player: ";
                    cin >> playerName;
                    userTeam_array[0] = playerName;
                    for (int i = 0; i < 4; i++) {
                        cout << userTeam_array[i] << endl;
                    }
                    //remainingSalary+= current player salary (figure this out)
                    remainingSalary-= electable_players.get_pg_selection()[arrayPostion].requiredSalary_for_player();
                    cout << "Remaining Salary: " << remainingSalary<< endl;
                    cout << endl;
                }
 
                else if (playerPosition== "ShootingGuard") {
                    electable_players.printing_possiblePlayers(playerPosition);
                    cout << "Enter the name of the player: ";
                    cin >> playerName;
                    userTeam_array[1] = playerName;
                    for (int i = 0; i < 4; i++) {
                        cout << userTeam_array[i] << endl;
                    }
                    //remainingSalary+= current player salary (figure this out)
                    remainingSalary- electable_players.get_sf_selection()[arrayPostion].requiredSalary_for_player();
                    cout << "Remaining Salary: " << remainingSalary<< endl;
                    cout << endl;
                }
 
                else if (playerPosition== "SmallForward") {
                    electable_players.printing_possiblePlayers(playerPosition);
                    cout << "Enter the name of the player: ";
                    cin >> playerName;
                    userTeam_array[2] = playerName;
                    for (int i = 0; i < 4; i++) {
                        cout << userTeam_array[i] << endl;
                    }
                    //remainingSalary+= current player salary (figure this out)
                    remainingSalary- electable_players.get_SmallForward_selections()[arrayPostion].requiredSalary_for_player();
                    cout << "Remaining Salary: " << remainingSalary<< endl;
                    cout << endl;
                }
 
                else if (playerPosition== "PowerForward") {
                    electable_players.printing_possiblePlayers(playerPosition);
                    cout << "Enter the name of the player: ";
                    cin >> playerName;
                    for (int i = 0; i < 17; i++) {
                        if (playerName == electable_players.get_sf_selection()[i].get_name()) {
                            cout << "what position in array is your player?";
                            cin >> arrayPostion;
                            if (arrayPostion >= 0 || arrayPostion <= 16) {
                                userTeam_array[1] = playerName;
                                cout << endl;
                                for (int i = 0; i < 4; i++) {
                                    cout << "[" << userTeam_array[i] << "] ";
                                }
                                cout << endl;
                                // remainingSalary+= Something figure it out
                                remainingSalary=  remainingSalary- electable_players.get_sf_selection()[arrayPostion].get_required_player_salary();
                                cout << "Remaining Salary: " << remainingSalary<< endl;
                                cout << endl;
                                break;
                            }
 
                            else {
                                cout << "Invalid input. Try again" << endl;
                            }
                        }
                        else {
                            cout << "Invalid input. Try again" << endl;
                        }
                    }
                }
            }
        }
        //cout << "Are you satisfied with the player Y/N: ";
        //cin >> input_3;
        }
    }
}
