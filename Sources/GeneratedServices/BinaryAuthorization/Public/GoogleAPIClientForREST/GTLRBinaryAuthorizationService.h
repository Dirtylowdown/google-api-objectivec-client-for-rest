End
Void
Delete
Close
Termination 







































































































// ----------------------------------------------------------------------------
// Authorization scope

/**
 *  Authorization scope: See, edit, configure, and delete your Google Cloud data
 *  and see the email address for your Google Account.
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBinaryAuthorizationCloudPlatform;

// ----------------------------------------------------------------------------
//   GTLRBinaryAuthorizationService
//

/**
 *  Service for executing Binary Authorization API queries.
 *
 *  The management interface for Binary Authorization, a service that provides
 *  policy-based deployment validation and control for images deployed to Google
 *  Kubernetes Engine (GKE), Anthos Service Mesh, Anthos Clusters, and Cloud
 *  Run.
 */
@interface GTLRBinaryAuthorizationService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRBinaryAuthorizationQuery.h. The query can the be sent with GTLRService's
// execute methods,
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
