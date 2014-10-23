//
//  ViewController.h
//  SuperHeroPedia
//
//  Created by Dave Krawczyk on 9/6/14.
//  Copyright (c) 2014 Mobile Makers. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@end

/*
step 1
 - imported superhero.h into the tests.m to be able to create instances of it; created the properties of hero1 and hero2 in tests.m interface
 
- in the setUp, created a dictionary with information about two superheroes, Kevin and Dave, and then created hero1 and hero2 instances of the SuperHero object by initWithDictionary - the SuperHero class had this method
 - then we created our own method of testAllyStartsNoNil to see if allies was nil, which should never be the case as initWithDictionary as it auto sets allies to an empty NSArray
 - in the method we created, we also made it == instead of != so that we could see when it fails - it did so we corrected it and then clicked the red x button that only tested that when we clicked the test button
 
step 2
 - added a few new test cases in the test.m section - big thing was within the SuperHero.m - we changed the array within the Superhero.m so that it wasn't = allyArray - that would have created an issue because the self.allies NSArray would have become a mutable array - could have made it able to be manipulated later
 - XCAssertEqual allows us to test if two objects are the same; in these instances we want the first object of the second heroes allies to be the first hero - we can use this because we're creating these allies from scratch - different if we weren't just comparing the first object that we had just put in
 
 step 3
 - created a new method of testSuperheroRetrievable to see if 25 superheroes were being pulled from the api 
 - within the method we created - since it's an asynchronous block we need to include the self waitForExpectationWithTimeout - that waits however long we tell it to, 10.0 in this example, and if the [expectation fulfill] doesn't send that it's fulfilled by the time we set, it will say that it failed
 - also found out the function of the testPerformanceExample at the bottom of the screen - can place code after the self measureBlock:^{ to see how long it takes 














*/