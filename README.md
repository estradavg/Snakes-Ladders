# Snakes and Ladders

["Snakes and Ladders"](https://en.wikipedia.org/wiki/Snakes_and_ladders) consists of a board game, where players have a die to roll and advance the number of the die, if the player lands on *"snake"* it goes back a defined number of positions, and if it lands on a *"ladder"* it advances a defined number of positions. This is repeated until a player reaches the last grid.

## Gameplay

In this version of the game, 2 players compete on a board of **n** desired grid squares. The user is asked to customize the number of ladders **L** and snakes **S**, the reward **R** or penalty **P** points, and the maximum number of turns **T**.

The game asks the user or players to press **“C”** to continue and simulate the game until it ends or the user press **“E”** to end the game.

Each printout shows the *turn*, the *player* (1 or 2), the *die value* (1 to 6), the *type of grid* (“N” (normal grid), “L” and “S”), and the *current grid*.

Example:

    115N5
    426L9

The game ends by showing the winning player and grid where they won.

Example:

    Player 1 is the Winner 31
    **- Game Over -**