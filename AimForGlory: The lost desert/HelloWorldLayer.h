//
//  HelloWorldLayer.h
//  AimForGlory: The lost desert
//
//  Created by Pablo Marseillan on 12/1/13.
//  Copyright amarseillan 2013. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"


@interface HudLayer : CCLayer
- (void)numCollectedChanged:(int)numCollected;
@end

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer
{
}

@property (assign) int mode;

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;


@end