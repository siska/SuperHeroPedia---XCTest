//
//  SuperHeroPediaTests.m
//  SuperHeroPediaTests
//
//  Created by Dave Krawczyk on 9/6/14.
//  Copyright (c) 2014 Mobile Makers. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <XCTest/XCTest.h>
#import "SuperHero.h" //step 1

@interface SuperHeroPediaTests : XCTestCase
@property SuperHero *hero1; //1
@property SuperHero *hero2; //1

@end

@implementation SuperHeroPediaTests

- (void)setUp {
    [super setUp];

    NSDictionary *dictionary1 = @{@"name":@"Kevin", @"description":@"really nice guy"};
    NSDictionary *dictionary2 = @{@"name":@"Dave", @"description":@"also a nice guy"};

    self.hero1 = [[SuperHero alloc] initWithDictionary:dictionary1];
    self.hero2 = [[SuperHero alloc] initWithDictionary:dictionary2];
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

-(void)testAllyCountStartAtZero //2
{
    XCTAssert(self.hero1.allies.count == 0);
}

-(void)testAddingAllyWorks //2
{
    [self.hero1 addAlly:self.hero2];
    XCTAssertEqual(self.hero1, self.hero2.allies.firstObject);
    XCTAssertEqual(self.hero2, self.hero1.allies.firstObject);
}

-(void)testAllyStartsNotNil //2
{
    XCTAssert(self.hero1.allies != nil);
}

-(void)testSuperheroRetrievable //3
{
    XCTestExpectation *expectation = [self expectationWithDescription:@"retrieving superheros"];
    [SuperHero retrieveSuperHerosWithCompletion:^(NSArray *superHeros) {
        XCTAssertEqual(25, superHeros.count);
        [expectation fulfill];
    }];
    [self waitForExpectationsWithTimeout:10.0 handler:nil];
}

-(void)testAllyStartsNoNil //1 - created
{
    XCTAssert(self.hero1.allies != nil);
}

- (void)testExample {
    // This is an example of a functional test case.
    XCTAssert(YES, @"Pass");
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
