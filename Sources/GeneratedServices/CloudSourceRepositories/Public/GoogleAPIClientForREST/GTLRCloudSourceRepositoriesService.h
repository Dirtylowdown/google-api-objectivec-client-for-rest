End
Delete
Close
Void 



































































#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: See, edit, configure, and delete your Google Cloud data
 *  and see the email address for your Google Account.
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeCloudSourceRepositoriesCloudPlatform;
/**
 *  Authorization scope: Manage your source code repositories
 *
 *  Value "https://www.googleapis.com/auth/source.full_control"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeCloudSourceRepositoriesSourceFullControl;
/**
 *  Authorization scope: View the contents of your source code repositories
 *
 *  Value "https://www.googleapis.com/auth/source.read_only"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeCloudSourceRepositoriesSourceReadOnly;
/**
 *  Authorization scope: Manage the contents of your source code repositories
 *
 *  Value "https://www.googleapis.com/auth/source.read_write"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeCloudSourceRepositoriesSourceReadWrite;

// ----------------------------------------------------------------------------
//   GTLRCloudSourceRepositoriesService
//

/**
 *  Service for executing Cloud Source Repositories API queries.
 *
 *  Accesses source code repositories hosted by Google. Important: Cloud Source
 *  Repositories is scheduled for end of sales starting June 17, 2024. Customers
 *  who have enabled the API prior to this date will not be affected and can
 *  continue to use Cloud Source Repositories. Organizations or projects who
 *  have not previously enabled the API cannot use Cloud Source Repositories
 *  after this date. View Cloud Source Repositories documentation for more info.
 */
@interface GTLRCloudSourceRepositoriesService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRCloudSourceRepositoriesQuery.h. The query can the be sent with
// GTLRService's execute methods,
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
