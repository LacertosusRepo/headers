#import <CNContacts/CNContact.h>
#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

@class CNAvatarImageRendererSettings, CNCancelationToken;

API_AVAILABLE(ios(14))
@interface CNVisualIdentityContactAvatarProvider : NSObject

- (instancetype)initWithSettings:(CNAvatarImageRendererSettings *)arg1;
- (CNCancelationToken *)avatarImageForContact:(CNContact *)arg1 withSize:(CGSize)arg2 includePlaceholder:(BOOL)arg3 imageHandler:(void (^)(UIImage *image))arg4;

@end

  /* TO-DO
  - Check return type of avatarImageForContact
  - Check if imageHandler is a completion handler type
  */
