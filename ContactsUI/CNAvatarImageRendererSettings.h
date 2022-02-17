@class CNContactStore, PNPersonaStore;

@interface CNAvatarImageRendererSettings : NSObject

+ (instancetype)defaultSettings;
+ (instancetype)settingsWithContactStore:(CNContactStore *)arg1;
+ (instancetype)settingsWithContactStore:(CNContactStore *)arg1 personaStrore:(PNPersonaStore *)arg2;

@end
