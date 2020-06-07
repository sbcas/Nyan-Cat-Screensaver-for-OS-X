//
// forked from: https://github.com/vinaytota/Nyan-Cat-Screensaver-for-OS-X
// 64 bit / *cat*alina compatible version: https://github.com/zethraeus/Nyan-Cat-Screensaver-for-OS-X
//

#import <ScreenSaver/ScreenSaver.h>
#import "NyanStarData.h"


@interface NyanCatView : ScreenSaverView {
     NSImage *displayImage;
     NSMutableArray *nyanStars; 
     int shiftRainbow;
     int gifFrameNumber;
     NSMutableArray *gifFrames;
}

- (void)drawNyanStar: (NyanStarData*)nyanStar;
- (void)drawNyanRainbowSection: (NSPoint)origin;
- (void)drawBackground;

@end
