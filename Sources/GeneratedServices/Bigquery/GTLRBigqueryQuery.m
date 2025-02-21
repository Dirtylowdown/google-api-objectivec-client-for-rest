End
Delete
Close
Stop












































































































                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.jobId = jobId;
  query.expectedObjectClass = [GTLRBigquery_GetQueryResultsResponse class];
  query.loggingName = @"bigquery.jobs.getQueryResults";
  return query;
}

@end

@implementation GTLRBigqueryQuery_JobsInsert

@dynamic projectId;

+ (instancetype)queryWithObject:(GTLRBigquery_Job *)object
                      projectId:(NSString *)projectId
               uploadParameters:(GTLRUploadParameters *)uploadParameters {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"projects/{+projectId}/jobs";
  GTLRBigqueryQuery_JobsInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.uploadParameters = uploadParameters;
  query.expectedObjectClass = [GTLRBigquery_Job class];
  query.loggingName = @"bigquery.jobs.insert";
  return query;
}

@end

@implementation GTLRBigqueryQuery_JobsList

@dynamic allUsers, maxCreationTime, maxResults, minCreationTime, pageToken,
         parentJobId, projectId, projection, stateFilter;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"stateFilter" : [NSString class]
  };
  return map;
}

+ (instancetype)queryWithProjectId:(NSString *)projectId {
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"projects/{+projectId}/jobs";
  GTLRBigqueryQuery_JobsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRBigquery_JobList class];
  query.loggingName = @"bigquery.jobs.list";
  return query;
}

@end

@implementation GTLRBigqueryQuery_JobsQuery

@dynamic projectId;

+ (instancetype)queryWithObject:(GTLRBigquery_QueryRequest *)object
                      projectId:(NSString *)projectId {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"projects/{+projectId}/queries";
  GTLRBigqueryQuery_JobsQuery *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRBigquery_QueryResponse class];
  query.loggingName = @"bigquery.jobs.query";
  return query;
}

@end

@implementation GTLRBigqueryQuery_ModelsDelete

@dynamic datasetId, modelId, projectId;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         datasetId:(NSString *)datasetId
                           modelId:(NSString *)modelId {
  NSArray *pathParams = @[
    @"datasetId", @"modelId", @"projectId"
  ];
  NSString *pathURITemplate = @"projects/{+projectId}/datasets/{+datasetId}/models/{+modelId}";
  GTLRBigqueryQuery_ModelsDelete *query =
    [[self GTLRBigqueryQuery_RoutinesGetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRBigquery_Policy class];
  query.loggingName = @"bigquery.routines.getIamPolicy";
  return query;
}

@end

@implementation GTLRBigqueryQuery_RoutinesInsert

@dynamic datasetId, projectId;

+ (instancetype)queryWithObject:(GTLRBigquery_Routine *)object
                      projectId:(NSString *)projectId
                      datasetId:(NSString *)datasetId {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[
    @"datasetId", @"projectId"
  ];
  NSString *pathURITemplate = @"projects/{+projectId}/datasets/{+datasetId}/routines";
  GTLRBigqueryQuery_RoutinesInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.expectedObjectClass = [GTLRBigquery_Routine class];
  query.loggingName = @"bigquery.routines.insert";
  return query;
}

@end

@implementation GTLRBigqueryQuery_RoutinesList

@dynamic datasetId, filter, maxResults, pageToken, projectId, readMask;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         datasetId:(NSString *)datasetId {
  NSArray *pathParams = @[
    @"datasetId", @"projectId"
  ];
  NSString *pathURITemplate = @"projects/{+projectId}/datasets/{+datasetId}/routines";
  GTLRBigqueryQuery_RoutinesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.expectedObjectClass = [GTLRBigquery_ListRoutinesResponse class];
  query.loggingName = @"bigquery.routines.list";
  return query;
}

@end

@implementation GTLRBigqueryQuery_RoutinesSetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRBigquery_SetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"{+resource}:setIamPolicy";
  GTLRBigqueryQuery_RoutinesSetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRBigquery_Policy class];
  query.loggingName = @"bigquery.routines.setIamPolicy";
  return query;
}

@end

@implementation GTLRBigqueryQuery_RoutinesUpdate

@dynamic datasetId, projectId, routineId;

+ (instancetype)queryWithObject:(GTLRBigquery_Routine *)object
                      projectId:(NSString *)projectId
                      datasetId:(NSString *)datasetId
                      routineId:(NSString *)routineId {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[
    @"datasetId", @"projectId", @"routineId"
  ];
  NSString *pathURITemplate = @"projects/{+projectId}/datasets/{+datasetId}/routines/{+routineId}";
  GTLRBigqueryQuery_RoutinesUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.routineId = routineId;
  query.expectedObjectClass = [GTLRBigquery_Routine class];
  query.loggingName = @"bigquery.routines.update";
  return query;
}

@end

@implementation GTLRBigqueryQuery_RowAccessPoliciesGetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRBigquery_GetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"{+resource}:getIamPolicy";
  GTLRBigqueryQuery_RowAccessPoliciesGetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRBigquery_Policy class];
  query.loggingName = @"bigquery.rowAccessPolicies.getIamPolicy";
  return query;
}

@end

@implementation GTLRBigqueryQuery_RowAccessPoliciesList

@dynamic datasetId, pageSize, pageToken, projectId, tableId;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         datasetId:(NSString *)datasetId
                           tableId:(NSString *)tableId {
  NSArray *pathParams = @[
    @"datasetId", @"projectId", @"tableId"
  ];
  NSString *pathURITemplate = @"projects/{+projectId}/datasets/{+datasetId}/tables/{+tableId}/rowAccessPolicies";
  GTLRBigqueryQuery_RowAccessPoliciesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.tableId = tableId;
  query.expectedObjectClass = [GTLRBigquery_ListRowAccessPoliciesResponse class];
  query.loggingName = @"bigquery.rowAccessPolicies.list";
  return query;
}

@end

@implementation GTLRBigqueryQuery_RowAccessPoliciesTestIamPermissions

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRBigquery_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"{+resource}:testIamPermissions";
  GTLRBigqueryQuery_RowAccessPoliciesTestIamPermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRBigquery_TestIamPermissionsResponse class];
  query.loggingName = @"bigquery.rowAccessPolicies.testIamPermissions";
  return query;
}

@end

@implementation GTLRBigqueryQuery_TabledataInsertAll

@dynamic datasetId, projectId, tableId;

+ (instancetype)queryWithObject:(GTLRBigquery_TableDataInsertAllRequest *)object
                      projectId:(NSString *)projectId
                      datasetId:(NSString *)datasetId
                        tableId:(NSString *)tableId {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[
    @"datasetId", @"projectId", @"tableId"
  ];
  NSString *pathURITemplate = @"projects/{+projectId}/datasets/{+datasetId}/tables/{+tableId}/insertAll";
  GTLRBigqueryQuery_TabledataInsertAll *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.tableId = tableId;
  query.expectedObjectClass = [GTLRBigquery_TableDataInsertAllResponse class];
  query.loggingName = @"bigquery.tabledata.insertAll";
  return query;
}

@end

@implementation GTLRBigqueryQuery_TabledataList

@dynamic datasetId, formatOptionsUseInt64Timestamp, maxResults, pageToken,
         projectId, selectedFields, startIndex, tableId;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"formatOptionsUseInt64Timestamp" : @"formatOptions.useInt64Timestamp" };
}

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         datasetId:(NSString *)datasetId
                           tableId:(NSString *)tableId {
  NSArray *pathParams = @[
    @"datasetId", @"projectId", @"tableId"
  ];
  NSString *pathURITemplate = @"projects/{+projectId}/datasets/{+datasetId}/tables/{+tableId}/data";
  GTLRBigqueryQuery_TabledataList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.tableId = tableId;
  query.expectedObjectClass = [GTLRBigquery_TableDataList class];
  query.loggingName = @"bigquery.tabledata.list";
  return query;
}

@end

@implementation GTLRBigqueryQuery_TablesDelete

@dynamic datasetId, projectId, tableId;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         datasetId:(NSString *)datasetId
                           tableId:(NSString *)tableId {
  NSArray *pathParams = @[
    @"datasetId", @"projectId", @"tableId"
  ];
  NSString *pathURITemplate = @"projects/{+projectId}/datasets/{+datasetId}/tables/{+tableId}";
  GTLRBigqueryQuery_TablesDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.tableId = tableId;
  query.loggingName = @"bigquery.tables.delete";
  return query;
}

@end

@implementation GTLRBigqueryQuery_TablesGet

@dynamic datasetId, projectId, selectedFields, tableId, view;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         datasetId:(NSString *)datasetId
                           tableId:(NSString *)tableId {
  NSArray *pathParams = @[
    @"datasetId", @"projectId", @"tableId"
  ];
  NSString *pathURITemplate = @"projects/{+projectId}/datasets/{+datasetId}/tables/{+tableId}";
  GTLRBigqueryQuery_TablesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.tableId = tableId;
  query.expectedObjectClass = [GTLRBigquery_Table class];
  query.loggingName = @"bigquery.tables.get";
  return query;
}

@end

@implementation GTLRBigqueryQuery_TablesGetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRBigquery_GetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"{+resource}:getIamPolicy";
  GTLRBigqueryQuery_TablesGetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRBigquery_Policy class];
  query.loggingName = @"bigquery.tables.getIamPolicy";
  return query;
}

@end

@implementation GTLRBigqueryQuery_TablesInsert

@dynamic datasetId, projectId;

+ (instancetype)queryWithObject:(GTLRBigquery_Table *)object
                      projectId:(NSString *)projectId
                      datasetId:(NSString *)datasetId {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[
    @"datasetId", @"projectId"
  ];
  NSString *pathURITemplate = @"projects/{+projectId}/datasets/{+datasetId}/tables";
  GTLRBigqueryQuery_TablesInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.expectedObjectClass = [GTLRBigquery_Table class];
  query.loggingName = @"bigquery.tables.insert";
  return query;
}

@end

@implementation GTLRBigqueryQuery_TablesList

@dynamic datasetId, maxResults, pageToken, projectId;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         datasetId:(NSString *)datasetId {
  NSArray *pathParams = @[
    @"datasetId", @"projectId"
  ];
  NSString *pathURITemplate = @"projects/{+projectId}/datasets/{+datasetId}/tables";
  GTLRBigqueryQuery_TablesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.expectedObjectClass = [GTLRBigquery_TableList class];
  query.loggingName = @"bigquery.tables.list";
  return query;
}

@end

@implementation GTLRBigqueryQuery_TablesPatch

@dynamic autodetectSchema, datasetId, projectId, tableId;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"autodetectSchema" : @"autodetect_schema" };
}

+ (instancetype)queryWithObject:(GTLRBigquery_Table *)object
                      projectId:(NSString *)projectId
                      datasetId:(NSString *)datasetId
                        tableId:(NSString *)tableId {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[
    @"datasetId", @"projectId", @"tableId"
  ];
  NSString *pathURITemplate = @"projects/{+projectId}/datasets/{+datasetId}/tables/{+tableId}";
  GTLRBigqueryQuery_TablesPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.tableId = tableId;
  query.expectedObjectClass = [GTLRBigquery_Table class];
  query.loggingName = @"bigquery.tables.patch";
  return query;
}

@end

@implementation GTLRBigqueryQuery_TablesSetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRBigquery_SetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"{+resource}:setIamPolicy";
  GTLRBigqueryQuery_TablesSetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRBigquery_Policy class];
  query.loggingName = @"bigquery.tables.setIamPolicy";
  return query;
}

@end

@implementation GTLRBigqueryQuery_TablesTestIamPermissions

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRBigquery_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"{+resource}:testIamPermissions";
  GTLRBigqueryQuery_TablesTestIamPermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRBigquery_TestIamPermissionsResponse class];
  query.loggingName = @"bigquery.tables.testIamPermissions";
  return query;
}

@end

@implementation GTLRBigqueryQuery_TablesUpdate

@dynamic autodetectSchema, datasetId, projectId, tableId;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"autodetectSchema" : @"autodetect_schema" };
}

+ (instancetype)queryWithObject:(GTLRBigquery_Table *)object
                      projectId:(NSString *)projectId
                      datasetId:(NSString *)datasetId
                        tableId:(NSString *)tableId {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[
    @"datasetId", @"projectId", @"tableId"
  ];
  NSString *pathURITemplate = @"projects/{+projectId}/datasets/{+datasetId}/tables/{+tableId}";
  GTLRBigqueryQuery_TablesUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.tableId = tableId;
  query.expectedObjectClass = [GTLRBigquery_Table class];
  query.loggingName = @"bigquery.tables.update";
  return query;
}

@end
