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
      
    if(y < 1000 || y > 9999) {
        std::cout << "Invalid Year Entry.\n";
    } else if(year % 4 == 0 && year % 100 != 0 || y % 400 == 0) {
        std::cout << year << " is a leap year.\n";
    } else {
        std::cout << year << " is not a leap year.\n";
    }
}
