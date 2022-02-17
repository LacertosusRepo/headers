@class CNContactStore, PNPersonaStore, CNSchedulerProvider;

API_AVAILABLE(ios(14))
@interface CNAvatarImageRendererSettings : NSObject

+ (instancetype)defaultSettings;
+ (instancetype)defaultSettingsWithCacheSize:(NSUInteger)cacheSize;

+ (instancetype)settingsWithContactStore:(CNContactStore *)contactStore;
+ (instancetype)settingsWithContactStore:(CNContactStore *)contactStore cacheSize:(NSUInteger)cacheSize;
+ (instancetype)settingsWithContactStore:(CNContactStore *)contactStore cacheSize:(NSUInteger)cacheSize schedulerProvider:(CNSchedulerProvider *)schedulerProvider;
+ (instancetype)settingsWithContactStore:(CNContactStore *)contactStore cacheSize:(NSUInteger)cacheSize schedulerProvider:(CNSchedulerProvider *)schedulerProvider concurrentCaches:(BOOL)concurrentCaches;
+ (instancetype)settingsWithContactStore:(CNContactStore *)contactStore schedulerProvider:(CNSchedulerProvider *)schedulerProvider;
+ (instancetype)settingsWithContactStore:(CNContactStore *)contactStore personaStrore:(PNPersonaStore *)personaStore;

+ (instancetype)offMainThreadSynchronousRenderingOnlySettingsWithCacheSize:(NSUInteger)cacheSize;

@end
