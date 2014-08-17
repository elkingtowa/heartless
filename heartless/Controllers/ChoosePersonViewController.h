#import <UIKit/UIKit.h>
#import "ChoosePersonView.h"

@interface ChoosePersonViewController : UIViewController <MDCSwipeToChooseDelegate>

@property (nonatomic, strong) Person *currentPerson;
@property (nonatomic, strong) ChoosePersonView *frontCardView;
@property (nonatomic, strong) ChoosePersonView *backCardView;

@end
