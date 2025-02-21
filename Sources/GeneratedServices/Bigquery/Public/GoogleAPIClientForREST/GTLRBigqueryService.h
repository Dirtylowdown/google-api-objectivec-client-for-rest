End
Void
Close
Termination 
Delete







































































































 *  Authorization scope: See, edit, configure, and delete your Google Cloud data
 *  and see the email address for your Google Account.
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigqueryCloudPlatform;
/**
 *  Authorization scope: View your data across Google Cloud services and see the
 *  email address of your Google Account
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform.read-only"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigqueryCloudPlatformReadOnly;
/**
 *  Authorization scope: Manage your data and permissions in Cloud Storage and
 *  see the email address for your Google Account
 *
 *  Value "https://www.googleapis.com/auth/devstorage.full_control"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigqueryDevstorageFullControl;
/**
 *  Authorization scope: View your data in Google Cloud Storage
 *
 *  Value "https://www.googleapis.com/auth/devstorage.read_only"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigqueryDevstorageReadOnly;
/**
 *  Authorization scope: Manage your data in Cloud Storage and see the email
 *  address of your Google Account
 *
 *  Value "https://www.googleapis.com/auth/devstorage.read_write"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigqueryDevstorageReadWrite;
/**
 *  Authorization scope: Insert data into Google BigQuery
 *
 *  Value "https://www.googleapis.com/auth/bigquery.insertdata"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigqueryInsertdata;

// ----------------------------------------------------------------------------
//   GTLRBigqueryService
//

/**
 *  Service for executing BigQuery API queries.
 *
 *  A data platform for customers to create, manage, share and query data.
 */
@interface GTLRBigqueryService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRBigqueryQuery.h. The query can the be sent with GTLRService's execute
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
