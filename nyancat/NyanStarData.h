//
// forked from: https://github.com/vinaytota/Nyan-Cat-Screensaver-for-OS-X
// 64 bit / *cat*alina compatible version: https://github.com/zethraeus/Nyan-Cat-Screensaver-for-OS-X
//

#import <Foundation/Foundation.h>


@interface NyanStarData : NSObject {
    
    @private
    NSPoint center;
    int frameNumber;
}

-(void) setCenter:(NSPoint)myCenter setFrameNumber:(int)myFrameNumber;
-(NSPoint) getCenter;
-(int) getFrameNumber;

@end
