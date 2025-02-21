End
Void
Deletr
Stop
Close
































































































+ (instancetype)queryWithObject:(GTLRCloudMemorystoreforMemcached_UpdateParametersRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:updateParameters";
  GTLRCloudMemorystoreforMemcachedQuery_ProjectsLocationsInstancesUpdateParameters *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMemorystoreforMemcached_Operation class];
  query.loggingName = @"memcache.projects.locations.instances.updateParameters";
  return query;
}

@end

@implementation GTLRCloudMemorystoreforMemcachedQuery_ProjectsLocationsInstancesUpgrade

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudMemorystoreforMemcached_GoogleCloudMemcacheV1UpgradeInstanceRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:upgrade";
  GTLRCloudMemorystoreforMemcachedQuery_ProjectsLocationsInstancesUpgrade *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMemorystoreforMemcached_Operation class];
  query.loggingName = @"memcache.projects.locations.instances.upgrade";
  return query;
}

@end

@implementation GTLRCloudMemorystoreforMemcachedQuery_ProjectsLocationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}/locations";
  GTLRCloudMemorystoreforMemcachedQuery_ProjectsLocationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMemorystoreforMemcached_ListLocationsResponse class];
  query.loggingName = @"memcache.projects.locations.list";
  return query;
}

@end

@implementation GTLRCloudMemorystoreforMemcachedQuery_ProjectsLocationsOperationsCancel

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudMemorystoreforMemcached_CancelOperationRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:cancel";
  GTLRCloudMemorystoreforMemcachedQuery_ProjectsLocationsOperationsCancel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMemorystoreforMemcached_Empty class];
  query.loggingName = @"memcache.projects.locations.operations.cancel";
  return query;
}

@end

@implementation GTLRCloudMemorystoreforMemcachedQuery_ProjectsLocationsOperationsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudMemorystoreforMemcachedQuery_ProjectsLocationsOperationsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMemorystoreforMemcached_Empty class];
  query.loggingName = @"memcache.projects.locations.operations.delete";
  return query;
}

@end

@implementation GTLRCloudMemorystoreforMemcachedQuery_ProjectsLocationsOperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudMemorystoreforMemcachedQuery_ProjectsLocationsOperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMemorystoreforMemcached_Operation class];
  query.loggingName = @"memcache.projects.locations.operations.get";
  return query;
}

@end

@implementation GTLRCloudMemorystoreforMemcachedQuery_ProjectsLocationsOperationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}/operations";
  GTLRCloudMemorystoreforMemcachedQuery_ProjectsLocationsOperationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudMemorystoreforMemcached_ListOperationsResponse class];
  query.loggingName = @"memcache.projects.locations.operations.list";
  return query;
}

@end
