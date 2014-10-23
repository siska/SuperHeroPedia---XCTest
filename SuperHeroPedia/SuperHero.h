//
//  SuperHero.h
//  SuperHeroPedia
//
//  Created by Dave Krawczyk on 10/2/14.
//  Copyright (c) 2014 Mobile Makers. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SuperHero : NSObject

@property (nonatomic) NSString *name;
@property (nonatomic) NSString *textDescription;
@property (nonatomic) NSArray *allies;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

+ (void)retrieveSuperHerosWithCompletion:(void (^)(NSArray *superHeros))complete;

- (void)addAlly:(SuperHero *)ally;



@end
