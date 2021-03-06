#import <UIKit/UIKit.h>

#import "../SNES9XBridge/SIScreenDelegate.h"

@class LMEmulatorControllerView;

@interface LMEmulatorController : UIViewController
{
  LMEmulatorControllerView* _customView;
  
  UIAlertController* _actionSheet;
  
  volatile NSThread* _emulationThread;
  
  NSString* _romFileName;
  NSString* _initialSaveFileName;
  
  BOOL _isMirror;
  UIWindow* _externalWindow;
  LMEmulatorController* _externalEmulator;
}

@property (copy) NSString* romFileName;
@property (copy) NSString* initialSaveFileName;

- (void)startWithROM:(NSString*)romFileName;

- (id)initMirrorOf:(LMEmulatorController*)mainController;

@end
