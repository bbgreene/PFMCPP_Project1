#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       leg
//  action 1:   the leg bends
leg.bend();
//  action 2:   the leg flexes
leg.flex();
//  action 3:   the leg lifts up
leg.liftUp();
//  2)
//  Noun:       badger
//  action 1:   the badger eats
badger.eat();
//  action 2:   the badger runs
badger.run();
//  action 3:   the badger drinks water
badger.drinkWater();
//  3)
//  Noun:       watch
//  action 1:   the watch beeps
watch.beep();
//  action 2:   displays the time
watch.displayTime();
//  action 3:   the watch light illuminates the screen
watch.lightIlluminates();
//  4)
//  Noun:       kettle
//  action 1:   the kettle boils water
kettle.boil();
//  action 2:   the kettle automatically turns off 
kettle.turnOff();
//  action 3:   the kettle overflows
kettle.overflow();
//  5)
//  Noun:       cat
//  action 1:   the cat jumps  
cat.jump();
//  action 2:   the cat meows
cat.meow();
//  action 3:   the cat chases the mouse
cat.chaseMouse();
//  6)
//  Noun:       eye
//  action 1:   the eye closes
eye.close();
//  action 2:   the eye looks left
eye.lookLeft();
//  action 3:   the eye blinks
eye.blink(); 
//  7)
//  Noun:       bread
//  action 1:   the bread rises in the oven
bread.rise();
//  action 2:   the bread cools down
bread.cool();
//  action 3:   the bread gets old and mouldy
bread.old();
//  8)
//  Noun:       moth
//  action 1:   the moth flaps its wings
moth.flap();
//  action 2:   the moth lands on a light bulb
moth.landLightbulb();
//  action 3:   the moth dodges a bat
moth.dogdeBat();
//  9)
//  Noun:       computerMonitor
//  action 1:   the monitor display dims
computerMonitor.displayDim();
//  action 2:   the monitor display illuminates the room  
computerMonitor.illuminateRoom();
//  action 3:   the monitor automatically turns off
computerMonitor.turnOff();
//  10)
//  Noun:       man
//  action 1:   man orders a cocktail
man.orderCocktail();
//  action 2:   man eats a sandwich
man.eatSandwich();
//  action 3:   man thinks about existence 
man.thinkExistence();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
