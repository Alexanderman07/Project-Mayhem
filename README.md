# Project Mayhem
 
Authors: [Daniel Birouty](https://github.com/dbirouty), [Alexander Manjarrez](https://github.com/Alexanderman07), [Logan McGuire](https://github.com/BoLTazmania99), [Nate Natividad](https://github.com/nnatividad)

 
 > ## Expectations
>  * Incorporate **at least one** design pattern
>    * It is recommended that you include a design pattern that we will teach this session (Composite, Strategy, or Visitor)
>  * Your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
>  * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
>  * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
>  * Each member of the group must actively participate in the Github Project board and reviewing commited code.
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group. You will need to hold two scrum/check-in meetings with your lab TA/reader in two different weeks in addition to the final demo.


## Project Description
  Project Mayhem is a single-player, text based rpg set in UCR. In the game, you play as a student who is tasked with taking down all of the departments and making the BCOE college the best department at UCR. With the help of your mentor, Professor N, you must navigate through UCR and take down students from opposing colleges. 
 
  The project that we have chosen is interesting to us because we all enjoy rpg games and we have never done a project around a game before. 
  
  We plan to create the project using C++ and do all of our development using Vim within UCR’s hammer server. On top of that, we will be using Git and GitHub which will allow us to work as a team and collaborate on the development of our project.
  
  The input for the project will be designated keys to interact with the text prompts. As a user of our project, you would be able to create a character to your own liking. The output of the project will be more text prompts that will allow for further input and progression in the game. Our RPG game will feature a campus like setting where the user can progress and “battle” other departments. If given enough time, we would like to go ahead and add visuals and graphics to our final game. 
  [C++](https://www.cplusplus.com/) , 
  [VIM](https://www.vim.org/)
 
  
  
  ## Phase II
## Class Diagram

 ![UML Diagram](https://i.imgur.com/TuWFcnb.png)

 **Diagram Description:**

The class diagram depicts the core classes and features of Project Mayhem. As an RPG, the game will focus mainly on you, the player. A player will have access to 4 attribute categories: Luck, Strength, Health, and IQ. These attributes will affect how you engage in combat. Players will be able to level up their attribute points as they progress through the game. You will have freedom to travel to different areas of the map to progress the story, buy/sell items, or engage in optional content. Your attributes will determine how you combat the game’s enemies. The foes you face in Project Mayhem will vary in strengths based on their school affiliation. 
 
  ## Phase III
 ## Updated Class Diagram

![UML Diagram](https://i.imgur.com/HRYJVb0.png)

## Design Pattern: 
We chose to implement the composite design pattern for our Enemy classes. We chose this pattern because we are most familiar with this design pattern. The original concept of the “Enemy” seemed to align with the principles of the composite design pattern. This design pattern helped us write better code because it encourages us not to reuse code. 


 
  ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 All the user needs to do to install the game is to hit the run button located at the top right corner of the screen on replit. Users will be prompted to enter in a name, first name or first and last name, and a category type they would like to use for the entirety of the game. During battle, five action options will be given to the player to interact with the game during a battle against a grunt and an enemy boss. After the player's first encounter with an enemy grunt, they will have the option to explore different buildings at UCR and buy items they will need for battle using the '1', '2', '3', '4', and '5' number keys. 
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 > The project was tested using incremental unit tests. These unit tests were made to test the functionality of major functions.
 
