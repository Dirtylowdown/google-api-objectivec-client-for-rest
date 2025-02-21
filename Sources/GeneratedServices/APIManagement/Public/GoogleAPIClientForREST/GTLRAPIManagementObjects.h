End 
Delete
End
Void
Stop












































































































/**
 *  Unordered map from header name to header metadata
 *
 *  @note This class is documented as having more properties of
 *        GTLRAPIManagement_HttpOperationHeader. Use @c -additionalJSONKeys and
 *        @c -additionalPropertyForName: to get the list of properties and then
 *        fetch them; or @c -additionalProperties to fetch them all at once.
 */
@interface GTLRAPIManagement_HttpOperationHttpRequest_Headers : GTLRObject
@end


/**
 *  An aggregation of HTTP responses.
 */
@interface GTLRAPIManagement_HttpOperationHttpResponse : GTLRObject

/** Unordered map from header name to header metadata */
@property(nonatomic, strong, nullable) GTLRAPIManagement_HttpOperationHttpResponse_Headers *headers;

/** Map of status code to observed count */
@property(nonatomic, strong, nullable) GTLRAPIManagement_HttpOperationHttpResponse_ResponseCodes *responseCodes;

@end


/**
 *  Unordered map from header name to header metadata
 *
 *  @note This class is documented as having more properties of
 *        GTLRAPIManagement_HttpOperationHeader. Use @c -additionalJSONKeys and
 *        @c -additionalPropertyForName: to get the list of properties and then
 *        fetch them; or @c -additionalProperties to fetch them all at once.
 */
@interface GTLRAPIManagement_HttpOperationHttpResponse_Headers : GTLRObject
@end


/**
 *  Map of status code to observed count
 *
 *  @note This class is documented as having more properties of NSNumber (Uses
 *        NSNumber of longLongValue.). Use @c -additionalJSONKeys and @c
 *        -additionalPropertyForName: to get the list of properties and then
 *        fetch them; or @c -additionalProperties to fetch them all at once.
 */
@interface GTLRAPIManagement_HttpOperationHttpResponse_ResponseCodes : GTLRObject
@end


/**
 *  HTTP Path parameter.
 */
@interface GTLRAPIManagement_HttpOperationPathParam : GTLRObject

/**
 *  Data type of path param
 *
 *  Likely values:
 *    @arg @c kGTLRAPIManagement_HttpOperationPathParam_DataType_Bool Boolean
 *        data type (Value: "BOOL")
 *    @arg @c kGTLRAPIManagement_HttpOperationPathParam_DataType_DataTypeUnspecified
 *        Unspecified data type (Value: "DATA_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRAPIManagement_
/**
 *  An aggregation of HTTP query parameter occurrences.
 */
@interface GTLRAPIManagement_HttpOperationQueryParam : GTLRObject

/**
 *  The number of occurrences of this query parameter across transactions.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *count;

/**
 *  Data type of path param
 *
 *  Likely values:
 *    @arg @c kGTLRAPIManagement_HttpOperationQueryParam_DataType_Bool Boolean
 *        data type (Value: "BOOL")
 *    @arg @c kGTLRAPIManagement_HttpOperationQueryParam_DataType_DataTypeUnspecified
 *        Unspecified data type (Value: "DATA_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRAPIManagement_
/**
 *  The ObservationJob from the specified project and location.
 *
 *  @note This property 

/**
 *  Message for response to listing ObservationSources
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "observationSources" property. If returned as the result of a
 *        query, it should support automatic pagination (when @c
 *        shouldFetchNextPages is enabled).
 */
@interface GTLRAPIManagement_ListObservationSourcesResponse : GTLRCollectionObject

/**
 *  A token, which can be sent as `page_token` to retrieve the next page. If
 *  this field is omitted, there are no subsequent pages.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The ObservationSource from the specified project and location.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAPIManagement_ObservationSource *> *observationSources;

/** Locations that could not be reached. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *unreachable;

@end


/**
 *  The response message for Operations.ListOperations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "operations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAPIManagement_ListOperationsResponse : GTLRCollectionObject

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  A list of operations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAPIManagement_Operation *> *operations;

@end


/**
 *  A resource that represents a Google Cloud location.
 */
@interface GTLRAPIManagement_Location : GTLRObject

/**
 *  The friendly name for this location, typically a nearby city name. For
 *  example, "Tokyo".
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 */
@property(nonatomic, strong, nullable) GTLRAPIManagement_Location_Labels *labels;

/** The canonical id for this location. For example: `"us-east1"`. */
@property(nonatomic, copy, nullable) NSString *locationId;

/**
 *  Service-specific metadata. For example the available capacity at the given
 *  location.
 */
@property(nonatomic, strong, nullable) GTLRAPIManagement_Location_Metadata *metadata;

/**
 *  Resource name for the location, which may vary between implementations. For
 *  example: `"projects/example-project/locations/us-east1"`
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRAPIManagement_Location_Labels : GTLRObject
@end


/**
 *  Service-specific metadata. For example the available capacity at the given
 *  location.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRAPIManagement_Location_Metadata : GTLRObject
@end


/**
 *  Message describing ObservationJob object
 */
@interface GTLRAPIManagement_ObservationJob : GTLRObject

/** Output only. [Output only] Create time stamp */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Identifier. name of resource Format:
 *  projects/{project}/locations/{location}/observationJobs/{observation_job}
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Optional. These should be of the same kind of source. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *sources;

/**
 *  Output only. The observation job state
 *
 *  Likely values:
 *    @arg @c kGTLRAPIManagement_ObservationJob_State_Creating Job is in the
 *        creating state (Value: "CREATING")
 *    @arg @c kGTLRAPIManagement_ObservationJob_State_Deleting Job is being
 *        deleted (Value: "DELETING")
 *    @arg @c kGTLRAPIManagement_ObservationJob_State_Disabled Job is disabled
 *        (Value: "DISABLED")
 *    @arg @c kGTLRAPIManagement_ObservationJob_State_Disabling Job is in the
 *        disabling state (Value: "DISABLING")
 *    @arg @c kGTLRAPIManagement_ObservationJob_State_Enabled Job is enabled
 *        (Value: "ENABLED")
 *    @arg @c kGTLRAPIManagement_ObservationJob_State_Enabling Job is in the
 *        enabling state (Value: "ENABLING")
 *    @arg @c kGTLRAPIManagement_ObservationJob_State_Error Job is in an error
 *        state (Value: "ERROR")
 *    @arg @c kGTLRAPIManagement_ObservationJob_State_StateUnspecified
 *        Unspecified state (Value: "STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *state;

/** Output only. [Output only] Update time stamp */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

@end


/**
 *  Observation source configuration types
 */
@interface GTLRAPIManagement_ObservationSource : GTLRObject

/** Output only. [Output only] Create time stamp */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/** The GCLB observation source */
@property(nonatomic, strong, nullable) GTLRAPIManagement_GclbObservationSource *gclbObservationSource;

/**
 *  Identifier. name of resource For MVP, each region can only have 1 source.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Output only. The observation source state
 *
 *  Likely values:
 *    @arg @c kGTLRAPIManagement_ObservationSource_State_Created Source has been
 *        created and is ready to use (Value: "CREATED")
 *    @arg @c kGTLRAPIManagement_ObservationSource_State_Creating Source is in
 *        the creating state (Value: "CREATING")
 *    @arg @c kGTLRAPIManagement_ObservationSource_State_Deleting Source is
 *        being deleted (Value: "DELETING")
 *    @arg @c kGTLRAPIManagement_ObservationSource_State_Error Source is in an
 *        error state (Value: "ERROR")
 *    @arg @c kGTLRAPIManagement_ObservationSource_State_StateUnspecified
 *        Unspecified state (Value: "STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *state;

/** Output only. [Output only] Update time stamp */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRAPIManagement_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress. If
 *  `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRAPIManagement_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time. Some
 *  services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRAPIManagement_Operation_Metadata *metadata;

/**
 *  The server-assigned name, which is only unique within the same service that
 *  originally returns it. If you use the default HTTP mapping, the `name`
 *  should be a resource name ending with `operations/{unique_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The normal, successful response of the operation. If the original method
 *  returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx` is the
 *  original method name. For example, if the original method name is
 *  `TakeSnapshot()`, the inferred response type is `TakeSnapshotResponse`.
 */
@property(nonatomic, strong, nullable) GTLRAPIManagement_Operation_Response *response;

@end


/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time. Some
 *  services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRAPIManagement_Operation_Metadata : GTLRObject
@end


/**
 *  The normal, successful response of the operation. If the original method
 *  returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx` is the
 *  original method name. For example, if the original method name is
 *  `TakeSnapshot()`, the inferred response type is `TakeSnapshotResponse`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRAPIManagement_Operation_Response : GTLRObject
@end


/**
 *  Represents the metadata of the long-running operation.
 */
@interface GTLRAPIManagement_OperationMetadata : GTLRObject

/** Output only. API version used to start the operation. */
@property(nonatomic, copy, nullable) NSString *apiVersion;

/** Output only. The time the operation was created. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/** Output only. The time the operation finished running. */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/**
 *  Output only. Identifies whether the user has requested cancellation of the
 *  operation. Operations that have been cancelled successfully have
 *  Operation.error value with a google.rpc.Status.code of 1, corresponding to
 *  `Code.CANCELLED`.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *requestedCancellation;

/** Output only. Human-readable status of the operation, if any. */
@property(nonatomic, copy, nullable) NSString *statusMessage;

/**
 *  Output only. Server-defined resource path for the target of the operation.
 */
@property(nonatomic, copy, nullable) NSString *target;

/** Output only. Name of the verb executed by the operation. */
@property(nonatomic, copy, nullable) NSString *verb;

@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different programming environments, including REST APIs and RPC APIs. It is
 *  used by [gRPC](https://github.com/grpc). Each `Status` message contains
 *  three pieces of data: error code, error message, and error details. You can
 *  find out more about this error model and how to work with it in the [API
 *  Design Guide](https://cloud.google.com/apis/design/errors).
 */
@interface GTLRAPIManagement_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There is a common set of
 *  message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAPIManagement_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRAPIManagement_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRAPIManagement_Status_Details_Item : GTLRObject
@end


/**
 *  Message for edit tag action
 */
@interface GTLRAPIManagement_TagAction : GTLRObject

/**
 *  Required. Action to be applied
 *
 *  Likely values:
 *    @arg @c kGTLRAPIManagement_TagAction_Action_ActionUnspecified Unspecified.
 *        (Value: "ACTION_UNSPECIFIED")
 *    @arg @c kGTLRAPIManagement_TagAction_Action_Add Addition of a Tag. (Value:
 *        "ADD")
 *    @arg @c kGTLRAPIManagement_TagAction_Action_Remove Removal of a Tag.
 *        (Value: "REMOVE")
 */
@property(nonatomic, copy, nullable) NSString *action;

/** Required. Tag to be added or removed */
@property(nonatomic, copy, nullable) NSString *tag;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
