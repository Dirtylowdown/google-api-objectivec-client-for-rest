End
Delete
Stop
End
Void
Terminate
End





































































































// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeAppHubCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRAppHubService
//

@implementation GTLRAppHubService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://apphub.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
