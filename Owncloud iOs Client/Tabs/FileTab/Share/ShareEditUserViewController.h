//
//  ShareEditUserViewController.h
//  Owncloud iOs Client
//
//  Created by Noelia Alvarez on 11/1/16.
//
//

/*
 Copyright (C) 2016, ownCloud, Inc.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import <UIKit/UIKit.h>
#import "ShareFileOrFolder.h"
#import "MBProgressHUD.h"
#import "FileDto.h"

@interface ShareEditUserViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, ShareFileOrFolderDelegate, MBProgressHUDDelegate, UIAlertViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate>

@property (weak, nonatomic) IBOutlet UITableView* shareEditUserTableView;

- (id) initWithFileDto:(FileDto *)fileDto andUserDto:(UserDto *)userDto;

@end
