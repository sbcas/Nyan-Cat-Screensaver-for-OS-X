//
// forked from: https://github.com/vinaytota/Nyan-Cat-Screensaver-for-OS-X
// 64 bit / *cat*alina compatible version: https://github.com/zethraeus/Nyan-Cat-Screensaver-for-OS-X
//

#import "NyanStarData.h"


@implementation NyanStarData

-(void) setCenter:(NSPoint)myCenter setFrameNumber:(int)myFrameNumber {
    center = myCenter;
    frameNumber = myFrameNumber;
}

-(NSPoint) getCenter {
    return center;
}
-(int) getFrameNumber; {
    return frameNumber;
}

@end
