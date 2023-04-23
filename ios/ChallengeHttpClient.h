
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNChallengeHttpClientSpec.h"

@interface ChallengeHttpClient : NSObject <NativeChallengeHttpClientSpec>
#else
#import <React/RCTBridgeModule.h>

@interface ChallengeHttpClient : NSObject <RCTBridgeModule>
#endif

@end
