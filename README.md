 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# Project Mayhem
 
 > Authors: [Daniel Birouty](https://github.com/dbirouty), [Alexander Manjarrez](https://github.com/Alexanderman07), [Logan McGuire](https://github.com/BoLTazmania99), [Nate Natividad](https://github.com/nnatividad)
 
 > You will be forming a group of **FOUR** students and working on an interesting project. The project has 4 phases, each one with specific requirements. A list of proposed project ideas that have been successful in previous quarters is listed in the project specifications document on Canvas. You can select an idea from the list, start thinking about the features you will implement, what design patterns can help you implement them, and why. If you want to propose your own original idea, you will have to contact an instructor to discuss the project and obtain written permission before you submit your project proposal (Phase 1). Your project needs to implement at least one design pattern iteratively, which you will have to justify in later phases.The project work should be divided almost equally among team members. You can of course help each other, but it needs to be clear who will be responsible for which features. Additionally, you are expected to follow Scrum patterns, specifically the use of a Scrum (Project) board, Sprints, and Scrum meetings. While Daily Scrums are not required we highly encourage you to practice them.

 
 > ## Expectations
 > * Incorporate **at least one** design pattern
 >   * It is recommended that you include a design pattern that we will teach this session (Composite, Strategy, or Visitor)
 > * Your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
 > * Each member of the group must actively participate in the Github Project board and reviewing commited code.
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group. You will need to hold two scrum/check-in meetings with your lab TA/reader in two different weeks in addition to the final demo.


## Project Description
 > Project Mayhem is a single-player, text based rpg set in UCR. In the game, you play as a student who is tasked with taking down all of the departments and making the BCOE college the best department at UCR. With the help of your mentor, Professor N, you must navigate through UCR and take down students from opposing colleges. 
 >
 > The project that we have chosen is interesting to us because we all enjoy rpg games and we have never done a project around a game before. 
 > 
 > We plan to create the project using C++ and do all of our development using Vim within UCR’s hammer server. On top of that, we will be using Git and GitHub which will allow us to work as a team and collaborate on the development of our project.
 > 
 > The input for the project will be designated keys to interact with the text prompts. As a user of our project, you would be able to create a character to your own liking. The output of the project will be more text prompts that will allow for further input and progression in the game. Our RPG game will feature a campus like setting where the user can progress and “battle” other departments. If given enough time, we would like to go ahead and add visuals and graphics to our final game. 
 > [C++](https://www.cplusplus.com/) , 
 > [VIM](https://www.vim.org/)
 >
 > 
 > 
 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to:
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller actionable development tasks as issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
 > * Schedule two check-ins using Calendly. You need to pick both time slots during your lab on week 8. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members

## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
>
> ![UML Diagram](https://i.imgur.com/TuWFcnb.png)

> **Description**
>The Class Diagram depicts the core classes and features of project mayhem. As an RPG, the game will focus mainly on you, the player. A player will have access to 4 attribute >categories: Luck, Strength, Health, and IQ. These attributes will affect how you engage in combat. Players will be able to level up their attribute points as they progress >through the game. You will have freedom to travel to different areas of the map to progress the story, buy/sell items, or engage in optional content. Your attributes will >determine how you combat the game’s enemies. The foes you face in Project Mayhem will vary in strengths based on their school affiliation. 
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with a reader (using Calendly). Your entire team must be present. This meeting will occur on week 8 but NOT during lab time.
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design pattern(s) did you use? For each pattern you must explain in 4-5 sentences:
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design pattern(s) you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
