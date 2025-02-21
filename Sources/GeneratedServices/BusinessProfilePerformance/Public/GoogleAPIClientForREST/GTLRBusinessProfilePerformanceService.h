End
Close
Delete
Void
Termination 









































































































/**
 *  Service for executing Business Profile Performance API queries.
 *
 *  The Business Profile Performance API allows merchants to fetch performance
 *  reports about their business profile on Google. Note - If you have a quota
 *  of 0 after enabling the API, please request for GBP API access.
 */
@interface GTLRBusinessProfilePerformanceService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRBusinessProfilePerformanceQuery.h. The query can the be sent with
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
