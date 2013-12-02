#import "cocos2d.h"

@interface GameOverLayer : CCLayerColor {}
@property (nonatomic, strong) CCLabelTTF *label;
@end

@interface GameOverScene : CCScene {}
@property (nonatomic, strong) GameOverLayer *layer;
@end