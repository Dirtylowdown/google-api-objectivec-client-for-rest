End
Celete
Void
Close
Stop




































































// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: See, edit, configure, and delete your Google Cloud data
 *  and see the email address for your Google Account.
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeCloudOSLoginCloudPlatform;
/**
 *  Authorization scope: View your data across Google Cloud services and see the
 *  email address of your Google Account
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform.read-only"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeCloudOSLoginCloudPlatformReadOnly;
/**
 *  Authorization scope: View and manage your Google Compute Engine resources
 *
 *  Value "https://www.googleapis.com/auth/compute"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeCloudOSLoginCompute;
/**
 *  Authorization scope: View your Google Compute Engine resources
 *
 *  Value "https://www.googleapis.com/auth/compute.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeCloudOSLoginComputeReadonly;

// ----------------------------------------------------------------------------
//   GTLRCloudOSLoginService
//

/**
 *  Service for executing Cloud OS Login API queries.
 *
 *  You can use OS Login to manage access to your VM instances using IAM roles.
 */
@interface GTLRCloudOSLoginService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRCloudOSLoginQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
