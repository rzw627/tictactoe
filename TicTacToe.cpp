#include <iostream>

#include <limits>

#include <ctime>

using namespace std;

void showTitle();                           // . . . . . . . . . Shows the title of the game
void showGameboard();                       // . . . . . . . . . Shows the game board
void disclaimer();                          // . . . . . . . . . Tips for playing
void _x_();                                 // . . . . . . . . . Handles the moves for X
void _0_();                                 // . . . . . . . . . Handles the moves for 0
void resetTheGame();                        // . . . . . . . . . It resets the gameboard to look like in the beginning
void score();                               // . . . . . . . . . Displays the score after each round
bool winX();                                // . . . . . . . . . Checks if X has won
bool win0();                                // . . . . . . . . . Checks if 0 has won
bool tie();                                 // . . . . . . . . . Checks for tie

char gameBoard[]
{
    '1',
    '2',
    '3',
    '4',
    '5',
    '6',
    '7',
    '8',
    '9'
};

int scoreX = 0, score0 = 0;
int roundCounter;
int squareX, square0;

int main()
{
    showTitle();
    disclaimer();
    while (true)
    {
        roundCounter = 1;
        do
        {
            if (roundCounter % 2 == 0)
            {
                _0_();
            }
            else
            {
                _x_();
            }
        } while (!winX() && !win0() && !tie());
        if (winX())
            scoreX++;
        else if (win0())
            score0++;
        else if (tie())
            cout << "                                                     TIE :>" << endl << endl;
        score();
        resetTheGame();
        showGameboard();
    }
    return 0;
}

void showTitle()
{
    cout << "                                                   ***  Tic ~ Tac ~ Toe  ***" << endl << endl;
}

void showGameboard()
{
    cout << "                                                        |       |" << endl;
    cout << "                                                    " << gameBoard[0] << "   |   " << gameBoard[1] << "   |   " << gameBoard[2] << endl;
    cout << "                                                        |       |" << endl;
    cout << "                                                 -------+-------+-------" << endl;
    cout << "                                                        |       |" << endl;
    cout << "                                                    " << gameBoard[3] << "   |   " << gameBoard[4] << "   |   " << gameBoard[5] << endl;
    cout << "                                                        |       |" << endl;
    cout << "                                                 -------+-------+-------" << endl;
    cout << "                                                        |       |" << endl;
    cout << "                                                    " << gameBoard[6] << "   |   " << gameBoard[7] << "   |   " << gameBoard[8] << endl;
    cout << "                                                        |       |" << endl;
    cout << endl;
}

void disclaimer()
{
    cout << "                               * TO PLAY CHOOSE A NUMBER FROM 1 TO 9 WHERE TO PUT X OR 0 *" << endl << endl;
    cout << "      * IF YOU CHOOSE ANY NUMBER BUT 9 YOU WILL BE ASKED TO CHOOSE A NUMBER UNTIL YOU CHOOSE A NUMBER FROM 1 TO 9 *" << endl << endl;
    cout << "                                               * X BEGINS EVERY ROUND *" << endl << endl;
    showGameboard();
}

void _x_()
{
    cout << "                                                   X: ";
    cin >> squareX;
    cout << endl;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << "                                               X: ";
        cin >> squareX;
        cout << endl;
    }

    switch (squareX)
    {
    case 1:
        if (gameBoard[0] == 'X' || gameBoard[0] == '0')
        {
            cout << "                                           " << squareX << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _x_();
        }
        else
        {
            gameBoard[0] = 'X';
            showGameboard();
            roundCounter++;
        }

        break;
    case 2:
        if (gameBoard[1] == 'X' || gameBoard[1] == '0')
        {
            cout << "                                           " << squareX << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _x_();
        }
        else
        {
            gameBoard[1] = 'X';
            showGameboard();
            roundCounter++;
        }

        break;
    case 3:
        if (gameBoard[2] == 'X' || gameBoard[2] == '0')
        {
            cout << "                                           " << squareX << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _x_();
        }
        else
        {
            gameBoard[2] = 'X';
            showGameboard();
            roundCounter++;
        }

        break;
    case 4:
        if (gameBoard[3] == 'X' || gameBoard[3] == '0')
        {
            cout << "                                           " << squareX << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _x_();
        }
        else
        {
            gameBoard[3] = 'X';
            showGameboard();
            roundCounter++;
        }

        break;
    case 5:
        if (gameBoard[4] == 'X' || gameBoard[4] == '0')
        {
            cout << "                                           " << squareX << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _x_();
        }
        else
        {
            gameBoard[4] = 'X';
            showGameboard();
            roundCounter++;
        }

        break;
    case 6:
        if (gameBoard[5] == 'X' || gameBoard[5] == '0')
        {
            cout << "                                           " << squareX << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _x_();
        }
        else
        {
            gameBoard[5] = 'X';
            showGameboard();
            roundCounter++;
        }

        break;
    case 7:
        if (gameBoard[6] == 'X' || gameBoard[6] == '0')
        {
            cout << "                                           " << squareX << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _x_();
        }
        else
        {
            gameBoard[6] = 'X';
            showGameboard();
            roundCounter++;
        }

        break;
    case 8:
        if (gameBoard[7] == 'X' || gameBoard[7] == '0')
        {
            cout << "                                           " << squareX << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _x_();
        }
        else
        {
            gameBoard[7] = 'X';
            showGameboard();
            roundCounter++;
        }

        break;
    case 9:
        if (gameBoard[8] == 'X' || gameBoard[8] == '0')
        {
            cout << "                                           " << squareX << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _x_();
        }
        else
        {
            gameBoard[8] = 'X';
            showGameboard();
            roundCounter++;
        }

        break;
    default:
        cout << "                                           CHOOSE A NUMBER FROM 1 TO 9: " << endl << endl;
        showGameboard();
        _x_();
    }
}

void _0_()
{
    cout << "                                                   0: ";
    cin >> square0;
    cout << endl;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << "                                               0: ";
        cin >> square0;
        cout << endl;
    }

    switch (square0)
    {
    case 1:
        if (gameBoard[0] == 'X' || gameBoard[0] == '0')
        {
            cout << "                                           " << square0 << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _0_();
        }
        else
        {
            gameBoard[0] = '0';
            showGameboard();
            roundCounter++;
        }

        break;
    case 2:
        if (gameBoard[1] == 'X' || gameBoard[1] == '0')
        {
            cout << "                                           " << square0 << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _0_();
        }
        else
        {
            gameBoard[1] = '0';
            showGameboard();
            roundCounter++;
        }

        break;
    case 3:
        if (gameBoard[2] == 'X' || gameBoard[2] == '0')
        {
            cout << "                                           " << square0 << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _0_();
        }
        else
        {
            gameBoard[2] = '0';
            showGameboard();
            roundCounter++;
        }

        break;
    case 4:
        if (gameBoard[3] == 'X' || gameBoard[3] == '0')
        {
            cout << "                                           " << square0 << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _0_();
        }
        else
        {
            gameBoard[3] = '0';
            showGameboard();
            roundCounter++;
        }

        break;
    case 5:
        if (gameBoard[4] == 'X' || gameBoard[4] == '0')
        {
            cout << "                                           " << square0 << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _0_();
        }
        else
        {
            gameBoard[4] = '0';
            showGameboard();
            roundCounter++;
        }

        break;
    case 6:
        if (gameBoard[5] == 'X' || gameBoard[5] == '0')
        {
            cout << "                                           " << square0 << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _0_();
        }
        else
        {
            gameBoard[5] = '0';
            showGameboard();
            roundCounter++;
        }

        break;
    case 7:
        if (gameBoard[6] == 'X' || gameBoard[6] == '0')
        {
            cout << "                                           " << square0 << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _0_();
        }
        else
        {
            gameBoard[6] = '0';
            showGameboard();
            roundCounter++;
        }

        break;
    case 8:
        if (gameBoard[7] == 'X' || gameBoard[7] == '0')
        {
            cout << "                                           " << square0 << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _0_();
        }
        else
        {
            gameBoard[7] = '0';
            showGameboard();
            roundCounter++;
        }

        break;
    case 9:
        if (gameBoard[8] == 'X' || gameBoard[8] == '0')
        {
            cout << "                                           " << square0 << " NOT FREE, CHOOSE A FREE SPOT!" << endl << endl;
            showGameboard();
            _0_();
        }
        else
        {
            gameBoard[8] = '0';
            showGameboard();
            roundCounter++;
        }

        break;
    default:
        cout << "                                           CHOOSE A NUMBER FROM 1 TO 9: " << endl << endl;
        showGameboard();
        _0_();
    }
}

void resetTheGame()
{
    gameBoard[0] = '1';
    gameBoard[1] = '2';
    gameBoard[2] = '3';
    gameBoard[3] = '4';
    gameBoard[4] = '5';
    gameBoard[5] = '6';
    gameBoard[6] = '7';
    gameBoard[7] = '8';
    gameBoard[8] = '9';
}

void score()
{
    cout << "                                                 SCORE (X - 0) : " << scoreX << " - " << score0 << endl << endl;
}

bool winX()
{
    if (gameBoard[1] == 'X' && gameBoard[4] == 'X' && gameBoard[7] == 'X')
        return true;
    else if (gameBoard[0] == 'X' && gameBoard[4] == 'X' && gameBoard[8] == 'X')
        return true;
    else if (gameBoard[0] == 'X' && gameBoard[3] == 'X' && gameBoard[6] == 'X')
        return true;
    else if (gameBoard[2] == 'X' && gameBoard[4] == 'X' && gameBoard[6] == 'X')
        return true;
    else if (gameBoard[0] == 'X' && gameBoard[1] == 'X' && gameBoard[2] == 'X')
        return true;
    else if (gameBoard[3] == 'X' && gameBoard[4] == 'X' && gameBoard[5] == 'X')
        return true;
    else if (gameBoard[6] == 'X' && gameBoard[7] == 'X' && gameBoard[8] == 'X')
        return true;
    else if (gameBoard[2] == 'X' && gameBoard[5] == 'X' && gameBoard[8] == 'X')
        return true;
    else
        return false;
}

bool win0()
{
    if (gameBoard[1] == '0' && gameBoard[4] == '0' && gameBoard[7] == '0')
        return true;
    else if (gameBoard[0] == '0' && gameBoard[4] == '0' && gameBoard[8] == '0')
        return true;
    else if (gameBoard[0] == '0' && gameBoard[3] == '0' && gameBoard[6] == '0')
        return true;
    else if (gameBoard[2] == '0' && gameBoard[4] == '0' && gameBoard[6] == '0')
        return true;
    else if (gameBoard[0] == '0' && gameBoard[1] == '0' && gameBoard[2] == '0')
        return true;
    else if (gameBoard[3] == '0' && gameBoard[4] == '0' && gameBoard[5] == '0')
        return true;
    else if (gameBoard[6] == '0' && gameBoard[7] == '0' && gameBoard[8] == '0')
        return true;
    else if (gameBoard[2] == '0' && gameBoard[5] == '0' && gameBoard[8] == '0')
        return true;
    else
        return false;
}

bool tie()
{
    if (!winX() && !win0() && roundCounter == 10)
        return true;
    else
        return false;
}