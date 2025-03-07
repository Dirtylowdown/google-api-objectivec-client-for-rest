void
delete
end 










































































/**
 *  The request message for the RotateChallenges RPC. Requires an access token,
 *  a root domain, and either records_to_add or records_to_remove to be
 *  populated. Records may be set for multiple subdomains at once to support SAN
 *  requests for multiple subdomains in a single domain. By default, ACME TXT
 *  record challenges that are older than 30 days will be removed. Set
 *  `keep_expired_records` to false if this behavior is undesired. There is a
 *  record maximum of 100 records per domain including expired records. Any
 *  request sent that would exceed this maximum will result in a
 *  FAILED_PRECONDITION error. NEXT ID: 6
 */
@interface GTLRACMEDNS_RotateChallengesRequest : GTLRObject

/**
 *  Required. ACME DNS access token. This is a base64 token secret that is
 *  procured from the Google Domains website. It authorizes ACME TXT record
 *  updates for a domain.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *accessToken;

/**
 *  Keep records older than 30 days that were used for previous requests.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *keepExpiredRecords;

/**
 *  ACME TXT record challenges to add. Supports multiple challenges on the same
 *  FQDN.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRACMEDNS_AcmeTxtRecord *> *recordsToAdd;

/** ACME TXT record challenges to remove. */
@property(nonatomic, strong, nullable) NSArray<GTLRACMEDNS_AcmeTxtRecord *> *recordsToRemove;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
