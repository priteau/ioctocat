#import <UIKit/UIKit.h>


@class GHRepository, GHUser, TextCell, LabeledCell;

@interface RepositoryController : UITableViewController <UIActionSheetDelegate> {
  @private
	GHRepository *repository;
	IBOutlet UIView *tableHeaderView;
	IBOutlet UILabel *nameLabel;
	IBOutlet UILabel *numbersLabel;
	IBOutlet UILabel *ownerLabel;
	IBOutlet UILabel *websiteLabel;
    IBOutlet UILabel *forkLabel;
	IBOutlet UITableViewCell *loadingCell;
	IBOutlet UITableViewCell *branchCell;
    IBOutlet UITableViewCell *issuesCell;
    IBOutlet UITableViewCell *networkCell;    
    IBOutlet UIImageView *iconView;
	IBOutlet LabeledCell *ownerCell;
	IBOutlet LabeledCell *websiteCell;
	IBOutlet TextCell *descriptionCell;
}

@property(nonatomic,readonly) GHUser *currentUser;

- (id)initWithRepository:(GHRepository *)theRepository;
- (IBAction)showActions:(id)sender;

@end
