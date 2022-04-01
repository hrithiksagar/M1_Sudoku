# Welcome to Requirements!

<h2> This is Improved version of the reference taken from [here](https://www.geeksforgeeks.org/sudoku-backtracking-7/) , this is written by Pradeep Mondal P </h2>

* This code requires C Programming languages and its dependencies to run.
* For testing purpose I have used Unit Testing framework, UNITY and Makefile. 
(installing makefile in macos is not easy, process: install homebrew, and then install make using this command brew install make)
* This code is written in C language and has been tested on MacOS.
* This code requires understanding of Original Sudoku game. please feel free to learn from [here](https://sudoku.com/)

# How is it Helpful?
* Just like physical exercise, your mind need some exercise too. Playing sudoku actually exercises your brain extensively. Here are the amazing benefits of playing Sudoku:

* Improves your memory. Memory and logic work side-by-side when you are playing Sudoku. We use our memory to memorize the numbers, when we use our logic to figure out the next blank.
* Stimulates your mind. It keeps you practicing your logical thinking process when you are solving a puzzle, and eventually improve your number skills.
* Reduces the chances of developing Alzheimers by keeping your brain active.
* Learns to do things quickly. Not only playing Sudoku is interesting but it helps to increase your sense of time. You will learn how to make a decision and take an action with less hesitation.
* Increases your concentration power. Sudoku requires players to think strategically and solve problems creatively. Once you stop playing in the middle of the game, you have to start the whole thinking process, which helps you to develop your concentration power and re-focus skills.
* Feel Happy. Sudoku gives you a sense of accomplishment when you can solve a puzzle, especially the puzzle is a difficult one.

<br>
# SWOT Analysis:

# W and H Questions:
<h2> Who: </h2> 
* This is a very basic game, who ever knows numbers and has little idea of how to play it can play this game.
<br>
<img width="409" alt="Screenshot 2022-03-26 at 1 38 57 PM" src="https://user-images.githubusercontent.com/43140053/160231424-c89c4c8f-24bd-4f41-a060-fad1c177064a.png">
This is how it looks like
<br>
<h2> What:</h2>
* Sudoku is a puzzle game that requires players (Humans) to think strategically and solve problems creatively.

<br>
<h2> When: </h2>
* This can be played anytime using laptop, linux, mac in terminal. 
<br>
<h2> where: </h2>
I have developed this in my mac, IDE: Visual Studio Code of Microsoft. 
<br>
<h2> How:</h2>
* This is build using programming language, C.
* This can take Input from user and output the solution.

# Sample Sudoku game:
<img width="898" alt="Screenshot 2022-03-26 at 2 03 01 PM" src="https://user-images.githubusercontent.com/43140053/160231585-c5bc98a8-fb99-4a89-8666-004e25d3bccc.png">

<br>
<br>

# Detail Requirements

## High-Level Requirements
|ID| Description | Status
|--|--|--|
| HL1 | Contain sample Sudoku program | Implemented
| HL2 | Print the solution if exist | Implemented
| HL3 | Asks the user if they wants to solve new sudoku | Implemented
| HL4 | Solves it and prints the solution if exists | Implemented

## Low-Level Requirements
|ID| Description | Status
|--|--|--|
| LL1 | Sample and User sudoku in main() |Implemented
| LL2 | Call to solvings() | Implemented
| LL3 | Check sudoku using secures() before solving | Implemented
| LL4 | solvings() self call to fill the empty spaces | Implemented
| LL5 | Then print the solution, if exist | Implemented


