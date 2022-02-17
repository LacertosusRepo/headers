@class CNContactStore, PNPersonaStore, CNSchedulerProvider;

API_AVAILABLE(ios(14))
@interface CNAvatarImageRendererSettings : NSObject

+ (instancetype)defaultSettings;
+ (instancetype)defaultSettingsWithCacheSize:(NSUInteger)arg1;
+ (instancetype)settingsWithContactStore:(CNContactStore *)arg1;
+ (instancetype)settingsWithContactStore:(CNContactStore *)arg1 cacheSize:(NSUInteger)arg2;
+ (instancetype)settingsWithContactStore:(CNContactStore *)arg1 cacheSize:(NSUInteger)arg2 schedulerProvider:(CNSchedulerProvider *)arg3;
+ (instancetype)settingsWithContactStore:(CNContactStore *)arg1 cacheSize:(NSUInteger)arg2 schedulerProvider:(CNSchedulerProvider *)arg3 concurrentCaches:(BOOL)arg4;
+ (instancetype)settingsWithContactStore:(CNContactStore *)arg1 schedulerProvider:(CNSchedulerProvider *)arg3;
+ (instancetype)settingsWithContactStore:(CNContactStore *)arg1 personaStrore:(PNPersonaStore *)arg2;
+ (instancetype)offMainThreadSynchronousRenderingOnlySettingsWithCacheSize:(NSUInteger)arg1;

@end
