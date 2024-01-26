#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cstdlib>

using namespace std;

class Player{
    private:
        string name;
    public:
        int points, turn, shot, tiles;
};

class Board{
    private:
        int snake, ladder;
    public:
        int tiles, typebox;
};

class Game{
    private:
        string winner, player;
    public:
        int dice, shot, players;
};

class MyGame{
    public:
        int turno, turn, turns, p1, p2, player1, player2, dice, shot, tiles, snakes, ladders, reward, penalty;
        string box;
        string option, type;
        int tablero[31];
        void start(){
            
            cout << "Number of tiles for the board: " << endl;
            cin >> tiles;
            cout << "Number of snakes in the board: " << endl;
            cin >> snakes;
            cout << "Number of ladders in the board: " << endl;
            cin >> ladders;
            cout << "Number of reward for game: " << endl;
            cin >> reward;
            cout << "Number of penalty for game: " << endl;
            cin >> penalty;
            cout << "Number of turns for game: " << endl;
            cin >> turns;
            cout << "Type of game: Press A for automatic game or Press M for manual game: " << endl;
            cin >> type;
            cin.get();


            for (int i=0;i<=tiles;i++)
            {
                tablero[i]=i;
            }

            p1 = 1;
            p2 = 2;
            player1 = 0;
            player2 = 0;
            turno = 1;
            turn = 0;
            shot = 0;

            while(turno==1){
                if(type == "M"){
                    if(turno==1)
                    {
                        cout << "Player " << p1 <<  ": Press C to continue next turn, or E to end the game." << endl;
                        cin >> option;
                        while(!((option == "C" || option == "E"))){
                            cout << "Invalid option, please press C to continue next turn or E to end the game." << endl;
                            cin >> option;
                        }
                        if(option == "C"){
                            cin.get();
                            box = "N";
                            turn = turn+1;
                            dice = (rand()%6)+1;
                            shot = dice;
                            player1 = tablero[player1];
                            player1 = player1 + shot;
                            for(int i=1;i==ladders;i++){
                                i=(rand()%tiles)+1;
                                if(player1 == i){
                                    player1 = player1 + reward;
                                    box = "L";
                                }
                            }
                            for(int i=1;i==snakes;i++){
                                i=(rand()%tiles)+1;
                                if(player1 == i){
                                    player1 = player1 - penalty;
                                    box = "S";
                                }
                            }

                            cout << turn << p1 << dice << box << player1 << endl;
                        }

                        if (option == "E"){
                            if (player1 < player2){
                                cout << " PLAYER 2 WINS " << player2 << endl;
                            }
                            if (player2 < player1){
                                cout<< " Player 1 WINS  " << player1 << endl;
                            }
                            if (player1 == player2){
                                cout << " It's a Tie  " << player1 << " - " << player2 << endl;
                            }
                            cout << " Thanks for playing!!! ";
                            break;
                        }

                        if (player1 >= tiles){
                            cout << " Player 1 is the Winner " << player1 << endl;
                            cout << " **- Game Over -**";
                            break;
                        }

                        turno = 2;
                    }

                    if(turno == 2){
                        cout << "Player " << p2 <<  ": Press C to continue next turn, or E to end the game." << endl;
                        cin >> option;
                        while(!((option == "C" || option == "E"))){
                            cout << "Invalid option, please press C to continue next turn or E to end the game." << endl;
                            cin >> option;
                        }
                        if(option == "C"){
                            cin.get();
                            box = "N";
                            dice = (rand()%6)+1;
                            shot = dice;
                            player2 = tablero[player2];
                            player2 = player2 + shot;
                            for(int i=1;i==ladders;i++){
                                i=(rand()%tiles)+1;
                                if(player2 == i){
                                    player2 = player2 + reward;
                                    box = "L";
                                }
                            }
                            for(int i=1;i==snakes;i++){
                                i=(rand()%tiles)+1;
                                if(player2 == i){
                                    player2 = player2 - penalty;
                                    box = "S";
                                }
                            }

                            cout << turn << p2 << dice << box << player2 << endl;
                        }

                        if (option == "E"){
                            if (player1 < player2){
                                cout << " PLAYER 2 WINS " << player2 << endl;
                            }
                            if (player2 < player1){
                                cout<< " Player 1 WINS  " << player1 << endl;
                            }
                            if (player1 == player2){
                                cout << " It's a Tie  " << player1 << " - " << player2 << endl;
                            }
                            cout << " Thanks for playing!!! ";
                            break;
                        }

                        if (player2 >= tiles){
                            cout << " Player 2 is the Winner " << player2 << endl;
                            cout << " **- Game Over -**";
                            break;
                        }

                        turno = 1;
                    }

                    if (turn == turns){
                        if (player1 < player2){
                            cout << " PLAYER 2 WINS " << player2 << endl;
                        }
                        if (player2 < player1){
                            cout<< " Player 1 WINS  " << player1 << endl;
                        }
                        if (player1 == player2){
                            cout << " It's a Tie  " << player1 << " - " << player2 << endl;
                        }
                        cout << " Thanks for playing!!! ";
                        break;
                    }
                }
            
            
                if(type == "A"){
                    if(turno == 1)
                    {
                        box = "N";
                        turn = turn+1;
                        dice = (rand()%6)+1;
                        shot = dice;
                        player1 = tablero[player1];
                        player1 = player1 + shot;
                        for(int i=1;i==ladders;i++){
                            i=(rand()%tiles)+1;
                            if(player1 == i){
                                player1 = player1 + reward;
                                box = "L";
                            }
                        }
                        for(int i=1;i==snakes;i++){
                            i=(rand()%tiles)+1;
                            if(player1 == i){
                                player1 = player1 - penalty;
                                box = "S";
                            }
                        }

                        cout << turn << p1 << dice << box << player1 << endl;

                        if (player1 >= tiles){
                            cout << " Player 1 is the Winner " << player1 << endl;
                            cout << " **- Game Over -**";
                            break;
                        }

                        turno = 2;
                    }

                    if(turno == 2){
                        box = "N";
                        dice = (rand()%6)+1;
                        shot = dice;
                        player2 = tablero[player2];
                        player2 = player2 + shot;
                        for(int i=1;i==ladders;i++){
                            i=(rand()%tiles)+1;
                            if(player2 == i){
                                player2 = player2 + reward;
                                box = "L";
                            }
                        }
                        for(int i=1;i==snakes;i++){
                            i=(rand()%tiles)+1;
                            if(player2 == i){
                                player2 = player2 - penalty;
                                box = "S";
                            }
                        }
                        cout << turn << p2 << dice << box << player2 << endl;

                        if (player2 >= tiles){
                            cout << " Player 2 is the Winner " << player2 << endl;
                            cout << " **- Game Over -**";
                            break;
                        }

                        turno = 1;
                    }

                    if (turn == turns){
                        if (player1 < player2){
                            cout << " PLAYER 2 WINS " << player2 << endl;
                        }
                        if (player2 < player1){
                            cout<< " Player 1 WINS  " << player1 << endl;
                        }
                        if (player1 == player2){
                            cout << " It's a Tie  " << player1 << " - " << player2 << endl;
                        }
                        cout << " Thanks for playing!!! ";
                        break;
                    }
                }

                if(player1 >= tiles || player2 >= tiles){
                    break;
                }
            }
        }
};

int main()
{
    MyGame g;
    g.start();
    cin.get();
    return 0;
}
