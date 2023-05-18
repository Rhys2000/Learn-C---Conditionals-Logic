//  main.cpp
//  Conditionals & Logic
//  Created by Rhys Julian-Jones on 5/18/23.

#include <iostream>

int main() {
    
    /*
    - Every program we’ve seen so far has only had one possible path of execution — they all execute line by line, from top to bottom. And every time you run one of those programs, it gives you the same exact result. But it’s the twenty-first century, and we like options!
    - In this lesson, we will explore how programs make decisions by evaluating conditions and introduce logic into our code!
    - We’ll be covering the following concepts:
        > if, else if, and else statements
        > switch statements
        > Relational operators
        > Logical operators
    - So… if you’ve already learned these concepts in another language, go to the next lesson — else, prepare yourself and let’s get started!
    */
    
    /*
    - Before we dive deep into the syntax of the if statement, let’s do a demo! Here, we have coinflip.cpp program that simulates a coin toss:
        > 50% of the time, it’s Heads.
        > 50% of the time, it’s Tails.
    */
    
    // 1. Run the program 5 times to see an if else statement in action! How many times did it go Heads?
    
    // Create a number that's 0 or 1
    srand(time(NULL));
    int coin = rand() % 2;
      
    // If number is 0: Heads, If it is not 0: Tails
    if(coin == 0) {
      std::cout << "Heads\n";
    } else {
        std::cout << "Tails\n";
    }
    
    /*
    - An if statement is used to test an expression for truth and execute some code based on it. Here’s a simple form of the if statement: if (condition) { some code }
    - If the condition is true, then the statements within are executed. Otherwise, the statements are skipped and the program continues on.
        if (flip == 1) {
            std::cout << "Heads\n";
        }
    - The if keyword is followed by a set of parentheses (). Inside the parentheses (), a condition is provided that evaluates to true or false:
        > If the condition evaluates to true, the code inside the curly braces {} executes.
        > If the condition evaluates to false, the code won’t execute.
    - So in the code above, if flip is equal to 1, the program outputs “Heads”; if it does not, then nothing happens and the program continues.
    */
    
    // 1. Inside grade.cpp, write an if statement where if grade > 60 is true, output “Pass”.
    
    int grade = 90;
    if(grade > 60) {
        std::cout << "Pass";
    }
    
    /*
    - When writing conditional statements, sometimes we need to use different types of operators to compare values. These operators are called relational operators.
    - To have a condition, we need relational operators:
        == equal to
        != not equal to
        > greater than
        < less than
        >= greater than or equal to
        <= less than or equal to
    - Relational operators compare the value on the left with the value on the right.
    */
    
    // 1. Change the condition grade > 60 to grade < 60. What do you think will happen?
    // 2. Change the condition grade < 60 to grade != 60. What do you think will happen?
    
    grade = 90;
    if (grade != 60) {
        std::cout << "Pass\n";
    }
    
    /*
    - We can also add an else clause to an if statement to provide code that will only be executed if the condition is false. Here’s a form of an if statement that includes an else clause: if (condition) { do something } else { do something else }
    - If condition is true, statement1 is executed. Then the program skips statement2 and executes any code statements following the if/else clause.
    - If condition is false, statement1 is skipped and statement2 is executed. After statement2 completes, the program executes any code statements following the if/else clause.
        if (coin == 1) {
            std::cout << "Heads\n";
        } else {
            std::cout << "Tails\n";
        }
     - So in the code above, if coin is equal to 1, the program outputs “Heads”; if it does not, then it outputs “Tails”. It’s either or — only one of them will execute!
    */
    
    // 1. Add an else statement that outputs “Fail”.
    
    grade = 59;
    if(grade > 60) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }
    
    /*
    - So what happens if you want more than two possible outcomes? This is where else if comes in! if (condition) { some code } else if (condition) { some code } else { some code }
    - The else if statement always comes after the if statement and before the else statement. The else if statement also takes a condition.
    - And you can have more than one of them! Here’s an example with three of them:
        if (grade == 9) {
            std::cout << "Freshman\n";
        } else if (grade == 10) {
            std::cout << "Sophomore\n";
        } else if (grade == 11) {
            std::cout << "Junior\n";
        } else if (grade == 12) {
            std::cout << "Senior\n";
        } else {
            std::cout << "Super Senior\n";
        }
    */
    
    // 1. In chemistry, pH is a scale used to specify the acidity or basicity of an aqueous solution. Write an if, else if, else statement that: If ph is greater than 7, output “Basic”, If ph is less than 7, output “Acidic”, and If neither, output “Neutral”.
    
    double ph = 4.6;
      
    if(ph > 7) {
        std::cout << "Basic.\n";
    } else if(ph < 7) {
        std::cout << "Acidic.\n";
    } else {
        std::cout << "Neutral.\n";
    }
    
    /*
    - Now that we know how if, else if, else work, we can write programs that have multiple outcomes. Programs with multiple outcomes are so common that C++ provides a special statement for it… the switch statement!
    - A switch statement provides an alternative syntax that is easier to read and write. However, you are going to find these less frequently than if, else if, else in the wild.
    - A switch statement looks like this:
        switch (grade) {
            case 9:
                std::cout << "Freshman\n";
                break;
            case 10:
                std::cout << "Sophomore\n";
                break;
            case 11:
                std::cout << "Junior\n";
                break;
            case 12:
                std::cout << "Senior\n";
                break;
            default:
                std::cout << "Invalid\n";
                break;
        }
    - The switch keyword initiates the statement and is followed by (), which contains the value that each case will compare. In the example, the value or expression of the switch statement is grade. One restriction on this expression is that it must evaluate to an integral type (int, char, short, long, long long, or enum).
    - Inside the block, {}, there are multiple cases.
    - The case keyword checks if the expression matches the specified value that comes after it. The value following the first case is 9. If the value of grade is equal to 9, then the code that follows the : would run.
    - The break keyword tells the computer to exit the block and not execute any more code or check any other cases inside the code block.
    - At the end of each switch statement, there is a default statement. If none of the cases are true, then the code in the default statement will run. It’s essentially the else part.
    - In the code above, suppose grade is equal to 10, then the output would be “Sophomore”.
    - Note: Without the break keyword at the end of each case, the program would execute the code for the first matching case and all subsequent cases, including the default code. This behavior is different from if / else conditional statements which execute only one block of code.
    */
    
    // 1. Inside pokedex.cpp, we have a switch statement! Let’s add 3 more cases right before default: case 7 that outputs “Squirtle”, case 8 that outputs “Wartortle”, and case 9 that outputs “Blastoise”
    
    int number = 9;
    
    switch(number) {
        case 1 :
            std::cout << "Bulbusaur\n";
            break;
        case 2 :
            std::cout << "Ivysaur\n";
            break;
        case 3 :
            std::cout << "Venusaur\n";
            break;
        case 4 :
            std::cout << "Charmander\n";
            break;
        case 5 :
            std::cout << "Charmeleon\n";
            break;
        case 6 :
            std::cout << "Charizard\n";
            break;
        case 7 :
            std::cout << "Squirtle\n";
            break;
        case 8 :
            std::cout << "Wartortle\n";
            break;
        case 9 :
            std::cout << "Blastoise\n";
            break;
        default :
            std::cout << "Unknown\n";
            break;
      }
    
    /*
    - Here are some of the major concepts:
        > An if statement checks a condition and will execute a task if that condition evaluates to true.
        > if / else statements make binary decisions and execute different code blocks based on a provided condition.
        > We can add more conditions using else if statements.
        > Relational operators, including <, >, <=, >=, ==, and != can compare two values.
        > A switch statement can be used to simplify the process of writing multiple else if statements. The break keyword stops the remaining cases from being checked and executed in a switch statement.
    */
    
    // 1. Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system. Write a space.cpp program that helps him keep track of his target weight by: It should ask him what his earth weight is, Ask him to enter a number for the planet he wants to fight on, and It should then compute his weight on the destination planet.
    
    double weight;
    int planet;
    
    std::cout << "Enter your Weight: ";
    std::cin >> weight;
    std::cout << "What Planet will you Fight On: ";
    std::cin >> planet;

    switch(planet) {
        case 1: //Mercury
            weight = weight * 0.38;
            break;
        case 2: //Venus
            weight = weight * 0.91;
            break;
        case 3: //Mars
            weight = weight * 0.38;
            break;
        case 4: //Jupiter
            weight = weight * 2.34;
            break;
        case 5: //Saturn
            weight = weight * 1.06;
            break;
        case 6: //Uranus
            weight = weight * 0.92;
            break;
        case 7: //Neptune
            weight = weight * 1.19;
            break;
        default:
            std::cout << "Planet number not understood.\n";
            break;
      }
      std::cout << "His weight would be " << weight << " pounds.\n";
    
    /*
    - Often, when we are trying to create a control flow for our program, we’ll encounter situations where the logic cannot be satisfied with a single condition.
    - Logical operators are used to combine two or more conditions. They allow programs to make more flexible decisions. The result of the operation of a logical operator is a bool value of either true or false.
    - There are three logical operators that we will cover:
        > &&: the and logical operator
        > ||: the or logical operator
        > !: the not logical operator
    - We will also discuss the order of operations. Let’s get started!
    */
    
    /*
    - The and logical operator is denoted by &&. It returns true if the condition on the left and the condition on the right are both true. Otherwise, it returns false.
    - For instance:
        > ( 1 < 2 && 2 < 3 ) returns true
        > ( 1 < 2 && 2 > 3 ) returns false
    - The keyword and can also be used in the place of &&.
    */
    
    int hunger = true;
    int anger = true;
      
    if(hunger == true && anger == true) {
        std::cout << "Hangry.\n";
    }
    
    /*
    - The or logical operator is denoted by ||. It returns true when the condition on the left is true or the condition on the right is true. Only one of them needs to be true.
    - For instance:
        > ( 1 < 2 || 2 > 3 ) returns true
        > ( 1 > 2 || 2 > 3 ) returns false
    - The keyword or can be used in the place of ||.
    */
    
    // 1. Write the following if statement: If day is equal to 6 or day is equal to 7, then print the word "Weekend".
    
    int day = 6;

    if(day == 6 || day == 7) {
        std::cout << "Weekend.\n";
    }
    
    /*
    - The not logical operator is denoted by !. It reverses the bool outcome of the expression that immediately follows.
    - For instance:
        > ( !true ) returns false
        > ( !false ) returns true
        > ( !(10 < 11) ) returns false
    - The keyword not can be used in the place of !.
    */
    
    // 1. Write the following if statement: If the user is !logged_in, then print the phrase "Try again".
    
    bool logged_in = false;
      
    if(!logged_in) {
        std::cout << "Try again.\n";
    }
    
    /*
    - Awesome! In this mini-lesson, we’ve added more operators to our toolbox:
        > &&: the and logical operator
        > ||: the or logical operator
        > !: the not logical operator
    */
    
    // 1. Write a leap_year.cpp program that: Takes a year as input, Checks to see if the year is a four-digit number, and Displays whether or not the year falls on a leap year.
    // 2. There are 3 criteria that must be taken into account to identify a leap year: If the year can be evenly divided by 4 then it is a leap year, however, If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year, and If that year is evenly divisible by 400, then it is a leap year.
    // 3. Take some time to research and brainstorm before starting to write the code!
    
    int year;
    
    std::cout << "Please Enter a Year: ";
    std::cin >> year;
      
    if(year < 1000 || year > 9999) {
        std::cout << "Invalid Year Entry.\n";
    } else if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        std::cout << year << " is a leap year.\n";
    } else {
        std::cout << year << " is not a leap year.\n";
    }
    
    //Magic 8-Ball Project
    
    /*
    - The Magic 8-Ball is a super popular toy used for fortune-telling or seeking advice, developed in the 1950s!
    - Write a magic8.cpp program that will output a random fortune each time it executes.
    - The answers inside a standard Magic 8-Ball are: It is certain, It is decidedly so, Without a doubt, Yes - definitely, You may rely on it, As I see it, yes, Most likely, Outlook good, Yes, Signs point to yes, Reply hazy, try again, Ask again later, Better not tell you now, Cannot predict now, Concentrate and ask again, Don't count on it, My reply is no, My sources say no, Outlook not so good, Very doubtful.
    */
    
    // 1. Let’s create a skeleton for the program.
    // 2. The first line should be the same across all executions, so let’s output the phrase MAGIC 8-BALL:
    // 3. Similar to the Coin Flip program, we need to generate a random number. C++ has a std::rand() function from cstdlib that generates a random number. So, create an int variable and set it equal to a random number: int answer = std::rand(); And output it in the terminal. Don’t forget to add #include <cstdlib> at the top.
    // 4. There are 20 different text outputs in the official Magic 8-Ball, but let’s write your own. And let’s do 10 of them. So we don’t just want any random number. We want a random number from 0-9. Change your answer to: int answer = std::rand() % 10; The % is the modulo symbol that returns the remainder.
    // 5. If you click Save a bunch of times, you will realize that answer doesn’t change. For our program to work, we need to get a different random number for each execution. To do so, we need to add this line of code before the declaration of answer: srand(time(NULL)); This sets the “seed” of the random number generator.
    // 6. Now is where the fun part comes in! Write an if statement where if answer is equal to 0, your program outputs the phrase It is certain.
    // 7. And now add an else statement for the 10th answer: Very doubtful.
    // 8. And now do the same for the 8 other answers using else ifs.
    
    std::cout << "MAGIC 8-BALL:\n\n";
    
    srand(time(NULL));
    int answer = std::rand() % 10;
    
    switch(answer) {
        case 0:
            std::cout << "It is certain.\n";
            break;
        case 1:
            std::cout << "It is decidely so.\n";
            break;
        case 2:
            std::cout << "Without a doubt.\n";
            break;
        case 3:
            std::cout << "Yes - definitely.\n";
            break;
        case 4:
            std::cout << "You may rely on it.\n";
            break;
        case 5:
            std::cout << "As I see it, yes.\n";
            break;
        case 6:
            std::cout << "Most likely.\n";
            break;
        case 7:
            std::cout << "Outlook good.\n";
            break;
        case 8:
            std::cout << "Yes.\n";
            break;
        case 9:
            std::cout << "Signs point to yes.\n";
            break;
        case 10:
            std::cout << "Reply hazy, try again.\n";
            break;
        case 11:
            std::cout << "Ask again later.\n";
            break;
        case 12:
            std::cout << "Better not tell you now.\n";
            break;
        case 13:
            std::cout << "Cannot predict now.\n";
            break;
        case 14:
            std::cout << "Concentrate and ask again.\n";
            break;
        case 15:
            std::cout << "Don't count on it.\n";
            break;
        case 16:
            std::cout << "My reply is no.\n";
            break;
        case 17:
            std::cout << "My sources say no.\n";
            break;
        case 18:
            std::cout << "Outlook not so good.\n";
            break;
        case 19:
            std::cout << "Very doubtful.\n";
            break;
      }
    
    //Harry Potter sorting Hat Quiz
    
    /*
    - The Hogwarts School of Witchcraft and Wizardry welcomes you! First-year students must go through the annual Sorting Ceremony. The Sorting Hat is a talking hat at Hogwarts that magically determines which of the four school Houses each new student belongs most to: gryffindor, hufflepuff, ravenclaw, slytherin
    - Write a sortinghat.cpp program that asks the user some questions and places them into one of the four Houses based on their answers!
    */
    
    // 1. First things first, let’s create a skeleton for the program:
    // 2. Every time the Muggle-born quiz taker answers a question, they should receive points to one or more Houses. Let’s declare four int variables: gryffindor, hufflepuff, ravenclaw, and slytherin And initialize them each to 0.
    // 3. Let’s declare another four int variables to store each of their answers to the four quiz questions: answer1, answer2, answer3, and answer4
    // 4. Let’s add a std::cout statement that tells the Muggle that they have started the quiz with the phrase The Sorting Hat Quiz!.
    // 5. Before moving on, press Save and let’s compile and execute using the terminal to make sure there are no bugs.
    // 6. And now comes the first question! Use multiple std::cout statements to display the following question: Q1) When I'm dead, I want people to remember me as: 1) The Good 2) The Great 3) The Wise 4) The Bold
    // 7. Then use std::cin to receive an input from the user. Store that input in answer1.
    // 8. Merlin’s beard! We have the user’s answer but now we need… conditionals & logic. Write a control flow that: If answer1 == 1, add one point to hufflepuff. Else if answer1 == 2, add one point to slytherin. Else if answer1 == 3, add one point to ravenclaw. Else if answer1 == 4, add one point to gryffindor. Else, output Invalid input.
    // 9. Compile and execute using the terminal. Make sure to debug.
    // 10. And now do the same thing for question 2: Q2) Dawn or Dusk? 1) Dawn 2) Dusk And use std::cin to get user’s input and store it in answer2.
    // 11. However, for this question: If answer2 == 1, one point to both gryffindor and ravenclaw. Else if answer2 == 2, one point to both hufflepuff and slytherin. Else, output the phrase Invalid input.
    // 12. Do the same thing for question 3: Q3) Which kind of instrument most pleases your ear? 1) The violin 2) The trumpet 3) The piano 4) The drum
    // 13. For this question: If answer3 == 1, add one to slytherin. Else if answer3 == 2, add one to hufflepuff. Else if answer3 == 3, add one to ravenclaw. Else if answer3 == 4, add one to gryffindor. Else, output Invalid input.
    // 14. Do the same thing for question 4: Q4) Which road tempts you most? 1) The wide, sunny grassy lane 2) The narrow, dark, lantern-lit alley 3) The twisting, leaf-strewn path through woods 4) The cobbled street lined (ancient buildings)
    // 15. For this question: If answer4 == 1, add one to hufflepuff. Else if answer4 == 2, add one to slytherin. Else if answer4 == 3, add one to gryffindor. Else if answer4 == 4, add one to ravenclaw. Else, output Invalid input.
    // 16. Now we need to find out which of the four Houses has the highest answer! We will need another variable called max that starts at 0 and an empty string with: std::string house; And to find the maximum: : if (gryffindor > max) { max = gryffindor; house = "Gryffindor"; } if (hufflepuff > max) { max = hufflepuff; house = "Hufflepuff"; } if (ravenclaw > max) { max = ravenclaw; house = "Ravenclaw"; } if (slytherin > max) { max = slytherin; house = "Slytherin"; } std::cout << house << "!\n"; This also outputs the House.
    
    int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
    int answer1, answer2, answer3, answer4;
    int max = 0;
    std::string house;
      
    std::cout << "The Sorting Hat Quiz!\n";
    std::cout << "\nQ1) When I'm dead, I want people to remember me as:\n";
    std::cout << "\t1) The Good\n\t2) The Great\n\t3) The Wise\n\t4) The Bold\n";
    std::cout << "Response: ";
    std::cin >> answer1;

    if(answer1 == 1) {
        hufflepuff++;
    } else if(answer1 == 2) {
        slytherin++;
    } else if(answer1 == 3) {
        ravenclaw++;
    } else if(answer1 == 4) {
        gryffindor++;
    } else {
        std::cout << "Invalid input.\n";
    }

    std::cout << "\nQ2) Dawn or Dusk?\n";
    std::cout << "\t1) Dawn\n\t2) Dusk\n";
    std::cout << "Response: ";
    std::cin >> answer2;

    if(answer2 == 1) {
        gryffindor++;
        ravenclaw++;
    } else if(answer2 == 2) {
        hufflepuff++;
        slytherin++;
    } else {
        std::cout << "Invalid input.\n";
    }

    std::cout << "\nQ3) Which kind of instrument most pleases your ear?\n";
    std::cout << "\t1) The violin\n\t2) The trumpet\n\t3) The piano\n\t4) The drum\n";
    std::cout << "Response: ";
    std::cin >> answer3;

    if(answer3 == 1) {
        slytherin++;
    } else if(answer3 == 2) {
        hufflepuff++;
    } else if(answer3 == 3) {
        ravenclaw++;
    } else if(answer3 == 4) {
        gryffindor++;
    } else {
        std::cout << "Invalid input.\n";
    }

    std::cout << "\nQ4) Which road tempts you most?\n";
    std::cout << "\t1) The wide, sunny grassy lane\n";
    std::cout << "\t2) The narrow, dark, lantern-lit alley\n";
    std::cout << "\t3) The twisting, leaf-strewn path through woods\n";
    std::cout << "\t4) The cobbled street lined (ancient buildings)\n";
    std::cout << "Response: ";
    std::cin >> answer4;

    if(answer4 == 1) {
        hufflepuff++;
    } else if(answer4 == 2) {
        slytherin++;
    } else if(answer4 == 3) {
        gryffindor++;
    } else if(answer4 == 4) {
        ravenclaw++;
    } else {
        std::cout << "Invalid input.\n";
    }

    if(gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor";
    }
    if (hufflepuff > max) {
        max = hufflepuff;
        house = "Hufflepuff";
    }
    if (ravenclaw > max) {
        max = ravenclaw;
        house = "Ravenclaw";
    }
    if (slytherin > max) {
        max = slytherin;
        house = "Slytherin";
    }
    std::cout << house << "!\n";
    
    //Rock, Paper, Scissors Project
    
    /*
    - You may have played Rock, Paper, Scissors, but have you played Rock, Paper, Scissors, Lizard, Spock? This is the infamous game brought to popularity with the TV show The Big Bang Theory.
    - Write a rock_paper_scissors.cpp program that:
        > Prompts the user to select either Rock, Paper, Scissors, Lizard, or Spock.
        > Instructs the computer to randomly select either Rock, Paper, Scissors, Lizard, or Spock.
        > Compares the user’s choice and the computer’s choice and determine the winner.
        > Informs the user who the winner is.
    - This project will be particularly challenging due to its complex logic. Beware! Only the brave should venture forth.
    */
    
    // 1. Note from the creator, Sam Kass: “I invented this game (with Karen Bryla) because it seems like when you know someone well enough, 75-80% of any Rock Paper Scissors games you play with that person end up in a tie. Well, here is a slight variation that reduces that probability. This version is also nice because it satisfies the Law of Fives.”
    // 2. Begin by writing a multi-line comment that describes what this program will do.
    // 3. Let’s create a skeleton for the program.
    // 4. In this program, we need a random number for the computer’s choice and we also need to declare an int variable called user for the user’s choice. Now we have a random number that could be 1, 2, or 3 for the computer. And we also have a variable for user’s input.
    // 5. Before moving on, let’s compile and execute using the terminal to make sure there are no bugs.
    // 6. Prompt the user to select either Rock, Paper, or Scissors:
    // 7. Grab user’s input using std::cin and store it into user.
    // 8. Now we have both the user’s choice and the computer’s randomized choice, let’s use conditionals & logic to determine the winner. Make sure to jot down the logic of Rock Paper Scissors on a piece of paper before you start coding. Take your time!
    
    srand(time(NULL));
    int computer = rand() % 3 + 1;
    int user = 0;

    std::cout << "====================\n";
    std::cout << "Rock Paper Scissors!\n";
    std::cout << "====================\n";
    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";
    std::cout << "Shoot! ";
    std::cin >> user;

    if((computer == 1 && user == 3) || (computer == 2 && user == 1) || (computer == 3 && user == 2)) {
        std::cout << "Computer Wins!\n";
    } else if(computer == user) {
        std::cout << "It's a Draw!\n";
    } else {
        std::cout << "User Wins!\n";
    }
}
