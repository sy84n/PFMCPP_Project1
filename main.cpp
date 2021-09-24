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
//  Noun: car
//  action 1: car moves Forward
car.moveForward();
//  action 2: car ignition turns on
car.turnIgnitionOn();
//  action 3: car headlights turn off
car.turnHeadlightsOff();

//  2)
//  Noun: ship
//  action 1: ship sounds honk
ship.honk();
//  action 2: ship raises flag
ship.raiseFlag();
//  action 3: ship takes anchor away
ship.takeAnchorAway();

//  3)
//  Noun: window
//  action 1: window breaks
window.breaks();
//  action 2: window goes dark
window.goesDark();
//  action 3: window closes vertically
window.closeVertically();

//  4)
//  Noun: chair
//  action 1: chair holds on two feet
chair.holdsOnTwoFeet();
//  action 2: chair makes weird noises
chair.makesNoise();
//  action 3: chair falls backwards
chair.fallsBackwards();

//  5)
//  Noun: hand
//  action 1: hand turns red
hand.turnsRed();
//  action 2: hand dissapears
hand.dissapears();
//  action 3: hand makes fist
hand.makesFist();

//  6)
//  Noun: keyboard
//  action 1: keyboard LED lights on
keyboard.turnsLightsOn();
//  action 2: keyboard ESC key turns off
keyboard.turnsEscOff();
//  action 3: keyboard touch turns ON
keyboard.turnsTouchOn();

//  7)
//  Noun: guitar (Electric)
//  action 1: guitar color changes to red
guitar.changesColorToRed();
//  action 2: guitar play E chord
guitar.playsEChord();
//  action 3: guitar play muted E Chord
guitar.playsMutedEChord();

//  8)
//  Noun: pen
//  action 1: pen make button stuck 
pen.makesButtonStuck();
//  action 2: pen add logo on top 
pen.addsLogoOnTop();
//  action 3: pen color turns black
pen.changesColorBlack();

//  9)
//  Noun: speaker
//  action 1: speaker power off
speaker.powersOff();
//  action 2: speaker change LED to blue
speaker.changesLedColorBlue();
//  action 3: speaker double its size
speaker.doublesInSize();

//  10)
//  Noun: glass
//  action 1: glass fill half full
glass.fillsHalfFull();
//  action 2: glass fill full
glass.fillsFull();
//  action 3: glass warm to 60 degrees
glass.warmsToSixtyDegrees();
 


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
