@class CNAvatarImageRendererSettings, CNCancelationToken, CNContact;

API_AVAILABLE(ios(14))
@interface CNVisualIdentityContactAvatarProvider : NSObject

- (instancetype)initWithSettings:(CNAvatarImageRendererSettings *)arg1;
- (CNCancelationToken *)avatarImageForContact:(CNContact *)arg1 withSize:(CGSize)arg2 includePlaceholder:(BOOL)arg3 imageHandler:()arg4;

@end
